cmake_minimum_required(VERSION 2.8)

project(oving7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(fraction_test fraction_test.cpp fraction.cpp fraction.hpp)

add_executable(set_test set_test.cpp set.cpp set.hpp)