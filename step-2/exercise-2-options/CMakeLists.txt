cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(tst)

option(OPT ON)

# -DOPT=ON 
# -DOPT=OFF 
message(${OPT})
add_executable(main main.cpp)
if (OPT)
    target_compile_definitions(main PRIVATE MY_DEF)
endif()
