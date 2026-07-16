cmake_minimum_required(VERSION 3.8)
project(acr_core)

find_package(ament_cmake REQUIRED)
find_package(acr_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(acr_node src/acr_node.cpp)
ament_target_dependencies(acr_node
  acr_interfaces rclcpp rclcpp_action sensor_msgs std_msgs)

add_executable(car_node src/car_node.cpp)
ament_target_dependencies(car_node
  acr_interfaces rclcpp rclcpp_action)

install(TARGETS acr_node car_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  config
  launch
  models
  urdf
  worlds
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
