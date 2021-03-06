#include "gettf.h"
#include <iostream>
#include <fstream>

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
    //Filter cloud
    cloud = filter.pt_Filter(cloud);
    //cloud = filter.cut_Filter(cloud, xmin, xmax, ymin, ymax);
    cloud = filter.d_Filter(cloud);
    //outlier removal
    cloud = filter.outlier_Removal(cloud, 50.0, 1);
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
    
    tf_br_data tf_br = transform_data(center);

    center_list.push_back(tf_br);
}
    
// getTf member function
vector<tf_br_data> Gettf::build_view(bool debug)
{
    if (debug)
    {
        cout << "list contains: " << endl;
        for(int i = 0; i < center_list.size(); i++)
        {
            cout << "name: " << center_list[i].name << endl;
            cout << "pos_x: " << center_list[i].pos_x << endl;
            cout << "pos_y: " << center_list[i].pos_y << endl;
            cout << "pos_z: " << center_list[i].pos_z << endl;
            cout << "quat_z: " << center_list[i].quat_z << endl;
            cout << "quat_w: " << center_list[i].quat_w << endl;            
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

tf_br_data Gettf::transform_data(tf_struct_data center_result)
{
    tf_br_data tf_br;
    tf_br.name = center_result.name;
    tf_br.pos_x = center_result.center.x;
    tf_br.pos_y = center_result.center.y;
    tf_br.pos_z = center_result.center.z;
    

    //first was atan2
    //double yaw = atan2((center_result.x_axis.y - center_result.center.y),(center_result.x_axis.x - center_result.center.x));
    double yaw = atan((center_result.x_axis.y - center_result.center.y)/(center_result.x_axis.x - center_result.center.x));
    if ((center_result.x_axis.y - center_result.center.y) > 0 && (center_result.x_axis.x - center_result.center.x) < 0)
    {
        //Angle relative to positive x-axis is 180 - angle (angle is negative so we need to add it to 180)
        yaw = PI + yaw;
    }
    else if ((center_result.x_axis.y - center_result.center.y) < 0 && (center_result.x_axis.x - center_result.center.x) < 0)
    {
        //Angle relative to positive x-axis is 180 + angle
        yaw = yaw + PI;
    }
    else if ((center_result.x_axis.y - center_result.center.y) < 0 && (center_result.x_axis.x - center_result.center.x) > 0)
    {
        //Angle relative to positive x-axis is 360 - angle (angle is negative so we need to add it to 360)
        yaw = 2*PI + yaw;
    }

    //Write data in test.csv file (Table, Table_z, Object, Pos_x, Pos_y, Pos_z, Angle (º))
    if(center_result.name == "table")
    {
        string filename = "test.csv";
        fstream fin;
        fin.open(filename, ios::out | ios::app);
        fin.seekg(ios_base::end);
        fin << center_result.name << ", " <<
        center_result.center.z << ", ";
        fin.close();
    }
    
    if(center_result.name == "object")
    {
        string filename = "test.csv";
        fstream fin;
        fin.open(filename, ios::out | ios::app);
        fin.seekg(ios_base::end);
        fin << center_result.name << ", " << 
        center_result.center.x<< ", " << 
        center_result.center.y << ", " <<
        center_result.center.z << ", " <<
        yaw*180/PI << "\n";
        fin.close();  
    }


    double pitch = 0.0;
    double roll = 0.0;
    double cy = cos(yaw * 0.5);
    double sy = sin(yaw * 0.5);
    double cp = cos(pitch * 0.5);
    double sp = sin(pitch * 0.5);
    double cr = cos(roll * 0.5);
    double sr = sin(roll * 0.5);
    
    tf_br.quat_x = 0.0;
    tf_br.quat_y = 0.0;
    tf_br.quat_z = sy * cp * cr - cy * sp * sr;
    tf_br.quat_w = cy * cp * cr + sy * sp * sr;

    return tf_br;
}
