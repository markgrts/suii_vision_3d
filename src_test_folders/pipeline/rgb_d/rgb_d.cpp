//http://docs.ros.org/kinetic/api/librealsense2/html/rs-pcl-color_8cpp_source.html
// include the librealsense C++ header file
#include <librealsense2/rs.hpp>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_cloud.h>
#include <pcl/console/parse.h>
#include <pcl/common/transforms.h>
#include <pcl/visualization/pcl_visualizer.h>

using namespace std;

typedef pcl::PointXYZRGB RGB_Cloud;
typedef pcl::PointCloud<RGB_Cloud> point_cloud;
typedef point_cloud::Ptr cloud_pointer;

int NT1 = 0;
int NT2 = 0;
int NT3 = 0;

pcl::PointCloud<pcl::PointXYZRGB>::Ptr newCloud (new pcl::PointCloud<pcl::PointXYZRGB>);

std::tuple<int, int, int> RGB_Texture(rs2::video_frame texture, rs2::texture_coordinate Texture_XY)
{
    // Get Width and Height coordinates of texture
    int width  = texture.get_width();  // Frame width in pixels
    int height = texture.get_height(); // Frame height in pixels

    // Normals to Texture Coordinates conversion
    int x_value = min(max(int(Texture_XY.u * width  + .5f), 0), width - 1);
    int y_value = min(max(int(Texture_XY.v * height + .5f), 0), height - 1);
    //std::cout << x_value << "\n";
    

    //change this value to set a roi (only in x direction)
    if (x_value > 300 && x_value < 500)
    {
        int bytes = x_value * texture.get_bytes_per_pixel();   // Get # of bytes per pixel
        int strides = y_value * texture.get_stride_in_bytes(); // Get line width in bytes
        int Text_Index =  (bytes + strides);

        const auto New_Texture = reinterpret_cast<const uint8_t*>(texture.get_data());

        // RGB components to save in tuple
        NT1 = New_Texture[Text_Index];
        NT2 = New_Texture[Text_Index + 1];
        NT3 = New_Texture[Text_Index + 2];
    }
    else
    {
        NT1 = 0;
        NT2 = 0;
        NT3 = 0;
    }
    
    return std::tuple<int, int, int>(NT1, NT2, NT3);
}

cloud_pointer PCL_Conversion(const rs2::points& points, const rs2::video_frame& color){
    // Object Declaration (Point Cloud)
    cloud_pointer cloud(new point_cloud);

    // Declare Tuple for RGB value Storage (<t0>, <t1>, <t2>)
    std::tuple<uint8_t, uint8_t, uint8_t> RGB_Color;
    //================================
    // PCL Cloud Object Configuration
    //================================
    // Convert data captured from Realsense camera to Point Cloud
    auto sp = points.get_profile().as<rs2::video_stream_profile>();

    cloud->width  = static_cast<uint32_t>( sp.width()  );   
    cloud->height = static_cast<uint32_t>( sp.height() );
    cloud->is_dense = false;
    cloud->points.resize( points.size() );

    auto Texture_Coord = points.get_texture_coordinates();
    auto Vertex = points.get_vertices();

    // Iterating through all points and setting XYZ coordinates
    // and RGB values
    for (int i = 0; i < points.size(); i++)
    {   
        //===================================
        // Mapping Depth Coordinates
        // - Depth data stored as XYZ values
        //===================================
        cloud->points[i].x = Vertex[i].x;
        cloud->points[i].y = Vertex[i].y;
        cloud->points[i].z = Vertex[i].z;

        // Obtain color texture for specific point
        RGB_Color = RGB_Texture(color, Texture_Coord[i]);

        // Mapping Color (BGR due to Camera Model)
        cloud->points[i].r = get<2>(RGB_Color); // Reference tuple<2>
        cloud->points[i].g = get<1>(RGB_Color); // Reference tuple<1>
        cloud->points[i].b = get<0>(RGB_Color); // Reference tuple<0>

    }
      
 return cloud; // PCL RGB Point Cloud generated
}

int main(int argc, char** argv)
{
    pcl::visualization::PCLVisualizer viewer("Cloud Viewer");
    // Set background of viewer to black
    viewer.setBackgroundColor (0, 0, 0); 
    // Viewer Properties
    viewer.initCameraParameters();  // Camera Parameters for ease of viewing

    //Contruct a pipeline which abstracts the device
    rs2::pipeline pipe;

    //Create a configuration for configuring the pipeline with a non default profile
    rs2::config cfg;

    rs2::pointcloud pc;
    rs2::points points;

    //Add desired streams to configuration
    cfg.enable_stream(RS2_STREAM_COLOR, 640, 480, RS2_FORMAT_BGR8, 30);
    cfg.enable_stream(RS2_STREAM_INFRARED, 640, 480, RS2_FORMAT_Y8, 30);
    cfg.enable_stream(RS2_STREAM_DEPTH, 640, 480, RS2_FORMAT_Z16, 30);

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
    cloud_pointer end_Cloud = PCL_Conversion(points, color);

    //pcl::io::savePCDFile(argv[1], *end_Cloud);

    viewer.addPointCloud (end_Cloud,"pcd");
    // Default size for rendered points
    //viewer.setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 1, "pcd");
    viewer.spin();

    return 0;
}