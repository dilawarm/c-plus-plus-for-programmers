cmake_minimum_required(VERSION 2.8)

project(stl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(all_of all_of.cpp)

add_executable(any_of any_of.cpp)

add_executable(none_of none_of.cpp)

add_executable(for_each for_each.cpp)

add_executable(find find.cpp)

add_executable(find_if find_if.cpp)