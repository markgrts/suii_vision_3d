#ifndef  CLOUD_ARRAY_H
#define CLOUD_ARRAY_H

#include <iostream>
#include <vector>
#include <thread>
#include <pcl/features/moment_of_inertia_estimation.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

class CloudArray
{
    private:
        int segmented_cloud_nr;
        std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> segmentend_clouds;
        std::vector<int> v = {2,4,6};
        pcl::PointCloud<pcl::PointXYZ>::Ptr test_cloud;
    public:
        CloudArray();
        void setVector();
        void printVector();
        std::vector<int> giveVector();
        //void CloudArray:setCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);
        //std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> CloudArray:getCloud(std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> cloud);
};

#endif