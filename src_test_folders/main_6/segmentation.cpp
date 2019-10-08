#include "segmentation.h"
#include <iostream>

Segmentation::Segmentation()
{
    std::cout << "SEGMENTATION CREATED" << std::endl;
    std::cout << "##############################" << std::endl;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Segmentation::getTableSeg(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    ;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Segmentation::getObjectSeg(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    ;
}
