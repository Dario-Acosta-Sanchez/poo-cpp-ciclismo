cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(p4)
add_library(catalog catalog.cc catalog.h)

target_link_libraries(catalog PUBLIC persons stage)

target_include_directories(catalog PUBLIC ${CMAKE_CURRENT_LIST_DIR})
add_executable(catalog-main catalog-main.cc)
target_link_libraries(catalog-main PUBLIC catalog persons)