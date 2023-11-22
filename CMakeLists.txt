cmake_minimum_required(VERSION 3.26)
project(CppDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(CppDemo
        src/helloworld.cpp)
