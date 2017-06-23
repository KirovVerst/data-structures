cmake_minimum_required(VERSION 3.5)
project(data_structures)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


include(project.cmake)
download_project(PROJ googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(build_tests ON)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})


set(SOURCE_FILES src/main.cpp)


include_directories(structures/include)

add_executable(data_structures ${SOURCE_FILES})

add_subdirectory(structures)

target_link_libraries(data_structures structures gtest gmock)

if (build_tests)
    set(TESTS_FILES tests/tests.cpp)

    add_executable(test_model ${TESTS_FILES})

    target_link_libraries(test_model structures gtest gmock)
endif ()