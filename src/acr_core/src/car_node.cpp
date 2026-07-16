#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "acr_interfaces/action/charge_robot.hpp"
#include "acr_interfaces/srv/auth_vehicle.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

using namespace std::chrono_literals;

class CarNode : public rclcpp::Node
{
public:
  using ChargeRobot = acr_interfaces::action::ChargeRobot;
  using GoalHandle = rclcpp_action::ClientGoalHandle<ChargeRobot>;

  CarNode() : Node("car_node")
  {
    vin_number_ = declare_parameter<std::string>("vin_number", "ACR-2026-0001");
    target_angle_ = declare_parameter<double>("target_angle", 1.0);
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
    auto request = std::make_shared<acr_interfaces::srv::AuthVehicle::Request>();
    request->vin_number = vin_number_;
    auth_client_->async_send_request(request,
      std::bind(&CarNode::auth_response, this, std::placeholders::_1));
  }

  void auth_response(rclcpp::Client<acr_interfaces::srv::AuthVehicle>::SharedFuture future)
  {
    if (!future.get()->is_approved) {
      RCLCPP_ERROR(get_logger(), "Vehicle authentication rejected");
      return;
    }
    RCLCPP_INFO(get_logger(), "Vehicle authenticated; waiting for charging action server");
    action_wait_timer_ = create_wall_timer(200ms, std::bind(&CarNode::send_goal_when_ready, this));
  }

  void send_goal_when_ready()
  {
    if (!action_client_->action_server_is_ready()) {
      return;
    }
    action_wait_timer_->cancel();
    ChargeRobot::Goal goal;
    goal.target_angle = target_angle_;
    rclcpp_action::Client<ChargeRobot>::SendGoalOptions options;
    options.goal_response_callback = std::bind(&CarNode::goal_response, this, std::placeholders::_1);
    options.feedback_callback = std::bind(&CarNode::feedback, this, std::placeholders::_1, std::placeholders::_2);
    options.result_callback = std::bind(&CarNode::result, this, std::placeholders::_1);
    action_client_->async_send_goal(goal, options);
  }

  void goal_response(const GoalHandle::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(get_logger(), "Charging goal rejected by ACR server");
    } else {
      RCLCPP_INFO(get_logger(), "Charging goal accepted");
    }
  }

  void feedback(GoalHandle::SharedPtr, const std::shared_ptr<const ChargeRobot::Feedback> feedback)
  {
    RCLCPP_INFO(get_logger(), "Moving to charging port: %.1f%%", feedback->current_percent);
  }

  void result(const GoalHandle::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        RCLCPP_INFO(get_logger(), "Charging action succeeded");
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(get_logger(), "Charging action aborted by MRM");
        break;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_WARN(get_logger(), "Charging action canceled");
        break;
      default:
        RCLCPP_ERROR(get_logger(), "Charging action ended with unknown result");
        break;
    }
  }

  std::string vin_number_;
  double target_angle_{1.0};
  rclcpp::Client<acr_interfaces::srv::AuthVehicle>::SharedPtr auth_client_;
  rclcpp_action::Client<ChargeRobot>::SharedPtr action_client_;
  rclcpp::TimerBase::SharedPtr startup_timer_;
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
