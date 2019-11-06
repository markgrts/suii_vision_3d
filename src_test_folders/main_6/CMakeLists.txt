cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(main_6)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (main_6 main.cpp pipeline.cpp filter.cpp segmentation.cpp tf.cpp vis.cpp)
target_link_libraries (main_6 ${PCL_LIBRARIES})
