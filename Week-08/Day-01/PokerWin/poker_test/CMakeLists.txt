set(PATH_TO_GOOGLETEST "/Users/Dexty/Desktop/GreenFox/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(poker_test pokertest.cpp)
target_link_libraries(poker_test gtest gtest_main)
target_link_libraries(poker_test poker)