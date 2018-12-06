cmake_minimum_required(VERSION 3.12)
project(PC C)

set(CMAKE_C_STANDARD 99)

add_executable(PC main.c computer.h notebook.h)