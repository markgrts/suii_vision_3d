#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <vector>
#include <thread>
#include <pcl/features/moment_of_inertia_estimation.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>

using namespace std;

pcl::PointCloud<pcl::PointXYZ>::Ptr pipeline(string);
void viz(pcl::PointCloud<pcl::PointXYZ>::Ptr);

#endif