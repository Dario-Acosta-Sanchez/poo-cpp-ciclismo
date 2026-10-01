cmake_minimum_required(VERSION 3.10)

project(p4)
add_subdirectory(persons)
add_subdirectory(catalog)
add_subdirectory(stage)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
