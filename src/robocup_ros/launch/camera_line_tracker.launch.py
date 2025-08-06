from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

import os

def generate_launch_description():

    display_result = DeclareLaunchArgument(
        'display_result',
        default_value='false',
        description='display result of the image processing'
    )
    hsv_min = DeclareLaunchArgument(
        'hsv_min',
        default_value='[50, 71, 80]',
        description='lower threshold'
    )
    hsv_max = DeclareLaunchArgument(
        'hsv_max',
        default_value='[87, 256, 256]',
        description='upper threshold'
    )

    robocup_bringup_share = get_package_share_directory('robocup_bringup')
    robocup_bringup_launch_file = os.path.join(
        robocup_bringup_share, 'launch', 'reaspbot_bringup.launch.py'
    )
    include_robocup_bringup = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(robocup_bringup_launch_file)
    )

    camera_line_tracker_node = Node(
        package='robocup_ros',
        executable='camera_line_tracker',
        name='camera_line_tracker',
        output='screen',
        parameters=[{
            'display_result': LaunchConfiguration('display_result'),
            'hsv_min': LaunchConfiguration('hsv_min'),
            'hsv_max': LaunchConfiguration('hsv_max'),
        }]
    )

    return LaunchDescription([
        display_result,
        hsv_min,
        hsv_max,
        include_robocup_bringup,
        camera_line_tracker_node,
    ])