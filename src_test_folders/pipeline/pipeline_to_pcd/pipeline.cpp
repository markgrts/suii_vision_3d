// include the librealsense C++ header file
#include <librealsense2/rs.hpp>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/console/parse.h>
#include <pcl/common/transforms.h>
#include <pcl/visualization/pcl_visualizer.h>

using namespace std;

using pcl_cloud = pcl::PointCloud<pcl::PointXYZ>::Ptr;

pcl_cloud points_to_pcl(const rs2::points& points)
{
    pcl_cloud cloud(new pcl::PointCloud<pcl::PointXYZ>);

    auto sp = points.get_profile().as<rs2::video_stream_profile>();
    cloud->width = sp.width();
    cloud->height = sp.height();
    cloud->is_dense = false;
    cloud->points.resize(points.size());
    auto ptr = points.get_vertices();
    for (auto& p : cloud->points)
    {
        p.x = ptr->x;
        p.y = ptr->y;
        p.z = ptr->z;
        ptr++;
    }

    return cloud;
}

int main(int argc, char** argv)
{
    pcl::visualization::PCLVisualizer viewer("Cloud Viewer");

    //Contruct a pipeline which abstracts the device
    rs2::pipeline pipe;

    //Create a configuration for configuring the pipeline with a non default profile
    rs2::config cfg;

    rs2::pointcloud pc;
    rs2::points points;

    //Add desired streams to configuration
    //cfg.enable_stream(RS2_STREAM_INFRARED, 640, 480, RS2_FORMAT_Y8, 30);
    //cfg.enable_stream(RS2_STREAM_DEPTH, 640, 480, RS2_FORMAT_Z16, 30);

    //Instruct pipeline to start streaming with the requested configuration
    pipe.start(cfg);

    // Camera warmup - dropping several first frames to let auto-exposure stabilize
    rs2::frameset frames;
    /*for(int i = 0; i < 30; i++)
    {
        //Wait for all configured streams to produce a frame
        auto frames = pipe.wait_for_frames();
    }*/

    frames = pipe.wait_for_frames();

    auto depth = frames.get_depth_frame();
	auto color = frames.get_color_frame();

    pc.map_to(color);
	points = pc.calculate(depth);

    auto pcl_cloud = points_to_pcl(points);

    pcl::io::savePCDFile(argv[1], *pcl_cloud);

    viewer.addPointCloud (pcl_cloud,"pcd");
    viewer.spin();

    return 0;
}