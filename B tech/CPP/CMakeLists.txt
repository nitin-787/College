cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 14)
add_executable(BinarySearch DSA/BinarySearch.cpp)
add_executable(bubbleSort DSA/bubbleSort.cpp)
add_executable(linear DSA/linear.cpp)
add_executable(fibonnaci OOPS/fibonnaci.cpp)
add_executable(static OOPS/static.cpp)
add_executable(areaofCircle OOPS/areaofCircle.cpp
        OOPS/Person.cpp)
add_executable(swaping OOPS/swaping.cpp)