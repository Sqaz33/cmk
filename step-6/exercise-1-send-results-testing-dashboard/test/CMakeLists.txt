add_executable(alg-test tests.cpp)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(alg-test PRIVATE GTest::gtest)
add_test(NAME algtest COMMAND alg-test)
target_link_libraries(alg-test PRIVATE MyAlg)
