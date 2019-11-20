#ifndef  IMG_STRUCT_H
#define IMG_STRUCT_H

#include <iostream>
#include <vector>
#include <thread>
#include <librealsense2/rs.hpp>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

struct img_struct
{
    rs2::frame Image;
    pcl::PointCloud<pcl::PointXYZ>::Ptr Cloud;
};

#endif