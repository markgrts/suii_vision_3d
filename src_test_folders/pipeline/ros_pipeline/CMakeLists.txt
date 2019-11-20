cmake_minimum_required(VERSION 3.1.0)

project(getImages)

find_package(realsense2 REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cloud_viewer)
find_package(PCL 1.2 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(${PROJECT_NAME} getImages.cpp Main.cpp pipeline.cpp)

target_link_libraries(${PROJECT_NAME} ${realsense2_LIBRARY})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} )
target_link_libraries (${PROJECT_NAME} ${PCL_LIBRARIES})