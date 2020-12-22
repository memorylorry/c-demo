cmake_minimum_required(VERSION 3.5)

project(1_c_plus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find required opencv(找到了该库，才可用下面的相关变量)
find_package(OpenCV REQUIRED)

# add directory of opencv headers
include_directories(
    /usr/local/include
    ${OpenCV_INCLUDE_DIRS}
)

# directory of opencv library
LINK_DIRECTORIES(${OpenCV_LIBRARY_DIRS})

add_executable(1_HelloWorld HelloWorld.cpp)
add_executable(2_StringInitial StringInitial.cpp)
add_executable(3_StringOperation StringOperation.cpp)
add_executable(4_TemplateDemo TemplateDemo.cpp)
add_executable(5_Mul_Param_Fun Mul_Param_Fun.cpp)
#######################################################
# BEGIN of 6_opencv_demo
# name of executable file and path of source file
add_executable(6_opencv_demo OpenCVDemo.cpp)
# opencv libraries
target_link_libraries(6_opencv_demo ${OpenCV_LIBS})
# END of 6_opencv_demo
#######################################################
