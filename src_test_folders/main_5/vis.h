#ifndef VIS_H
#define VIS_H

#include <iostream>
#include <vector>
#include <thread>
#include <pcl/features/moment_of_inertia_estimation.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>

class Vis
{
    private:
        ;
    public:
        Vis();
        void getVis(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud); 
};

#endif