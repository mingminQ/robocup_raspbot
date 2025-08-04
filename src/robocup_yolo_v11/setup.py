# setup.py

from setuptools import setup
import os
from glob import glob

package_name = 'robocup_yolo_v11'
launch_files = glob(os.path.join('launch', '*'))
weight_files = glob(os.path.join('weights', '*'))

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/robocup_yolo_v11']),
        ('share/robocup_yolo_v11', ['package.xml']),
        ('share/robocup_yolo_v11/launch', launch_files),
        ('share/robocup_yolo_v11/weights', weight_files),
    ],
    install_requires=[
        'setuptools',
        'ultralytics>=8.0.0',
        'opencv-python',
        'ros2_numpy',
        'robocup_msgs',
        'robocup_srvs'
    ],
    entry_points={
        'console_scripts': [
            'yolo_v11_detection_publisher = robocup_yolo_v11.yolo_v11_detection_publisher:main',
            'yolo_v11_detection_server = robocup_yolo_v11.yolo_v11_detection_server:main'
        ],
    },
)