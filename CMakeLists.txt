cmake_minimum_required(VERSION 3.5)
project(data_structures_algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)

include_directories(structures/include)
include_directories(algorithms/include)

add_executable(data_structures_algorithms ${SOURCE_FILES})

add_subdirectory(structures)
add_subdirectory(algorithms)

target_link_libraries(data_structures_algorithms structures algorithms)