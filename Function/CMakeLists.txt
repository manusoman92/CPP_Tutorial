cmake_minimum_required(VERSION 3.5)

project(Functions)

include_directories(include)
set(Sources 
    source/function.cpp)
add_executable(${PROJECT_NAME} ${Sources})