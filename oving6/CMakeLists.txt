cmake_minimum_required(VERSION 2.8)

project(oving6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -pthread -Wall -Wextra")

add_executable(chess chess.cpp)

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

add_executable(example6 example6.cpp)
target_link_libraries(example6 ${Boost_LIBRARIES})