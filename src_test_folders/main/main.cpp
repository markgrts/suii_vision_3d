#include <iostream>
#include "tf_struct.h"
#include "gettf.h"

using namespace std;
pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);

int main(int argc, char** argv){
    bool time_debug = true;
    clock_t start;
    double duration;

    start = clock();
    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"starting time: "<< duration <<'\n';
    }

    
    string file_name = "";
    file_name = argv[1];
    cout << "##############################" << endl;
    cout << "MAIN \n"  << "file_name: " << argv[1] << endl;
    cout << "##############################" << endl;

    if (argc != 2){
        cout << "Add input_file.pcd" << endl;
        return (0);
    }        
    
    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"loading pcd from pc: "<< duration <<'\n';
    }


    //get PCD
    Gettf gettf;
    gettf.send_pcd(cloud, file_name);

    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"Send, filter and get segmentation: "<< duration <<'\n';
    }

    //FOR TESTING SENDING TIME PCD
    cloud = gettf.time_test();
    cout << cloud << endl;
    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"DURATION OF SENDING A PCD FROM FILE TO FILE : "<< duration <<'\n';
    }

    //get TFs of object and table and visualise 
    vector<int> roi;
    for(int i = 1; i <= 4; i++){
        roi.push_back(i);
    }
    string name = "table";
    bool debug = false;
    gettf.build_center(name, roi, debug);

    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"build table center: "<< duration <<'\n';
    }

    name = "object";
    gettf.build_center(name, roi, debug);

    if (time_debug){
        duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        std::cout<<"build obje center: "<< duration <<'\n';
    } 

    gettf.reset_view();  
    
    return(0);
}