cmake_minimum_required(VERSION 3.5)
project(data_structures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/foo.cpp)

add_executable(data_structures ${SOURCE_FILES})