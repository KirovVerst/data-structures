cmake_minimum_required(VERSION 3.5)
project(data_structures_algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


include(DownloadProject.cmake)
download_project(PROJ googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )
# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds
# the following targets: gtest, gtest_main, gmock
# and gmock_main
add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})


# Now simply link your own targets against gtest, gmock,
# etc. as appropriate


set(SOURCE_FILES src/main.cpp)

include_directories(structures/include)
include_directories(algorithms/include)

add_executable(data_structures_algorithms ${SOURCE_FILES})

add_subdirectory(structures)
add_subdirectory(algorithms)

target_link_libraries(data_structures_algorithms structures algorithms gtest gmock)
