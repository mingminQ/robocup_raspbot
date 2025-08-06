# launch/yolo_v11_detection_server.launch.py

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():

    robocup_yolo_v11_share = get_package_share_directory('robocup_yolo_v11')
    model_pt_file = os.path.join(robocup_yolo_v11_share, 'weights', 'yolo11n.pt')

    display_result = DeclareLaunchArgument(
        'display_result',
        default_value='false',
        description='Flag to display yolo v11 detecion' 
    )
    model_pt = DeclareLaunchArgument(
        'model_pt',
        default_value=model_pt_file,
        description='file path of the yolo v11 pt'
    )
    image_topic = DeclareLaunchArgument(
        'image_topic',
        default_value='/image',
        description='image topic name'
    )
    detection_service = DeclareLaunchArgument(
        'detection_service',
        default_value='/yolo_v11/detection_service',
        description='yolo v11 detection service name'
    )
    yolo_v11_detection_server_node = Node(
        package='robocup_yolo_v11',
        executable='yolo_v11_detection_server',
        name='yolo_v11_detection_server',
        output='screen',
        parameters=[{
            'display_result': LaunchConfiguration('display_result'),
            'model_pt': LaunchConfiguration('model_pt'),
            'image_topic': LaunchConfiguration('image_topic'),
            'detection_service': LaunchConfiguration('detection_service')
        }]
    )
    return LaunchDescription([
        display_result,
        model_pt,
        image_topic,
        detection_service,
        yolo_v11_detection_server_node,
    ])