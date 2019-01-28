cmake_minimum_required(VERSION 3.12)
project(Angle)

set(CMAKE_CXX_STANDARD 14)


set(OpenCV_DIR $ENV{OPENCV_DIR})
set(SQLITE3_DIR $ENV{SQLite3})
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
find_package(SQLITE3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(Angle main.cpp)

if(WIN32)
    target_link_libraries(Angle ${OpenCV_LIBS} sqlite3::sqlite3) #WINDOWS
else()
    target_link_libraries(Angle ${OpenCV_LIBS} sqlite3 dl)
endif()
