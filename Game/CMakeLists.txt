cmake_minimum_required(VERSION 3.12)
project(Game)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(SDL2_GFX "/Users/Dexty/Desktop/GreenFox/SDL2_plugins/gfx")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})

include_directories(${SDL2_GFX}/inc)
file(GLOB gfx_inc "${SDL2_GFX}/inc/*.h")
file(GLOB gfx_src "${SDL2_GFX}/src/*.c")

add_executable(Game main.cpp ${gfx_inc} ${gfx_src} game.h resources.cpp resources.h menu.cpp menu.h hero.cpp hero.h area.cpp area.h skeleton.cpp skeleton.h boss.cpp boss.h character.cpp character.h )

target_link_libraries(Game ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})