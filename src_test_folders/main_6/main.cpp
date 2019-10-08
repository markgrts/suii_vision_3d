#include <iostream>
#include "pipeline.h"
#include "vis.h"
#include "tf.h"
#include "segmentation.h"
#include "tf_struct.h"
#include "cloud_array.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
pcl::visualization::PCLVisualizer::Ptr viewer;
std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> main_clouds;

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

    //Create cloud array
    CloudArray array_test;
    //array_test.printVector();
    array_test.setVector();
    //array_test.printVector();
    std::vector<int> v;
    v = array_test.giveVector();
    for(int n : v){
        std::cout << n << std::endl;
    }

    //Get segmented PCD's
    Segmentation segment;

    //get transformation of PCD
    Transformation transform;
    tf_struct_data main_tf_data;
    main_tf_data = transform.getTf(cloud);

    //visualize PCD
    Vis vis;
    viewer = vis.createViewer();
    viewer = vis.addCloud(viewer, cloud);
    viewer = vis.addTf(viewer,main_tf_data);
    vis.showViewer(viewer);
    
    return(0);
}