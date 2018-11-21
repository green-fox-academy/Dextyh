cmake_minimum_required(VERSION 3.12)
project(ModelDevices)

set(CMAKE_CXX_STANDARD 14)

add_executable(ModelDevices main.cpp printer.cpp printer.h printer3d.cpp printer3d.h printer2d.cpp printer2d.h scanner.cpp scanner.h copier.cpp copier.h)