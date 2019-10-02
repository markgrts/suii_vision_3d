#include <librealsense2/rs.hpp>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/console/parse.h>
#include <pcl/common/transforms.h>
#include <pcl/visualization/pcl_visualizer.h>

std::tuple<uint8_t, uint8_t, uint8_t> get_texcolor(rs2::video_frame texture, rs2::texture_coordinate texcoords)
{
	const int w = texture.get_width(), h = texture.get_height();
	int x = std::min(std::max(int(texcoords.u*w + .5f), 0), w - 1);
	int y = std::min(std::max(int(texcoords.v*h + .5f), 0), h - 1);
	int idx = x * texture.get_bytes_per_pixel() + y * texture.get_stride_in_bytes();
	const auto texture_data = reinterpret_cast<const uint8_t*>(texture.get_data());
	return std::tuple<uint8_t, uint8_t, uint8_t>(
		texture_data[idx], texture_data[idx + 1], texture_data[idx + 2]);
}

int i = 0;
int j = 500;

pcl::PointCloud<pcl::PointXYZ>::Ptr points_to_pcl(const rs2::points& points, const rs2::video_frame& color)
{
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

	auto sp = points.get_profile().as<rs2::video_stream_profile>();
	cloud->width = sp.width();
	cloud->height = sp.height();
	cloud->is_dense = false;
	cloud->points.resize(points.size());

	auto tex_coords = points.get_texture_coordinates();
	auto vertices = points.get_vertices();

	//for (int i = 0; i < points.size(); ++i)
    for(int y = 0; y < 480; ++y)
    {
        for(int x = 0; x < 640; ++x)
        {
            cloud->points[i].x = vertices[j].x;
            cloud->points[i].y = vertices[j].y;
            cloud->points[i].z = vertices[j].z;

            /*std::tuple<uint8_t, uint8_t, uint8_t> current_color;
            current_color = get_texcolor(color, tex_coords[i]);

            cloud->points[x].r = std::get<0>(current_color);
            cloud->points[x].g = std::get<1>(current_color);
            cloud->points[x].b = std::get<2>(current_color);
            */

            ++i;
            ++j;
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