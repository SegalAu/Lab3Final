cmake_minimum_required(VERSION 3.12)
project(Lab3Final)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab3Final main.cpp stack.cpp stack.hpp catch.hpp unit_tests.cpp)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")