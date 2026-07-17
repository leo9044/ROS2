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
                   '-x', '2.60', '-y', '0.0', '-z', '0.0'])

    with open(os.path.join(pkg_share, 'urdf', 'acr_rrbot.urdf'), encoding='utf-8') as urdf_file:
        robot_description = urdf_file.read()

    bridge = Node(
        package='ros_gz_bridge', executable='parameter_bridge', output='screen',
        parameters=[
            {'config_file': os.path.join(pkg_share, 'config', 'bridge.yaml')},
            {'override_frame_id': 'lidar_link'},
        ])

    robot_state_publisher = Node(
        package='robot_state_publisher', executable='robot_state_publisher', output='screen',
        parameters=[{'robot_description': robot_description, 'use_sim_time': True}])

    safety_distance = LaunchConfiguration('safety_distance')
    spawn_obstacle = LaunchConfiguration('spawn_obstacle')
    obstacle_delay_sec = LaunchConfiguration('obstacle_delay_sec')
    control_period_ms = LaunchConfiguration('control_period_ms')
    car_start_delay_sec = LaunchConfiguration('car_start_delay_sec')
    auth_request_delay_sec = LaunchConfiguration('auth_request_delay_sec')
    auth_response_delay_sec = LaunchConfiguration('auth_response_delay_sec')
    action_goal_delay_sec = LaunchConfiguration('action_goal_delay_sec')
    vin_number = LaunchConfiguration('vin_number')
    target_angle = LaunchConfiguration('target_angle')
    acr_node = Node(
        package='acr_core', executable='acr_node', output='screen',
        parameters=[
            {'use_sim_time': True, 'safety_distance': safety_distance},
            {'control_period_ms': control_period_ms},
            {'auth_response_delay_sec': auth_response_delay_sec},
        ])

    car_node = Node(
        package='acr_core', executable='car_node', output='screen',
        parameters=[
            {'target_angle': target_angle, 'vin_number': vin_number},
            {'auth_request_delay_sec': auth_request_delay_sec},
            {'action_goal_delay_sec': action_goal_delay_sec},
        ])

    scene_visualizer = Node(
        package='acr_core', executable='acr_visualizer', output='screen',
        parameters=[{'show_obstacle': spawn_obstacle}])

    rviz = Node(
        package='rviz2', executable='rviz2', output='screen',
        arguments=['-d', os.path.join(pkg_share, 'config', 'acr.rviz')])

    obstacle = Node(
        package='ros_gz_sim', executable='create', output='screen',
        condition=IfCondition(spawn_obstacle),
        arguments=['-world', 'acr_world', '-name', 'mrm_obstacle', '-file',
                   os.path.join(pkg_share, 'models', 'box_obstacle.sdf'),
                   '-x', '1.23', '-y', '0.0', '-z', '0.0'])

    return LaunchDescription([
        DeclareLaunchArgument('spawn_obstacle', default_value='false',
                              description='Spawn the MRM test Box during charging.'),
        DeclareLaunchArgument('obstacle_delay_sec', default_value='5.0',
                              description='Delay in seconds before spawning the MRM test Box.'),
        DeclareLaunchArgument('car_start_delay_sec', default_value='4.0',
                              description='Delay in seconds before CAR_Node starts Service and Action.'),
        DeclareLaunchArgument('control_period_ms', default_value='50',
                              description='ACR trajectory command period in milliseconds.'),
        DeclareLaunchArgument('auth_request_delay_sec', default_value='0.0',
                              description='Demo delay before CAR sends the authentication request.'),
        DeclareLaunchArgument('auth_response_delay_sec', default_value='0.0',
                              description='Demo delay before ACR returns the authentication response.'),
        DeclareLaunchArgument('action_goal_delay_sec', default_value='0.0',
                              description='Demo delay between authentication and Action goal transmission.'),
        DeclareLaunchArgument('vin_number', default_value='ACR-2026-0001',
                              description='VIN sent by CAR_Node for the authentication demo.'),
        DeclareLaunchArgument('target_angle', default_value='0.724',
                              description='Joint1 target angle sent in the charging Action.'),
        DeclareLaunchArgument('safety_distance', default_value='0.15',
                              description='MRM detection distance in meters for this simulation.'),
        gazebo,
        TimerAction(period=2.0, actions=[spawn_robot, spawn_vehicle, bridge, robot_state_publisher, acr_node, scene_visualizer, rviz]),
        TimerAction(period=car_start_delay_sec, actions=[car_node]),
        TimerAction(period=obstacle_delay_sec, actions=[obstacle]),
    ])
