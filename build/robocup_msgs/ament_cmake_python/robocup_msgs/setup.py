from setuptools import find_packages
from setuptools import setup

setup(
    name='robocup_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('robocup_msgs', 'robocup_msgs.*')),
)
