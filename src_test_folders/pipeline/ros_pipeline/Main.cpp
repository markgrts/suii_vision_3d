#include <iostream>
#include "getImages.h"
#include <opencv2/opencv.hpp> 
#include <librealsense2/rs.hpp>

#include <pcl/visualization/pcl_visualizer.h>

using namespace cv;
using namespace std;

int main(){
    GetImages getimage;
    img_struct images = getimage.GetPic();
    rs2::frame color_frame = images.Image;

    //show rgb image
    Mat color(Size(640, 480), CV_8UC3, (void*)color_frame.get_data(), Mat::AUTO_STEP);
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", color);
    waitKey(0);

    //show pcd
    pcl::visualization::PCLVisualizer viewer("Cloud Viewer");
    viewer.addPointCloud (images.Cloud,"pcd");
    viewer.spin();

    return 0;
}