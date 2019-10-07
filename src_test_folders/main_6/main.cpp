#include <iostream>
#include "pipeline.h"
#include "vis.h"
#include "tf.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
pcl::visualization::PCLVisualizer::Ptr viewer;

struct main_tf_data{
    pcl::PointXYZ center;
    pcl::PointXYZ x_axis;
    pcl::PointXYZ y_axis;
    pcl::PointXYZ z_axis;
};

struct test{
    int center;

};

int main(int argc, char** argv){
    string file_name = "";
    
    file_name = argv[1];
    cout << "##############################" << endl;
    cout << "MAIN \n"  << "file_name: " << argv[1] << endl;
    cout << "##############################" << endl;

    if (argc != 2){
        cout << "Add input_file.pcd" << endl;
        return (0);
    }        

    //Get PCD from Pipeline.cpp
    Pipeline pipe;
    cloud = pipe.getCloud(file_name);

    //get transformation of PCD
    Transformation transform;
    main_tf_data tf_data;
    tf_data = transform.getTf(cloud);
    

    //visualize PCD
    Vis vis;
    viewer = vis.createViewer();
    viewer = vis.addCloud(viewer, cloud);
    vis.showViewer(viewer);
    
    return(0);
}