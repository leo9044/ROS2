import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = get_package_share_directory('acr_core')
    gz_sim_share = get_package_share_directory('ros_gz_sim')

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gz_sim_share, 'launch', 'gz_sim.launch.py')),
        launch_arguments={
            'gz_args': f'-r {os.path.join(pkg_share, "worlds", "acr_empty.sdf")}',
            'on_exit_shutdown': 'true',
        }.items())

    spawn_robot = Node(
        package='ros_gz_sim', executable='create', output='screen',
        arguments=['-name', 'acr_rrbot', '-file',
                   os.path.join(pkg_share, 'urdf', 'acr_rrbot.urdf'),
                   '-x', '0.0', '-y', '0.0', '-z', '0.02'])

    spawn_vehicle = Node(
        package='ros_gz_sim', executable='create', output='screen',
        arguments=['-name', 'ev_vehicle', '-file',
                   os.path.join(pkg_share, 'models', 'ev_vehicle.sdf'),
                   '-x', '3.0', '-y', '0.0', '-z', '0.0'])

    with open(os.path.join(pkg_share, 'urdf', 'acr_rrbot.urdf'), encoding='utf-8') as urdf_file:
        robot_description = urdf_file.read()

    bridge = Node(
        package='ros_gz_bridge', executable='parameter_bridge', output='screen',
        parameters=[{'config_file': os.path.join(pkg_share, 'config', 'bridge.yaml')}])

    robot_state_publisher = Node(
        package='robot_state_publisher', executable='robot_state_publisher', output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': True}])

    acr_node = Node(
        package='acr_core', executable='acr_node', output='screen',
        parameters=[{'use_sim_time': True, 'safety_distance': 0.3}])

    car_node = Node(
        package='acr_core', executable='car_node', output='screen',
        parameters=[{'target_angle': 1.0, 'vin_number': 'ACR-2026-0001'}])

    spawn_obstacle = LaunchConfiguration('spawn_obstacle')
    obstacle_delay_sec = LaunchConfiguration('obstacle_delay_sec')
    obstacle = Node(
        package='ros_gz_sim', executable='create', output='screen',
        condition=IfCondition(spawn_obstacle),
        arguments=['-world', 'acr_world', '-name', 'mrm_obstacle', '-file',
                   os.path.join(pkg_share, 'models', 'box_obstacle.sdf'),
                   '-x', '0.75', '-y', '0.0', '-z', '0.30'])

    return LaunchDescription([
        DeclareLaunchArgument('spawn_obstacle', default_value='false',
                              description='Spawn the MRM test Box during charging.'),
        DeclareLaunchArgument('obstacle_delay_sec', default_value='5.0',
                              description='Delay in seconds before spawning the MRM test Box.'),
        gazebo,
        TimerAction(period=2.0, actions=[spawn_robot, spawn_vehicle, bridge, robot_state_publisher, acr_node]),
        TimerAction(period=4.0, actions=[car_node]),
        TimerAction(period=obstacle_delay_sec, actions=[obstacle]),
    ])
