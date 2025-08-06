from setuptools import find_packages
from setuptools import setup

setup(
    name='robocup_srvs',
    version='0.0.0',
    packages=find_packages(
        include=('robocup_srvs', 'robocup_srvs.*')),
)
