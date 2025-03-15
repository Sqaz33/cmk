cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(binSearchLib bin-search-lib.cpp)

target_include_directories(
    binSearchLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})