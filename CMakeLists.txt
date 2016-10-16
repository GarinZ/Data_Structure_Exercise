cmake_minimum_required(VERSION 3.6)
project(Data_Structure_Exercise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c list.h list.c)
add_executable(Data_Structure_Exercise ${SOURCE_FILES})