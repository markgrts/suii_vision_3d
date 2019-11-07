#include <iostream>
#include "gettf.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);

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

    
    //get PCD
    Gettf gettf;
    gettf.send_pcd(cloud, file_name);
    
    //get TFs of object and table and visualise 
    vector<int> roi;
    for(int i = 1; i <= 4; i++){
        roi.push_back(i);
    }
    string name = "test";
    bool debug = true;
    bool done = gettf.build_center(name, roi, debug);

    gettf.reset_view();  
    
    return(0);
}