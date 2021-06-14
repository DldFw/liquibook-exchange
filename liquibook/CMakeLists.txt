cmake_minimum_required(VERSION 2.8)
project(liquibook)

include_directories(src/)

file(GLOB simple_list "src/simple/*.cpp")

add_library(liquibook ${simple_list})
#add_subdirectory(examples)
add_subdirectory(test)
