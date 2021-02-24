cmake_minimum_required(VERSION 3.17)
project(Tasks)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tasks main.cpp areaAndPerimeterOfRectangle.cpp threeDigitNumbers.cpp turtles.cpp creeper.cpp)
add_executable(areaAndPerimeterOfRectangle areaAndPerimeterOfRectangle.cpp new/hi.cpp)
add_executable(threeDigitNumbers threeDigitNumbers.cpp)
add_executable(turtles turtles.cpp)
add_executable(creeper creeper.cpp)