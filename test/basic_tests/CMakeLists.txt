include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTest basic_test.cpp)

target_link_libraries(runBasicTest gtest gtest_main)
target_link_libraries(runBasicTest learncpp)