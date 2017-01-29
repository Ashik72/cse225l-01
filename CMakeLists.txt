cmake_minimum_required(VERSION 3.3)
project(cse225l_01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp dynarr_part1.h dynarr_part1.cpp dynarr_part2.h dynarr_part2.cpp)
add_executable(cse225l_01 ${SOURCE_FILES})