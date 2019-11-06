#include "filter.h"
#include <iostream>

//Vis constructor
Filter::Filter(void)
{
    cout << "FILTER CREATED" << endl;
    cout << "##############################" << endl;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Filter::pt_Filter(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr bodyFiltered (new pcl::PointCloud<pcl::PointXYZ>);
    pcl::CropBox<pcl::PointXYZ> boxFilter;
    boxFilter.setMin(Eigen::Vector4f(minX, minY, minZ, 1.0));
    boxFilter.setMax(Eigen::Vector4f(maxX, maxY, maxZ, 1.0));
    boxFilter.setInputCloud(cloud);
    boxFilter.filter(*bodyFiltered);
    return(bodyFiltered);
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Filter::d_Filter(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    // Create the filtering object: downsample the dataset using a leaf size of 1cm
    pcl::VoxelGrid<pcl::PointXYZ> vg;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered (new pcl::PointCloud<pcl::PointXYZ>);
    vg.setInputCloud (cloud);
    vg.setLeafSize (0.001f, 0.001f, 0.001f);
    vg.filter (*cloud_filtered);
    std::cout << "PointCloud after filtering has: " << cloud_filtered->points.size ()  << " data points." << std::endl; 
    return(cloud_filtered);
}