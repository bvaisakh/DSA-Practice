cmake_minimum_required(VERSION 3.23)
project(udemy-bible-comp-prog-examples)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

set(sources
        main.cc
        02_math_fundamentals/is_prime_test.cc
        02_math_fundamentals/prime_factors_test.cc
        02_math_fundamentals/sieve_of_eratosthenes_test.cc
        02_math_fundamentals/fast_modular_exponentiaition_test.cc)

add_executable(test ${sources})
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)
target_link_libraries(test gtest_main)
target_link_libraries(test gmock_main)

