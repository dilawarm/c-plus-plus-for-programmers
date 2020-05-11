cmake_minimum_required(VERSION 2.8)

project(oving8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(oppgave1 oppgave1.cpp)

add_executable(main main.cpp pair.hpp)