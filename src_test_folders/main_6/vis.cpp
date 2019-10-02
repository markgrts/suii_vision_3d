#include "vis.h"
#include <iostream>


//Vis constructor
Vis::Vis(void){
    cout << "VIEWER CREATED" << endl;
    cout << "##############################" << endl;
    pcl::visualization::PCLVisualizer::Ptr viewer (new pcl::visualization::PCLVisualizer ("3D Viewer"));
    viewer->setBackgroundColor (0, 0, 0);
    viewer->addCoordinateSystem (0.1);
    viewer->initCameraParameters ();
    cloud_color.col1 = 0;
    cloud_color.col2 = 255;
    cloud_color.col3 = 0;
    cloud_name = "cloud_";
}

// Vis member function
void Vis::addCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    cout << "add cloud" << endl;
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> single_color(cloud, cloud_color.col1, cloud_color.col2, cloud_color.col3);
    viewer->addPointCloud<pcl::PointXYZ> (cloud, single_color, cloud_name);
}

// Vis member function
void Vis::showViewer(void)
{
    cout << "show viewer" << endl;
    while (!viewer->wasStopped ())
    {
        viewer->spinOnce (100); 	
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
