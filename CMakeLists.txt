cmake_minimum_required(VERSION 3.16)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(algorithm main.cpp basicSort/SelectionSort.h SortTestHelper.h basicSort/InsertionSort.h)