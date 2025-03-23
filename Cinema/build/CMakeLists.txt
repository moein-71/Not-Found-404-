cmake_minimum_required(VERSION 3.0)

project(Cinema)

add_executable(app ../src/main.cpp ../src/City.cpp)

include_directories(../include)