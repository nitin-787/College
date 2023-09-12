cmake_minimum_required(VERSION 3.26)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP
        DSA/BinarySearch.cpp
        DSA/bubbleSort.cpp
        DSA/insertionDeletion.cpp
        DSA/linear.cpp
        DSA/marks.cpp
        DSA/quickSort.cpp
        OOPS/areaofCircle.cpp
        OOPS/areaofRectangle.cpp
        OOPS/ComplexNumberAddtion.cpp
        OOPS/dynamicMemoryAlloc.cpp
        OOPS/fibonnaci.cpp
        OOPS/static.cpp
        OOPS/Student.cpp
        OOPS/swaping.cpp
)

add_executable(bubbleSort DSA/bubbleSort.cpp)