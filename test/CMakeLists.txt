cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

PROJECT(
    mock-wrappers-test
)

# https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html
add_executable(dot dot.cc)
target_link_libraries(dot mock-wrapper)
include_directories(../include)

include(CTest)
add_test(
    NAME dot
    COMMAND dot
)