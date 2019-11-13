#include "gettf.h"
#include <iostream>

using namespace std;

//getTf constructor
Gettf::Gettf(bool debug)
{
    cout << "GetTf CREATED" << endl;
    cout << "##############################" << endl;
    if (debug)
    {
        //Create viewer
        viewer = vis.createViewer();
    }
}

void Gettf::send_pcd(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud, string cloud_name)
{
    //Get PCD from Pipeline.cpp
    cloud = pipe.getCloud(cloud_name);
    //Filter cloud
    cloud = filter.pt_Filter(cloud);
    cloud = filter.d_Filter(cloud);
    //Segment.getTableSeg gets table segmentation and cuts it out of the PCD. It will retrun the table PCD and a PCD containing everything else
    objects_struct = segment.getTableSeg(cloud);
}

//getTf member function
void Gettf::build_center(string name, vector<int> roi, bool debug)
{
    tf_struct_data center;
    //Need to implement ROI for specific objects and include pt_Filter cut the objects out
    if (name == "table"){
        tf_struct_data table_tf = transform.getTf(objects_struct.table);
        center.name = name;
        center.center = table_tf.center;
        center.x_axis = table_tf.x_axis;
        center.y_axis = table_tf.y_axis;
        center.z_axis = table_tf.z_axis;
        
        if (debug)
        {
            viewer = vis.addCloud(viewer, objects_struct.table);
            viewer = vis.addTf(viewer, table_tf);
        }
    }
    else{
        //Add pt_filter from ROI
        objects_struct.object = segment.getObjectSeg(objects_struct.object);
        tf_struct_data object_tf = transform.getTf(objects_struct.object);
        center.name = name;
        center.center = object_tf.center;
        center.x_axis = object_tf.x_axis;
        center.y_axis = object_tf.y_axis;
        center.z_axis = object_tf.z_axis;
        if (debug)
        {
            viewer = vis.addCloud(viewer, objects_struct.object);
            viewer = vis.addTf(viewer, object_tf);
        }
    }
    
    center_list.push_back(center);
}
    
// getTf member function
vector<tf_struct_data> Gettf::build_view(bool debug)
{
    if (debug)
    {
        cout << "list contains: " << endl;
        for(int i = 0; i < center_list.size(); i++)
        {
            cout << "name: " << center_list[i].name << endl;
            cout << "center: " << center_list[i].center << endl;
            cout << "x axis: " << center_list[i].x_axis << endl;
            cout << "y axis: " << center_list[i].y_axis << endl;
            cout << "z axis: " << center_list[i].z_axis << endl;
        }
    }
    return (center_list);
}


void Gettf::show_viewer(void)
{   
    vis.showViewer(viewer);
}

// getTf member function
bool Gettf::reset_view(void)
{
    center_list.erase(center_list.begin(),center_list.end());
    objects_struct = obj_struct();
    cout << "cleared list" << endl;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Gettf::time_test(void)
{
    //This function is purely for testing the speed of sending a PCD!
    return(objects_struct.table);
}



