# setup.py

from setuptools import setup

package_name = 'robocup_yolo_v11'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    install_requires=[
        'ultralytics>=8.0.0',
        'opencv-python',
        'cv_bridge'
    ],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/robocup_yolo_v11']),
        ('share/robocup_yolo_v11', ['package.xml']),
    ],
    entry_points={
        'console_scripts': [
            'yolo_v11_detection_publisher = robocup_yolo_v11.yolo_v11_detection_publisher:main',
        ],
    },
)