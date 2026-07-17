#include <algorithm>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "acr_interfaces/action/charge_robot.hpp"
#include "acr_interfaces/srv/auth_vehicle.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

using namespace std::chrono_literals;

namespace terminal_color
{
constexpr const char * kReset = "\033[0m";
constexpr const char * kService = "\033[1;36m";   // cyan
constexpr const char * kAction = "\033[1;35m";    // magenta
constexpr const char * kFeedback = "\033[1;33m";  // yellow
}  // namespace terminal_color

class CarNode : public rclcpp::Node
{
public:
  using ChargeRobot = acr_interfaces::action::ChargeRobot;
  using GoalHandle = rclcpp_action::ClientGoalHandle<ChargeRobot>;

  CarNode() : Node("car_node")
  {
    vin_number_ = declare_parameter<std::string>("vin_number", "ACR-2026-0001");
    target_angle_ = declare_parameter<double>("target_angle", 0.724);
    auth_request_delay_sec_ = declare_parameter<double>("auth_request_delay_sec", 0.0);
    action_goal_delay_sec_ = declare_parameter<double>("action_goal_delay_sec", 0.0);
    auth_client_ = create_client<acr_interfaces::srv::AuthVehicle>("/auth_vehicle");
    action_client_ = rclcpp_action::create_client<ChargeRobot>(this, "/charge_robot");
    startup_timer_ = create_wall_timer(200ms, std::bind(&CarNode::begin_authentication, this));
  }

private:
  void begin_authentication()
  {
    if (!auth_client_->service_is_ready()) {
      return;
    }
    startup_timer_->cancel();
    RCLCPP_INFO(get_logger(), "%s[SERVICE]%s Server found; request will be sent in %.1f s",
      terminal_color::kService, terminal_color::kReset, auth_request_delay_sec_);
    auth_request_timer_ = create_wall_timer(
      demo_delay(auth_request_delay_sec_),
      std::bind(&CarNode::send_auth_request, this));
  }

  void send_auth_request()
  {
    auth_request_timer_->cancel();
    RCLCPP_INFO(get_logger(), "%s[SERVICE]%s Requesting vehicle authentication for VIN: %s",
      terminal_color::kService, terminal_color::kReset, vin_number_.c_str());
    auto request = std::make_shared<acr_interfaces::srv::AuthVehicle::Request>();
    request->vin_number = vin_number_;
    auth_client_->async_send_request(request,
      std::bind(&CarNode::auth_response, this, std::placeholders::_1));
  }

  void auth_response(rclcpp::Client<acr_interfaces::srv::AuthVehicle>::SharedFuture future)
  {
    if (!future.get()->is_approved) {
      RCLCPP_ERROR(get_logger(), "%s[SERVICE]%s Vehicle authentication rejected",
        terminal_color::kService, terminal_color::kReset);
      return;
    }
    RCLCPP_INFO(get_logger(), "%s[SERVICE]%s Vehicle authenticated; Action goal will be sent in %.1f s",
      terminal_color::kService, terminal_color::kReset, action_goal_delay_sec_);
    action_delay_timer_ = create_wall_timer(
      demo_delay(action_goal_delay_sec_),
      std::bind(&CarNode::begin_action_wait, this));
  }

  void begin_action_wait()
  {
    action_delay_timer_->cancel();
    RCLCPP_INFO(get_logger(), "%s[ACTION]%s Waiting for charging action server",
      terminal_color::kAction, terminal_color::kReset);
    action_wait_timer_ = create_wall_timer(200ms, std::bind(&CarNode::send_goal_when_ready, this));
  }

  static std::chrono::milliseconds demo_delay(double seconds)
  {
    return std::chrono::milliseconds(std::max<long long>(1, static_cast<long long>(seconds * 1000.0)));
  }

  void send_goal_when_ready()
  {
    if (!action_client_->action_server_is_ready()) {
      return;
    }
    action_wait_timer_->cancel();
    ChargeRobot::Goal goal;
    goal.target_angle = target_angle_;
    RCLCPP_INFO(get_logger(), "%s[ACTION]%s Sending charging goal: joint1 target %.2f rad",
      terminal_color::kAction, terminal_color::kReset, target_angle_);
    rclcpp_action::Client<ChargeRobot>::SendGoalOptions options;
    options.goal_response_callback = std::bind(&CarNode::goal_response, this, std::placeholders::_1);
    options.feedback_callback = std::bind(&CarNode::feedback, this, std::placeholders::_1, std::placeholders::_2);
    options.result_callback = std::bind(&CarNode::result, this, std::placeholders::_1);
    action_client_->async_send_goal(goal, options);
  }

  void goal_response(const GoalHandle::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(get_logger(), "%s[ACTION]%s Charging goal rejected by ACR server",
        terminal_color::kAction, terminal_color::kReset);
    } else {
      RCLCPP_INFO(get_logger(), "%s[ACTION]%s Charging goal accepted",
        terminal_color::kAction, terminal_color::kReset);
    }
  }

  void feedback(GoalHandle::SharedPtr, const std::shared_ptr<const ChargeRobot::Feedback> feedback)
  {
    RCLCPP_INFO(get_logger(), "%s[FEEDBACK]%s Moving to charging port: %.1f%%",
      terminal_color::kFeedback, terminal_color::kReset, feedback->current_percent);
  }

  void result(const GoalHandle::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        RCLCPP_INFO(get_logger(), "%s[ACTION]%s Charging action succeeded",
          terminal_color::kAction, terminal_color::kReset);
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(get_logger(), "%s[ACTION RESULT][CPS]%s Charging action aborted: Collision Prevention Stop",
          terminal_color::kAction, terminal_color::kReset);
        break;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_WARN(get_logger(), "%s[ACTION]%s Charging action canceled",
          terminal_color::kAction, terminal_color::kReset);
        break;
      default:
        RCLCPP_ERROR(get_logger(), "%s[ACTION]%s Charging action ended with unknown result",
          terminal_color::kAction, terminal_color::kReset);
        break;
    }
  }

  std::string vin_number_;
  double target_angle_{0.724};
  double auth_request_delay_sec_{0.0};
  double action_goal_delay_sec_{0.0};
  rclcpp::Client<acr_interfaces::srv::AuthVehicle>::SharedPtr auth_client_;
  rclcpp_action::Client<ChargeRobot>::SharedPtr action_client_;
  rclcpp::TimerBase::SharedPtr startup_timer_;
  rclcpp::TimerBase::SharedPtr auth_request_timer_;
  rclcpp::TimerBase::SharedPtr action_delay_timer_;
  rclcpp::TimerBase::SharedPtr action_wait_timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<CarNode>();
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}
