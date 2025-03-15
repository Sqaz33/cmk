cmake_minimum_required(VERSION 3.5)
project(tst)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory(my-alg-lib)
enable_testing()
add_subdirectory(test)

add_executable(main main.cpp)
target_link_libraries(main MyAlg)



