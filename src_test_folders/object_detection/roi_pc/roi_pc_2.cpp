#include <librealsense2/rs.hpp> // Include RealSense Cross Platform API
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/pcl_visualizer.h>
     
Eigen::Vector4f minPoint;
minPoint[0]=0;  // define minimum point x
minPoint[1]=0;  // define minimum point y
minPoint[2]=0;  // define minimum point z
Eigen::Vector4f maxPoint;
minPoint[0]=5;  // define max point x
minPoint[1]=6;  // define max point y
minPoint[2]=7;  // define max point z 

pcl::PointCloud<pcl::PointXYZ>::Ptr cloudIn(new pcl::PointCloud<pcl::PointXYZ>);
pcl::PointCloud<pcl::PointXYZ>::Ptr cloudOut (new pcl::PointCloud<pcl::PointXYZ>);

int main()
{
    pcl::CropBox<PointT> cropFilter;
    cropFilter.setInputCloud (cloudIn);
    cropFilter.setMin(minPoint);
    cropFilter.setMax(maxPoint);
    cropFilter.setTranslation(boxTranslatation);
    cropFilter.setRotation(boxRotation);

    cropFilter.filter (*cloudOut);  
}

