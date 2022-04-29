cmake_minimum_required(VERSION 3.1)
project(cpp_robotics)

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(helpers)
add_subdirectory(test)