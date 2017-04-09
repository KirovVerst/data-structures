cmake_minimum_required(VERSION 3.5)
project(structures)
set(SOURCE_LIB src/Set.cpp src/Vector.cpp src/LinkedList.cpp src/DoubleLinkedList.cpp src/Graph.cpp)
add_library(structures STATIC ${SOURCE_LIB})