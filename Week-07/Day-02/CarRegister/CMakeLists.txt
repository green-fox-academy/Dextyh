cmake_minimum_required(VERSION 3.12)
project(CarRegister C)

set(CMAKE_C_STANDARD 99)

add_executable(CarRegister main.c car.h car.c)