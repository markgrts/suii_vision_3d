#include "vis.h"
#include <iostream>


//Vis constructor
Vis::Vis(void){
    cout << "VIEWER CREATED" << endl;
    cout << "##############################" << endl;
    cloud_name = "cloud_";
    cloud_color.col1 = 0;
    cloud_color.col2 = 255;
    cloud_color.col3 = 0;    
    cloud_count = 0;
}

pcl::visualization::PCLVisualizer::Ptr Vis::createViewer(void)
{
    pcl::visualization::PCLVisualizer::Ptr viewer (new pcl::visualization::PCLVisualizer ("3D Viewer"));
    viewer->setBackgroundColor (0, 0, 0);    
    return(viewer);
}

// Vis member function
pcl::visualization::PCLVisualizer::Ptr Vis::addCloud(pcl::visualization::PCLVisualizer::Ptr viewer,pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    cout << "add cloud" << endl;
    nameCounter(cloud_count);
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> single_color(cloud, cloud_color.col1, cloud_color.col2, cloud_color.col3);
    viewer->addPointCloud<pcl::PointXYZ> (cloud, single_color, cloud_name);
    cloud_count ++;
    return(viewer);
}

// Vis member function
void Vis::showViewer(pcl::visualization::PCLVisualizer::Ptr viewer)
{
    viewer->addCoordinateSystem (0.1);
    viewer->initCameraParameters ();
    cout << "show viewer" << endl;
    while (!viewer->wasStopped ())
    {
        viewer->spinOnce (100); 	
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Vis::nameCounter(int number)
{
    cloud_name = cloud_name + std::to_string(number);
    if(number == 0){
        cloud_color.col1 = 255;
        cloud_color.col2 = 0;
        cloud_color.col3 = 0;
    }
    else if(number == 1){
        cloud_color.col1 = 0;
        cloud_color.col2 = 255;
        cloud_color.col3 = 0;
    }
    else if(number == 2){
        cloud_color.col1 = 0;
        cloud_color.col2 = 0;
        cloud_color.col3 = 255;
    }
    else if(number == 3){
        cloud_color.col1 = 0;
        cloud_color.col2 = 255;
        cloud_color.col3 = 255;
    }
    else if(number == 4){
        cloud_color.col1 = 255;
        cloud_color.col2 = 255;
        cloud_color.col3 = 0;
    }
    else if(number == 5){
        cloud_color.col1 = 255;
        cloud_color.col2 = 0;
        cloud_color.col3 = 255;
    }
    else if(number == 6){
        cloud_color.col1 = 125;
        cloud_color.col2 = 125;
        cloud_color.col3 = 0;
    }
    else if(number == 7){
        cloud_color.col1 = 0;
        cloud_color.col2 = 125;
        cloud_color.col3 = 125;
    }
    else if(number == 8){
        cloud_color.col1 = 125;
        cloud_color.col2 = 0;
        cloud_color.col3 = 125;
    }
    else if(number == 9){
        cloud_color.col1 = 125;
        cloud_color.col2 = 125;
        cloud_color.col3 = 125;
    }
    else if(number == 10){
        cloud_color.col1 = 30;
        cloud_color.col2 = 100;
        cloud_color.col3 = 200;
    }
    else{
        cloud_color.col1 = 255;
        cloud_color.col2 = 255;
        cloud_color.col3 = 255;
    }
}
