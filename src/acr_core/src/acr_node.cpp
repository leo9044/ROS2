#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <thread>

#include "acr_interfaces/action/charge_robot.hpp"
#include "acr_interfaces/srv/auth_vehicle.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;

class AcrNode : public rclcpp::Node
{
public:
  using ChargeRobot = acr_interfaces::action::ChargeRobot;
  using GoalHandle = rclcpp_action::ServerGoalHandle<ChargeRobot>;

  AcrNode() : Node("acr_node")
  {
    safety_distance_ = this->declare_parameter<double>("safety_distance", 0.3);
    approved_vin_ = this->declare_parameter<std::string>("approved_vin", "ACR-2026-0001");
    control_period_ms_ = this->declare_parameter<int>("control_period_ms", 50);
    joint2_target_angle_ = this->declare_parameter<double>("joint2_target_angle", 0.70);

    command_pub_ = this->create_publisher<std_msgs::msg::Float64>("/cmd_pos", 10);
    joint2_command_pub_ = this->create_publisher<std_msgs::msg::Float64>("/joint2_cmd_pos", 10);

    scan_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    rclcpp::SubscriptionOptions scan_options;
    scan_options.callback_group = scan_group_;
    scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
      "/scan", rclcpp::SensorDataQoS(),
      std::bind(&AcrNode::scan_callback, this, std::placeholders::_1), scan_options);
    joint_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      "/joint_states", 10, std::bind(&AcrNode::joint_callback, this, std::placeholders::_1));

    auth_service_ = this->create_service<acr_interfaces::srv::AuthVehicle>(
      "/auth_vehicle", std::bind(&AcrNode::auth_callback, this,
      std::placeholders::_1, std::placeholders::_2));

    action_server_ = rclcpp_action::create_server<ChargeRobot>(
      this, "/charge_robot",
      std::bind(&AcrNode::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&AcrNode::handle_cancel, this, std::placeholders::_1),
      std::bind(&AcrNode::handle_accepted, this, std::placeholders::_1));

    parameter_callback_ = this->add_on_set_parameters_callback(
      std::bind(&AcrNode::set_parameters, this, std::placeholders::_1));
    hold_timer_ = this->create_wall_timer(50ms, std::bind(&AcrNode::publish_idle_hold, this));
    RCLCPP_INFO(get_logger(), "ACR server ready: safety_distance=%.2f m", safety_distance_);
  }

private:
  void joint_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    std::lock_guard<std::mutex> lock(state_mutex_);
    for (size_t i = 0; i < msg->name.size() && i < msg->position.size(); ++i) {
      if (msg->name[i] == "joint1") {
        joint1_angle_ = msg->position[i];
        has_joint_state_ = true;
      } else if (msg->name[i] == "joint2") {
        joint2_angle_ = msg->position[i];
      }
    }
  }

  void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
  {
    double min_distance = std::numeric_limits<double>::infinity();
    for (const auto range : msg->ranges) {
      if (std::isfinite(range) && range >= msg->range_min && range <= msg->range_max) {
        min_distance = std::min(min_distance, static_cast<double>(range));
      }
    }
    if (min_distance < safety_distance_ && action_active_.load()) {
      if (!is_danger_.exchange(true)) {
        publish_hold_position();
        RCLCPP_ERROR(get_logger(), "MRM: obstacle %.3f m < safety_distance %.3f m", min_distance, safety_distance_);
      }
    }
  }

  void auth_callback(const std::shared_ptr<acr_interfaces::srv::AuthVehicle::Request> request,
                     std::shared_ptr<acr_interfaces::srv::AuthVehicle::Response> response)
  {
    authenticated_.store(request->vin_number == approved_vin_);
    response->is_approved = authenticated_.load();
    RCLCPP_INFO(get_logger(), "VIN [%s]: %s", request->vin_number.c_str(),
      response->is_approved ? "approved" : "rejected");
  }

  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &,
                                           std::shared_ptr<const ChargeRobot::Goal> goal)
  {
    if (!authenticated_.load() || action_active_.load() || std::abs(goal->target_angle) > 3.14) {
      RCLCPP_WARN(get_logger(), "Charging goal rejected");
      return rclcpp_action::GoalResponse::REJECT;
    }
    is_danger_.store(false);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandle>)
  {
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    std::thread{std::bind(&AcrNode::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandle> goal_handle)
  {
    action_active_.store(true);
    const double start_angle = current_angle();
    const double start_joint2_angle = current_joint2_angle();
    const double target = goal_handle->get_goal()->target_angle;
    const double pre_approach_joint1 = start_angle + 0.65 * (target - start_angle);
    const double pre_approach_joint2 = start_joint2_angle + 0.35 * (joint2_target_angle_ - start_joint2_angle);
    constexpr int kSteps = 200;
    auto result = std::make_shared<ChargeRobot::Result>();
    publish_joint2_command(start_joint2_angle);

    for (int step = 0; step <= kSteps && rclcpp::ok(); ++step) {
      if (is_danger_.load()) {
        publish_hold_position();
        result->success = false;
        goal_handle->abort(result);
        action_active_.store(false);
        return;
      }
      if (goal_handle->is_canceling()) {
        publish_hold_position();
        result->success = false;
        goal_handle->canceled(result);
        action_active_.store(false);
        return;
      }
      const double ratio = static_cast<double>(step) / kSteps;
      if (ratio < 0.65) {
        const double phase = smoothstep(ratio / 0.65);
        publish_command(interpolate(start_angle, pre_approach_joint1, phase));
        publish_joint2_command(interpolate(start_joint2_angle, pre_approach_joint2, phase));
      } else {
        const double phase = smoothstep((ratio - 0.65) / 0.35);
        publish_command(interpolate(pre_approach_joint1, target, phase));
        publish_joint2_command(interpolate(pre_approach_joint2, joint2_target_angle_, phase));
      }
      auto feedback = std::make_shared<ChargeRobot::Feedback>();
      const double travel = std::abs(target - start_angle);
      const double measured_travel = std::abs(current_angle() - start_angle);
      feedback->current_percent = travel < 1e-6 ? 100.0 :
        std::clamp(100.0 * measured_travel / travel, 0.0, 100.0);
      goal_handle->publish_feedback(feedback);
      std::this_thread::sleep_for(std::chrono::milliseconds(control_period_ms_));
    }
    publish_command(target);
    publish_joint2_command(joint2_target_angle_);
    result->success = true;
    goal_handle->succeed(result);
    action_active_.store(false);
  }

  double current_angle()
  {
    std::lock_guard<std::mutex> lock(state_mutex_);
    return has_joint_state_ ? joint1_angle_ : 0.0;
  }

  static double smoothstep(double value)
  {
    const double t = std::clamp(value, 0.0, 1.0);
    return t * t * (3.0 - 2.0 * t);
  }

  static double interpolate(double from, double to, double ratio)
  {
    return from + (to - from) * ratio;
  }

  double current_joint2_angle()
  {
    std::lock_guard<std::mutex> lock(state_mutex_);
    return has_joint_state_ ? joint2_angle_ : 0.0;
  }

  void publish_command(double angle)
  {
    std_msgs::msg::Float64 command;
    command.data = angle;
    command_pub_->publish(command);
    hold_angle_.store(angle);
  }

  void publish_joint2_command(double angle)
  {
    std_msgs::msg::Float64 command;
    command.data = angle;
    joint2_command_pub_->publish(command);
    joint2_hold_angle_.store(angle);
  }

  void publish_hold_position()
  {
    publish_command(current_angle());
    publish_joint2_command(current_joint2_angle());
  }

  void publish_idle_hold()
  {
    if (!action_active_.load()) {
      publish_command(hold_angle_.load());
      publish_joint2_command(joint2_hold_angle_.load());
    }
  }

  rcl_interfaces::msg::SetParametersResult set_parameters(const std::vector<rclcpp::Parameter> & parameters)
  {
    rcl_interfaces::msg::SetParametersResult result;
    result.successful = true;
    for (const auto & parameter : parameters) {
      if (parameter.get_name() == "safety_distance") {
        if (parameter.as_double() <= 0.0) {
          result.successful = false;
          result.reason = "safety_distance must be positive";
        } else {
          safety_distance_ = parameter.as_double();
        }
      }
    }
    return result;
  }

  double safety_distance_{0.3};
  std::string approved_vin_;
  int control_period_ms_{50};
  double joint1_angle_{0.0};
  double joint2_angle_{0.0};
  double joint2_target_angle_{-0.70};
  bool has_joint_state_{false};
  std::mutex state_mutex_;
  std::atomic_bool authenticated_{false};
  std::atomic_bool is_danger_{false};
  std::atomic_bool action_active_{false};
  std::atomic<double> hold_angle_{0.0};
  std::atomic<double> joint2_hold_angle_{0.0};
  rclcpp::CallbackGroup::SharedPtr scan_group_;
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr command_pub_;
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr joint2_command_pub_;
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;
  rclcpp::Service<acr_interfaces::srv::AuthVehicle>::SharedPtr auth_service_;
  rclcpp_action::Server<ChargeRobot>::SharedPtr action_server_;
  OnSetParametersCallbackHandle::SharedPtr parameter_callback_;
  rclcpp::TimerBase::SharedPtr hold_timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<AcrNode>();
  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(node);
  executor.spin();
  rclcpp::shutdown();
  return 0;
}
