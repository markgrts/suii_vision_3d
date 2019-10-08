#include <librealsense2/rs.hpp>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/console/parse.h>
#include <pcl/common/transforms.h>
#include <pcl/visualization/pcl_visualizer.h>

int i = 0;
int xmin = 250;
int xmax = 400;
int ymin = 100;
int ymax = 300;

pcl::PointCloud<pcl::PointXYZ>::Ptr points_to_pcl(const rs2::points& points, const rs2::video_frame& color)
{
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

	auto sp = points.get_profile().as<rs2::video_stream_profile>();
	cloud->width = sp.width();
	cloud->height = sp.height();
	cloud->is_dense = false;
	cloud->points.resize(points.size());

	auto vertices = points.get_vertices();

    for(int y = 0; y < 480; ++y)
    {
        for(int x = 0; x < 640; ++x)
        {
            if(x >= xmin && x <= xmax && y >= ymin && y <= ymax)
            {
                cloud->points[i].x = vertices[i].x;
                cloud->points[i].y = vertices[i].y;
                cloud->points[i].z = vertices[i].z;
            }
            ++i;
        }
    }
	return cloud;
}

int main(int argc, char * argv[])
{
	boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer(new pcl::visualization::PCLVisualizer("3D Viewer"));

	// Declare pointcloud object, for calculating pointclouds and texture mappings
	rs2::pointcloud pc;
	// We want the points object to be persistent so we can display the last cloud when a frame drops
	rs2::points points;

	// Declare RealSense pipeline, encapsulating the actual device and sensors
	rs2::pipeline pipe;
	// Start streaming with default recommended configuration
	pipe.start();

    // Wait for the next set of frames from the camera
    auto frames = pipe.wait_for_frames();
    auto depth = frames.get_depth_frame();
    auto color = frames.get_color_frame();
    
    // Generate the pointcloud and texture mappings
    points = pc.calculate(depth);
    pc.map_to(color);

    // Convert to PCL: 
    auto pcl_points = points_to_pcl(points, color);

    pcl::io::savePCDFile("test.pcd", *pcl_points);

    viewer->removeAllPointClouds();
    viewer->addPointCloud<pcl::PointXYZ>(pcl_points);

    viewer->spin();

	return EXIT_SUCCESS;
}