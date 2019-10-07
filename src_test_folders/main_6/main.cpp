#include <iostream>
#include "pipeline.h"
#include "vis.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
pcl::visualization::PCLVisualizer::Ptr viewer;
//class get tf

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

    //visualize PCD
    Vis vis;
    viewer = vis.createViewer();
    viewer = vis.addCloud(viewer, cloud);
    vis.showViewer(viewer);
    
    return(0);
}