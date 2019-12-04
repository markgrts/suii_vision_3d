cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(main)

find_package(PCL 1.2 REQUIRED)
find_package(realsense2 REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (main main.cpp gettf.cpp pipeline.cpp filter.cpp segmentation.cpp tf.cpp vis.cpp getImages.cpp)
target_link_libraries (main ${PCL_LIBRARIES})
target_link_libraries(${PROJECT_NAME} ${realsense2_LIBRARY})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} )
