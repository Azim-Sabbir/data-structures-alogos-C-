cmake_minimum_required(VERSION 3.21)
project(linear_search)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(linear_search
        linearSearch.cpp
        linearSearch.h)
