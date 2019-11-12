#include "gettf.h"

//getTf constructor
Gettf::Gettf(void)
{
    cout << "GetTf CREATED" << endl;
    cout << "##############################" << endl;
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
    cout << *cloud << endl;
    //Need to implement ROI for specific objects and include pt_Filter cut the objects out
}

pcl::PointCloud<pcl::PointXYZ>::Ptr Gettf::time_test()
{
    cout << cloud << endl;
    return(cloud);
}

// getTf member function
void Gettf::build_center(string name, vector<int> roi, bool debug)
{
    //Need to implement ROI for specific objects and include pt_Filter cut the objects out
    if (name == "table"){
        table_tf = transform.getTf(objects_struct.table);
        center.name = name;
        center.center = table_tf.center;
        center.x_axis = table_tf.x_axis;
        center.y_axis = table_tf.y_axis;
        center.z_axis = table_tf.z_axis;
    }
    else{
        //Add pt_filter from ROI
        objects_struct.object = segment.getObjectSeg(objects_struct.object);
        object_tf = transform.getTf(objects_struct.object);
        center.name = name;
        center.center = object_tf.center;
        center.x_axis = object_tf.x_axis;
        center.y_axis = object_tf.y_axis;
        center.z_axis = object_tf.z_axis;
    }

    cout << "name: " << center.name << endl;
    cout << "x: " << center.x_axis << endl;
    cout << "y: " << center.y_axis << endl;
    cout << "z: " << center.z_axis << endl;
    

    if (debug)
    {
        //visualize PCD
        //Put visualisation in a debug mode
        viewer = vis.createViewer();
        viewer = vis.addCloud(viewer, objects_struct.table);
        viewer = vis.addTf(viewer, table_tf);
        viewer = vis.addCloud(viewer, objects_struct.object);
        viewer = vis.addTf(viewer, object_tf);
        vis.showViewer(viewer);
        cout << "done building center " << roi.at(1) << endl;
    }

   // return(center);
}


/*
// getTf member function
std::list<int> Gettf::build_view(void)
{
    ;
}
*/

// getTf member function
bool Gettf::reset_view(void)
{
    objects_struct = obj_struct();
    cout << "cleared list" << endl;
}




