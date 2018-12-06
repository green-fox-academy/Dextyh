cmake_minimum_required(VERSION 3.12)
project(House C)

set(CMAKE_C_STANDARD 99)

add_executable(House main.c house.h house.c)