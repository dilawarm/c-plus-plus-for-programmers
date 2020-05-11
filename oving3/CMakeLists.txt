cmake_minimum_required(VERSION 2.8)

project(oving3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(circle_test circle_test.cpp circle.cpp circle.hpp)

add_executable(commodity_test commodity_test.cpp commodity.cpp commodity.hpp)

add_executable(oppgave4 oppgave4.cpp)