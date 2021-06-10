cmake_minimum_required(VERSION 3.10)
project(solution)

set(CMAKE_CXX_STANDARD 17)
find_package(Boost REQUIRED)

add_executable(test_sfinae test_sfinae.cpp doctest_main.cpp)
target_include_directories(test_sfinae PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(test_sfinae ${Boost_LIBRARIES})