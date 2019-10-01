#include "main.h"

pcl::PointCloud<pcl::PointXYZ>::Ptr pipeline(string file_name)
{
    
    cout << "PIPELINE" << endl;
    cout << "##############################" << endl;
  
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);

    pcl::io::loadPCDFile<pcl::PointXYZ> (file_name, *cloud);

    return(cloud);
}