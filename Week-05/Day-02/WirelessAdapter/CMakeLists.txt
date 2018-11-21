cmake_minimum_required(VERSION 3.12)
project(WirelessAdapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(WirelessAdapter main.cpp device.cpp device.h usbDevice.cpp usbDevice.h networkDevice.cpp networkDevice.h wirelessAdapter.cpp wirelessAdapter.h)