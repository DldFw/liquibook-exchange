cmake_minimum_required(VERSION 3.5)
project(exchange)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

add_subdirectory(libgo)
add_subdirectory(liquibook)
add_subdirectory(quickfast)

