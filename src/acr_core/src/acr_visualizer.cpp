#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker_array.hpp"

using namespace std::chrono_literals;

class AcrVisualizer : public rclcpp::Node
{
public:
  AcrVisualizer() : Node("acr_visualizer")
  {
    show_obstacle_ = declare_parameter<bool>("show_obstacle", false);
    publisher_ = create_publisher<visualization_msgs::msg::MarkerArray>("/acr_scene_markers", 1);
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
      2.60, 0.0, 0.55, 2.4, 1.25, 0.55, 0.08F, 0.28F, 0.78F));
    scene.markers.push_back(marker(1, "ev_vehicle", visualization_msgs::msg::Marker::CUBE,
      2.40, 0.0, 1.02, 1.20, 1.12, 0.42, 0.12F, 0.16F, 0.22F));
    auto port = marker(2, "ev_vehicle", visualization_msgs::msg::Marker::CYLINDER,
      1.37, 0.0, 0.72, 0.22, 0.035, 0.22, 1.0F, 0.45F, 0.02F);
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
        1.18, 0.11, 0.43, 0.18, 0.18, 0.86, 0.08F, 0.08F, 0.12F));
      scene.markers.push_back(marker(11, "mrm_person", visualization_msgs::msg::Marker::CYLINDER,
        1.18, -0.11, 0.43, 0.18, 0.18, 0.86, 0.08F, 0.08F, 0.12F));
      scene.markers.push_back(marker(12, "mrm_person", visualization_msgs::msg::Marker::CUBE,
        1.18, 0.0, 1.12, 0.30, 0.36, 0.58, 0.85F, 0.05F, 0.05F));
      scene.markers.push_back(marker(13, "mrm_person", visualization_msgs::msg::Marker::SPHERE,
        1.18, 0.0, 1.57, 0.36, 0.36, 0.36, 0.95F, 0.72F, 0.55F));
    }
    publisher_->publish(scene);
  }

  bool show_obstacle_{false};
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<AcrVisualizer>());
  rclcpp::shutdown();
  return 0;
}
