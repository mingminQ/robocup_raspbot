# launch/yolo_v11_detection_publisher.launch.py

import os
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
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
    detection_topic = DeclareLaunchArgument(
        'detection_topic',
        default_value='/yolo_v11/detection',
        description='yolo v11 detection result topic name'
    )
    yolo_v11_detection_server_node = Node(
        package='robocup_yolo_v11',
        executable='yolo_v11_detection_publisher',
        name='yolo_v11_detection_publisher',
        output='screen',
        parameters=[{
            'display_result': LaunchConfiguration('display_result'),
            'model_pt': LaunchConfiguration('model_pt'),
            'image_topic': LaunchConfiguration('image_topic'),
            'detection_topic': LaunchConfiguration('detection_topic')
        }]
    )
    return LaunchDescription([
        display_result,
        model_pt,
        image_topic,
        detection_topic,
        yolo_v11_detection_server_node,
    ])