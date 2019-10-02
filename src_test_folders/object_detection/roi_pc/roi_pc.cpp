#include <librealsense2/rs.hpp> // Include RealSense Cross Platform API
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/visualization/pcl_visualizer.h>

int xmin = 100;
int xmax = 200;
int ymin = 0;
int ymax = 300;

pcl::PointCloud<pcl::PointXYZ>::Ptr points_to_pcl(const rs2::points& points, const rs2::video_frame& color)
{
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
		auto vertices = points.get_vertices();

		for (int i = xmin; i < xmax; i++ )
		{
			for(int j = ymin; j < ymax; j++)
			{
				cloud->points[i].x = vertices[i].x;
				cloud->points[i].y = vertices[i].y;
				cloud->points[i].z = vertices[i].z;
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

	while (!viewer->wasStopped())
	{
		// Wait for the next set of frames from the camera
		auto frames = pipe.wait_for_frames();
		auto depth = frames.get_depth_frame();
		auto color = frames.get_color_frame();
		
		// Generate the pointcloud and texture mappings
		points = pc.calculate(depth);
		pc.map_to(color);

		// Convert to PCL: 
		auto pcl_points = points_to_pcl(points, color);

		viewer->removeAllPointClouds();
		viewer->addPointCloud<pcl::PointXYZ>(pcl_points);

		viewer->spinOnce(100);
		boost::this_thread::sleep(boost::posix_time::microseconds(1));
	}

	return EXIT_SUCCESS;
}