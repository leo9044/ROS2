import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = get_package_share_directory('acr_core')
    return LaunchDescription([
        Node(
            package='ros_gz_sim', executable='create', output='screen',
            arguments=['-world', 'acr_world', '-name', 'mrm_obstacle', '-file',
                       os.path.join(pkg_share, 'models', 'box_obstacle.sdf'),
                       '-x', '0.75', '-y', '0.0', '-z', '0.30'])
    ])
