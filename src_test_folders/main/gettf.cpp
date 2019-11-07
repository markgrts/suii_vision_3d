#include "gettf.h"

//getTf constructor
Gettf::Gettf(void)
{
    cout << "FILTER CREATED" << endl;
    cout << "##############################" << endl;
}

void Gettf::send_pcd(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud, string cloud_name)
{
    //Get PCD from Pipeline.cpp
    Pipeline pipe;
    cloud = pipe.getCloud(cloud_name);
    //Filter cloud
    Filter filter;
    cloud = filter.pt_Filter(cloud);
    cloud = filter.d_Filter(cloud);

    //Get segmented PCD's
    Segmentation segment;

    //Segment.getTableSeg gets table segmentation and cuts it out of the PCD. It will retrun the table PCD and a PCD containing everything else
    objects_struct = segment.getTableSeg(cloud);
    //Need to implement ROI for specific objects and include pt_Filter cut the objects out
        
    //object = *segment.getObjectSeg(&cloud);
    cout << "loaded cloud" << endl;
}

// getTf member function
bool Gettf::build_center(string name, vector<int> roi, bool debug)
{
    //Get segmented PCD's
    Segmentation segment;
    //Need to implement ROI for specific objects and include pt_Filter cut the objects out
    objects_struct.object = segment.getObjectSeg(objects_struct.object);

    //Get tf of table
    Transformation transform;
    tf_struct_data table_tf;
    table_tf = transform.getTf(objects_struct.table);

    //Get tf of object
    tf_struct_data object_tf;
    object_tf = transform.getTf(objects_struct.object);

    if (debug)
    {
        //visualize PCD
        //Put visualisation in a debug mode
        Vis vis;
        viewer = vis.createViewer();
        viewer = vis.addCloud(viewer, objects_struct.table);
        viewer = vis.addTf(viewer, table_tf);
        viewer = vis.addCloud(viewer, objects_struct.object);
        viewer = vis.addTf(viewer, object_tf);
        vis.showViewer(viewer);
        cout << "done building center " << roi.at(1) << endl;
    }
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




