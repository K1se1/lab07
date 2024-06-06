cmake_minimum_required(VERSION 3.14)
project(unittests CXX)
set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED TRUE)

#add_executable(task task3.cpp)

enable_testing()
add_subdirectory(gtests)