cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lb)

add_subdirectory(lib)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE binSearchLib)
target_include_directories(main PRIVATE  "${PROJECT_BINARY_DIR}")
