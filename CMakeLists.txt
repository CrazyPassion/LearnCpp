cmake_minimum_required(VERSION 3.6)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ex3_12.hpp C3_3.hpp classScope.hpp C3_4.hpp)
add_executable(LearnCpp ${SOURCE_FILES})