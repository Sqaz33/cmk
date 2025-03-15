cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(tst)

add_library(compiler_flags INTERFACE)
option(STD_17 ON)
if (STD_17)
    target_compile_features(compiler_flags INTERFACE cxx_std_17)
else()
    target_compile_features(compiler_flags INTERFACE cxx_std_11)
endif()

add_executable(main main.cpp)
target_link_libraries(main PUBLIC compiler_flags)