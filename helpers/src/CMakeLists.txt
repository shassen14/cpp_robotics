cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

find_package (OpenCV 4.2.0 REQUIRED)
include_directories ("/usr/include/opencv4/")

include_directories(${PROJECT_SOURCE_DIR}/helpers/include)
add_library(helpers obstacle_map.cpp)