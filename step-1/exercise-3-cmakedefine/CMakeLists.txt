cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(tst VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(VERSION_ENABLE "Enable version" ON)
if(VERSION_ENABLE) 
    set(VERSION_STRING ${tst_VERSION})
endif()
message(${VERSION_STRING})
configure_file(config.hpp.in config.hpp @ONLY)

add_executable(main main.cpp)
target_include_directories(main PRIVATE "${PROJECT_BINARY_DIR}")