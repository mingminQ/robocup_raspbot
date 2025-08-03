from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

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
        camera_node
    ])