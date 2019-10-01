#include <iostream>
#include "main.h"


using namespace std;

pcl::PointCloud<pcl::PointXYZ>::Ptr pipeline(string);
void viz(pcl::PointCloud<pcl::PointXYZ>);

pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
//pcl::PointCloud<pcl::PointXYZ> cloud;

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
    
    cloud = pipeline(file_name);
    viz(cloud);

    return(0);
}