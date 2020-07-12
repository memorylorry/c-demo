cmake_minimum_required(VERSION 3.5)

project(1_c_plus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(1_HelloWorld HelloWorld.cpp)
add_executable(2_StringInitial StringInitial.cpp)
add_executable(3_StringOperation StringOperation.cpp)
add_executable(4_TemplateDemo TemplateDemo.cpp)
