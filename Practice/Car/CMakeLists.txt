cmake_minimum_required(VERSION 3.12)
project(Car)

set(CMAKE_CXX_STANDARD 14)

add_executable(Car main.cpp car.cpp car.h carpark.cpp carpark.h)