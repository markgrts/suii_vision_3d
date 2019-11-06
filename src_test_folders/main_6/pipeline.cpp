#include "pipeline.h"

// Pipeline constructor
Pipeline::Pipeline()
{
    cout << "PIPELINE CREATED" << endl;
    cout << "##############################" << endl;
}

// Pipeline member function
pcl::PointCloud<pcl::PointXYZ>::Ptr Pipeline::getCloud(std::string file_name)
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
    pcl::io::loadPCDFile<pcl::PointXYZ> (file_name, *cloud);
    cout << "CLOUD LOADED" << endl;
    cout << "##############################" << endl;
    return cloud;
}