#include "cloud_array.h"
#include <iostream>

CloudArray::CloudArray()
{
    std::cout << "CLOUDARRAY CREATED" << std::endl;
    std::cout << "##############################" << std::endl;
}

void CloudArray::setVector(void)
{
    v.push_back(999);
}

void CloudArray::printVector(void)
{
    for(int n : v){
        std::cout << n << std::endl;
    }
}

std::vector<int> CloudArray::giveVector()
{
    
    return(v);
}

/*
void CloudArray:setCloud(std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> cloud)
{
    ;
}

std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> CloudArray:getCloud(std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> cloud)
{
    ;
}
*/