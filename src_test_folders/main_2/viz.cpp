#include "main.h"

using namespace std::chrono;


void viz(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud){
    
    cout << "VISUALIZATION" << endl;
    cout << "##############################" << endl;

    pcl::visualization::PCLVisualizer::Ptr viewer (new pcl::visualization::PCLVisualizer ("3D Viewer"));
    viewer->setBackgroundColor (0, 0, 0);
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> single_color(cloud, 0, 255, 0);
    std::string name = "cloud";
    viewer->addPointCloud<pcl::PointXYZ> (cloud, single_color, name);
    viewer->addCoordinateSystem (0.1);
    viewer->initCameraParameters ();

    while (!viewer->wasStopped ())
    {
        viewer->spinOnce (100); 	
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return;
}