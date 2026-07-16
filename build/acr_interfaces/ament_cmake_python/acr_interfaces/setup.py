from setuptools import find_packages
from setuptools import setup

setup(
    name='acr_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('acr_interfaces', 'acr_interfaces.*')),
)
