cmake_minimum_required(VERSION 3.12)
project(Pokemon C)

set(CMAKE_C_STANDARD 99)

add_executable(Pokemon main.c pokemon.h pokemon.c)