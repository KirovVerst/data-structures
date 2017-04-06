cmake_minimum_required(VERSION 3.5)
project(algoritms)
set(SOURCE_LIB src/sorting.cpp)
add_library(algorithms STATIC ${SOURCE_LIB})