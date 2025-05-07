# Interface *IProcessable*
This repo consists of an interface component *IProcessable*. It is a part of example application *[broker](https://github.com/slawomir-niespodziany/diff_broker)*, which demonstrates the use of *[diff](https://github.com/slawomir-niespodziany/diff)* framework. 

## Description
*IProcessable* is an interface implemented by components that are meant to be processed to perform internal operations.

<p align="center"><a href="include/IProcessable.h"><img src="img/IProcessable.png" alt="IProcessable interface"/></a></p>

## Prerequisites
The example has been prepared and tested on Ubuntu 22.04 and Ubuntu 24.04. That being said, you only need *cmake* to install this component. The latest version (*cmake 4.0.1*) can be installed using the following command.
```
sudo snap install cmake --classic
```

## Installation
*IProcessable* is a header-only component and does not require building. It is used by components that implement or utilize the functionality it defines.
To make it available to those components, it must be installed in CMake registry - or in any way specific to your build system. 

#### Install by script
Run the following command from component directory to install it.
```
./build.sh
```
*An installation script is provided for all components used in the example. For interface components it may seem an overkill, but its point is to provide a unified way of installing any component.*

#### Install by hand
Run the following command from component directory for manual installation.
```
cmake -Bbuild -DCMAKE_EXPORT_PACKAGE_REGISTRY=ON
```
