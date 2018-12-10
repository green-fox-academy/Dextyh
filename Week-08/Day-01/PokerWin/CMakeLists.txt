cmake_minimum_required(VERSION 3.12)
project(PokerWin)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokerWin_run main.cpp)

include_directories(poker)
add_subdirectory(poker)
add_subdirectory(poker_test)

target_link_libraries(PokerWin_run poker)