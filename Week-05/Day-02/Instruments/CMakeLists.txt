cmake_minimum_required(VERSION 3.12)
project(Instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instruments main.cpp instrument.cpp instrument.h stringedInstrument.cpp stringedInstrument.h electricGuitar.cpp electricGuitar.h)