cmake_minimum_required(VERSION 3.25)
project(LeetCodeDailyPractice)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeetCodeDailyPractice
        BinarySearch.cpp BinarySearch.h
        main.cpp
)

# for misc tests
add_executable(test tests.cpp)