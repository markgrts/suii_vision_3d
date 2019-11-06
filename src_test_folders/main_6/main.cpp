#include <iostream>
#include "pipeline.h"
#include "vis.h"
#include "tf.h"
#include "segmentation.h"
#include "tf_struct.h"
#include "obj_struct.h"

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
    obj_struct objects_struct;
    objects_struct = segment.getTableSeg(cloud);
    object = segment.getObjectSeg(objects_struct.object);
    //object = *segment.getObjectSeg(&cloud);
    
    //get transformation of PCD
    Transformation transform;
    tf_struct_data table_tf;
    table_tf = transform.getTf(objects_struct.table);
    std::cout << table_tf.center << std::endl;

    tf_struct_data object_tf;
    //object_tf = transform.getTf(object);
    object_tf = transform.getTf(objects_struct.object);
    std::cout << object_tf.center << std::endl;
    
    //visualize PCD
    Vis vis;
    viewer = vis.createViewer();
    viewer = vis.addCloud(viewer, objects_struct.table);
    viewer = vis.addTf(viewer, table_tf);
    viewer = vis.addCloud(viewer, object);
    viewer = vis.addTf(viewer, object_tf);
    vis.showViewer(viewer);
    
    return(0);
}