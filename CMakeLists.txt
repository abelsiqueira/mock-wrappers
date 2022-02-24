cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

PROJECT(
    mock-wrappers
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "Release")

set(SOURCE_FILES src/linalg.c)
include_directories(./include/)
add_library(mock-wrapper SHARED src/linalg.c)

target_include_directories(mock-wrapper PUBLIC include)
