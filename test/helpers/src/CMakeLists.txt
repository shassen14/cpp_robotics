cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/test/helpers/include)
include_directories(${MyProject_SOURCE_DIR}/helpers/include)
link_directories(${MyProject_SOURCE_DIR}/helpers/src)
add_executable(obstacle_map1 obstacle_map1.cpp)
target_link_libraries(obstacle_map1 helpers)
