from setuptools import setup
from Cython.Build import cythonize

setup(
    name = 'Hello world app in Cython',
    ext_modules = cythonize('hello.pyx')
)