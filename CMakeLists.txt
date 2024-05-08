cmake_minimum_required(VERSION 3.26)
project(labb2)

set(CMAKE_CXX_STANDARD 17)

add_executable(labb2 main.cpp
        sort.h
        sort.cpp
        datagen.h
        datagen.cpp)
