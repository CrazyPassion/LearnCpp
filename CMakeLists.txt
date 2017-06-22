cmake_minimum_required(VERSION 3.5)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Include/Ex3_12.hpp Include/C3_3.hpp Include/classScope.hpp Include/C3_4.hpp Include/C3_6.hpp Include/Ex4_20.hpp Include/C4_7.hpp Include/C4_8.hpp Include/C5_4.hpp Include/C6_2.hpp Include/C6_3.hpp Include/C6_5.hpp Include/C6_6.hpp Source/Sales_data.cpp Include/Sales_data.hpp Source/Person.cpp Include/Person.hpp Source/Screen1.cpp Include/Screen1.hpp)
add_executable(LearnCpp ${SOURCE_FILES})

