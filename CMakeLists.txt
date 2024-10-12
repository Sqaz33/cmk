cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(hi LANGUAGES CXX)


if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
endif()

include_directories(lib)

add_executable(main main.cpp)

add_subdirectory(lib)

target_link_libraries(main PUBLIC hi_lib)

