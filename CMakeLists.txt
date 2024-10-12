cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(hi)

option(USE_STATIC "Use static lib" OFF)
message(STATUS "Lib ${USE_STATIC}")


add_library(message-objs
    OBJECT
    lib/hi.cpp
    lib/hi.hpp
)

add_executable(main main.cpp)

if(WIN32)
    target_compile_options(message-objs
        PRIVATE
            -Wall
    )
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
else()
    target_compile_options(message-objs
    PRIVATE
        -Wall -fpic
    )
endif()

if(USE_STATIC)
    add_library(message-a
        STATIC
            $<TARGET_OBJECTS:message-objs>
    )
    target_link_libraries(main message-a)
else()
    add_library(message-so
        SHARED
            $<TARGET_OBJECTS:message-objs>
    )
    target_link_libraries(main message-so)
endif()
