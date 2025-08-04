# launch/yolo_v11_launch.py

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    pkg_share = get_package_share_directory('robocup_yolo_v11')
    model_pt_path = os.path.join(pkg_share, 'weights', 'yolo11n.pt')

    return LaunchDescription([
        Node(
            package='robocup_yolo_v11',
            executable='yolo_v11_detection_publisher',
            name='yolo_v11_detection_publisher',
            output='screen',
            parameters=[{
                'model_pt': model_pt_path,
                'image_topic': '/camera/image_compressed',
                'result_topic': '/yolo/detections',
            }]
        )
    ])
