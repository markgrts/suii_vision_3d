cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(main_5)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (main_5 main.cpp pipeline.cpp vis.cpp)
target_link_libraries (main_5 ${PCL_LIBRARIES})