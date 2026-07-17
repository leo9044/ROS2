#include <chrono>
#include <iomanip>
#include <memory>
#include <sstream>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker_array.hpp"

using namespace std::chrono_literals;

class AcrVisualizer : public rclcpp::Node
{
public:
  AcrVisualizer() : Node("acr_visualizer")
  {
    show_obstacle_ = declare_parameter<bool>("show_obstacle", false);
    publisher_ = create_publisher<visualization_msgs::msg::MarkerArray>("/acr_scene_markers", 1);
    status_sub_ = create_subscription<std_msgs::msg::String>("/acr/status", rclcpp::QoS(1).transient_local(),
      [this](const std_msgs::msg::String::SharedPtr message) { status_ = message->data; });
    progress_sub_ = create_subscription<std_msgs::msg::Float64>("/acr/progress", 10,
      [this](const std_msgs::msg::Float64::SharedPtr message) { progress_ = message->data; });
    safety_distance_sub_ = create_subscription<std_msgs::msg::Float64>("/acr/safety_distance", rclcpp::QoS(1).transient_local(),
      [this](const std_msgs::msg::Float64::SharedPtr message) { safety_distance_ = message->data; });
    timer_ = create_wall_timer(500ms, std::bind(&AcrVisualizer::publish_scene, this));
  }

private:
  visualization_msgs::msg::Marker marker(int id, const std::string & name, int type,
                                           double x, double y, double z,
                                           double sx, double sy, double sz,
                                           float r, float g, float b)
  {
    visualization_msgs::msg::Marker result;
    result.header.frame_id = "world";
    result.header.stamp = now();
    result.ns = name;
    result.id = id;
    result.type = type;
    result.action = visualization_msgs::msg::Marker::ADD;
    result.pose.position.x = x;
    result.pose.position.y = y;
    result.pose.position.z = z;
    result.pose.orientation.w = 1.0;
    result.scale.x = sx;
    result.scale.y = sy;
    result.scale.z = sz;
    result.color.r = r;
    result.color.g = g;
    result.color.b = b;
    result.color.a = 1.0F;
    return result;
  }

  void publish_scene()
  {
    visualization_msgs::msg::MarkerArray scene;
    // Vehicle model: Gazebo pose x=2.60 plus its rear charging port at x=-1.23.
    scene.markers.push_back(marker(0, "ev_vehicle", visualization_msgs::msg::Marker::CUBE,
      2.60, 0.0, 0.935, 2.50, 1.25, 0.63, 0.08F, 0.28F, 0.78F));
    scene.markers.push_back(marker(1, "ev_vehicle", visualization_msgs::msg::Marker::CUBE,
      2.50, 0.0, 1.43, 1.35, 1.12, 0.40, 0.12F, 0.16F, 0.22F));
    scene.markers.push_back(marker(8, "ev_vehicle", visualization_msgs::msg::Marker::CUBE,
      2.60, 0.0, 0.50, 0.78, 0.92, 0.12, 0.06F, 0.12F, 0.25F));
    scene.markers.push_back(marker(9, "ev_vehicle", visualization_msgs::msg::Marker::CUBE,
      1.355, 0.0, 1.10, 0.035, 0.32, 0.32, 0.03F, 0.03F, 0.03F));
    auto port = marker(2, "ev_vehicle", visualization_msgs::msg::Marker::CYLINDER,
      1.325, 0.0, 1.10, 0.22, 0.22, 0.055, 1.0F, 0.45F, 0.02F);
    port.pose.orientation.y = 0.7071068;
    port.pose.orientation.w = 0.7071068;
    scene.markers.push_back(port);
    for (int i = 0; i < 4; ++i) {
      const double x = i < 2 ? 3.30 : 1.88;
      const double y = (i % 2 == 0) ? 0.69 : -0.69;
      auto wheel = marker(3 + i, "ev_vehicle", visualization_msgs::msg::Marker::CYLINDER,
        x, y, 0.32, 0.56, 0.56, 0.16, 0.03F, 0.03F, 0.03F);
      wheel.pose.orientation.x = 0.7071068;
      wheel.pose.orientation.w = 0.7071068;
      scene.markers.push_back(wheel);
    }
    if (show_obstacle_) {
      scene.markers.push_back(marker(10, "mrm_person", visualization_msgs::msg::Marker::CYLINDER,
        1.23, 0.085, 0.34, 0.14, 0.14, 0.68, 0.08F, 0.08F, 0.12F));
      scene.markers.push_back(marker(11, "mrm_person", visualization_msgs::msg::Marker::CYLINDER,
        1.23, -0.085, 0.34, 0.14, 0.14, 0.68, 0.08F, 0.08F, 0.12F));
      scene.markers.push_back(marker(12, "mrm_person", visualization_msgs::msg::Marker::CUBE,
        1.23, 0.0, 0.85, 0.24, 0.28, 0.45, 0.85F, 0.05F, 0.05F));
      scene.markers.push_back(marker(13, "mrm_person", visualization_msgs::msg::Marker::SPHERE,
        1.23, 0.0, 1.22, 0.28, 0.28, 0.28, 0.95F, 0.72F, 0.55F));
    }
    add_system_markers(scene);
    publisher_->publish(scene);
  }

  void add_system_markers(visualization_msgs::msg::MarkerArray & scene)
  {
    auto safety = marker(20, "acr_system", visualization_msgs::msg::Marker::CYLINDER,
      0.0, 0.0, 0.0, 2.0 * safety_distance_, 2.0 * safety_distance_, 0.018,
      0.95F, 0.05F, 0.05F);
    safety.header.frame_id = "lidar_link";
    safety.color.a = 0.22F;
    scene.markers.push_back(safety);

    std::ostringstream text;
    if (status_ == "MOVING TO CHARGE PORT") {
      text << "MOVING TO CHARGE PORT: " << std::fixed << std::setprecision(0) << progress_ << "%";
    } else {
      text << status_;
    }
    auto hud = marker(21, "acr_system", visualization_msgs::msg::Marker::TEXT_VIEW_FACING,
      0.0, 0.0, 2.15, 0.0, 0.0, 0.16, 0.20F, 0.95F, 0.30F);
    hud.text = text.str();
    if (status_ == "MRM ACTIVE" || status_ == "AUTH REJECTED") {
      hud.color.r = 1.0F; hud.color.g = 0.05F; hud.color.b = 0.05F;
    } else if (status_ == "MOVING TO CHARGE PORT") {
      hud.color.r = 1.0F; hud.color.g = 0.80F; hud.color.b = 0.05F;
    }
    scene.markers.push_back(hud);
  }

  bool show_obstacle_{false};
  std::string status_{"STANDBY"};
  double progress_{0.0};
  double safety_distance_{0.15};
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr status_sub_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr progress_sub_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr safety_distance_sub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AcrVisualizer>());
  rclcpp::shutdown();
  return 0;
}
