#ifndef TF_H
#define TF_H

#include <iostream>
#include <vector>
#include <thread>
#include <pcl/features/moment_of_inertia_estimation.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

struct tf_data
{
    pcl::PointXYZ center;
    pcl::PointXYZ x_axis;
    pcl::PointXYZ y_axis;
    pcl::PointXYZ z_axis;
};

class Transformation
{
    private:
        tf_data tf_tf_data;
    public:
        Transformation();
        tf_data getTf(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);
};

#endif