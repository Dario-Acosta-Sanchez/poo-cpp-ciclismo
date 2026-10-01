cmake_minimum_required(VERSION 3.20)
project(p4)
add_subdirectory(src)
add_subdirectory(test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Enable testing with cmake and ctest
enable_testing()
# Adding subdirs

