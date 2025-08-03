from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

import os

def generate_launch_description():

    frame_id = DeclareLaunchArgument(
        'frame_id',
        default_value='camera',
        description='frame id of the camera image'
    )
    image_topic = DeclareLaunchArgument(
        'image_topic',
        default_value='/compressed_image',
        description='image topic name'
    )

    yahboomcar_share = get_package_share_directory('yahboomcar_bringup')
    yahboomcar_launch_file = os.path.join(
        yahboomcar_share, 'launch', 'yahboomcar_bringup.launch.py'
    )
    include_yahboom = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(yahboomcar_launch_file)
    )

    camera_node = Node(
        package='robocup_bringup',
        executable='raspbot_camera',
        name='raspbot_camera',
        output='screen',
        parameters=[{
            'frame_id': LaunchConfiguration('frame_id'),
            'image_topic': LaunchConfiguration('image_topic'),
        }]
    )

    return LaunchDescription([
        frame_id,
        image_topic,
        include_yahboom,
        camera_node,
    ])