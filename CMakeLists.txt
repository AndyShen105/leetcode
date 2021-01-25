cmake_minimum_required(VERSION 3.16)
project(leetcode)
set(CMAKE_CXX_STANDARD 11)

INCLUDE_DIRECTORIES(./array)
INCLUDE_DIRECTORIES(./everydayproblem)
INCLUDE_DIRECTORIES(./list)
INCLUDE_DIRECTORIES(./lru)
LINK_DIRECTORIES(lib)

ADD_EXECUTABLE(main
        main.cpp
        array/transpose_matrix.cpp
        everydayproblem/k_closest_points_to_origin.cpp
        array/sorted_squares.cpp
        other/lru.cpp
        )

TARGET_LINK_LIBRARIES(main gtest -std=c++11 -pthread)
