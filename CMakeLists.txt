cmake_minimum_required(VERSION 3.5)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp learncpp/Include/Person.hpp learncpp/Source/Person.cpp)
add_executable(LearnCpp_run ${SOURCE_FILES})

include_directories(learncpp/Include)
add_subdirectory(learncpp)
add_subdirectory(test)

target_link_libraries(LearnCpp_run learncpp)

