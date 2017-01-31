cmake_minimum_required(VERSION 2.8)
project(Chemistry)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(Chemistry ${SOURCES})
