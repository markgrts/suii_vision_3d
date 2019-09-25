#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/filters/crop_box.h>


// Define min and max for X, Y and Z
float minX = -0.2, minY = -0.2, minZ = -2.5;
float maxX = +0.2, maxY = +0.2, maxZ = +2.5;

int main (int argc, char** argv)
{
    pcl::visualization::PCLVisualizer viewer("Cloud Viewer");

    pcl::PointCloud<pcl::PointXYZ>::Ptr body (new pcl::PointCloud<pcl::PointXYZ>);
    pcl::io::loadPCDFile (argv[1], *body);

    pcl::PointCloud<pcl::PointXYZ>::Ptr bodyFiltered (new pcl::PointCloud<pcl::PointXYZ>);

    pcl::CropBox<pcl::PointXYZ> boxFilter;
    boxFilter.setMin(Eigen::Vector4f(minX, minY, minZ, 1.0));
    boxFilter.setMax(Eigen::Vector4f(maxX, maxY, maxZ, 1.0));
    boxFilter.setInputCloud(body);
    boxFilter.filter(*bodyFiltered);

    //add dsampled_ to filename that gets saved
    std::string s;
    s.append("pt_filtered_");
    s.append(argv[1]);

    pcl::io::savePCDFile(s, *bodyFiltered);

    viewer.addPointCloud (bodyFiltered,"bodyfiltered");
    viewer.spin();
    return 0;
}