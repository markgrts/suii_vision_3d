#ifndef VIS_H
#define VIS_H

#include <iostream>
#include <vector>
#include <thread>
#include <pcl/features/moment_of_inertia_estimation.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>

struct color{
    int col1;
    int col2;
    int col3;
};

class Vis
{
    private:
        int cloud_count;
        color cloud_color;        
        std::string cloud_name;
        
    public:
        pcl::visualization::PCLVisualizer::Ptr viewer;
        Vis();
        void addCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);
        void showViewer(void);
};

#endif