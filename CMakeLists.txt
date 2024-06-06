cmake_minimum_required(VERSION 3.5.0)
project(Lab07 VERSION 0.1.0 LANGUAGES CXX)


add_executable(Lab07 main.cpp)
add_library(task STATIC wash_the_room.hpp wash_the_room.cpp)
target_link_libraries(Lab07 task)
include(CTest)
enable_testing()

