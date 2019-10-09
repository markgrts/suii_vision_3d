#include <iostream>
#include "pipeline.h"
#include "vis.h"
#include "tf.h"
#include "segmentation.h"
#include "tf_struct.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
pcl::PointCloud<pcl::PointXYZ>::Ptr table (new pcl::PointCloud<pcl::PointXYZ>);
pcl::PointCloud<pcl::PointXYZ>::Ptr object (new pcl::PointCloud<pcl::PointXYZ>);
pcl::visualization::PCLVisualizer::Ptr viewer;

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

    //Get segmented PCD's
    Segmentation segment;
    table = *segment.getTableSeg(&cloud);
    object = *segment.getObjectSeg(&cloud);
    
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