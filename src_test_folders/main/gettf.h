#ifndef GET_TF_H
#define GET_TF_H

#include <iostream>
#include "pipeline.h"
#include "vis.h"
#include "tf.h"
#include "segmentation.h"
#include "tf_struct.h"
#include "obj_struct.h"
#include "filter.h"

using namespace std;

class Gettf
{
    private:
        //creating PCL variables
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud;
        pcl::PointCloud<pcl::PointXYZ>::Ptr table;
        pcl::PointCloud<pcl::PointXYZ>::Ptr object;
        pcl::visualization::PCLVisualizer::Ptr viewer;
        //Creating self made variables
        obj_struct objects_struct;
        tf_struct_data center;
        tf_struct_data table_tf;
        tf_struct_data object_tf;
        //Creating objects of classes
        Pipeline pipe;
        Filter filter;
        Segmentation segment;
        Transformation transform;
        Vis vis;
        
    public:
        Gettf();
        void send_pcd(pcl::PointCloud<pcl::PointXYZ>::Ptr, string);
        pcl::PointCloud<pcl::PointXYZ>::Ptr time_test();
        void build_center(string, vector<int>, bool);
        //std::list<int> build_view(void);
        bool reset_view(void);
};

#endif