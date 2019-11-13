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
        //creating variables
        pcl::visualization::PCLVisualizer::Ptr viewer;
        obj_struct objects_struct;
        vector<tf_struct_data> center_list;
        //Creating objects of classes
        Pipeline pipe;
        Filter filter;
        Segmentation segment;
        Transformation transform;
        Vis vis;
        
    public:
        Gettf(bool);
        void send_pcd(pcl::PointCloud<pcl::PointXYZ>::Ptr, string);
        void build_center(string, vector<int>, bool);
        vector<tf_struct_data> build_view(bool);
        void show_viewer(void);
        bool reset_view(void);
        //time_test only for testing speed of sending PCD
        pcl::PointCloud<pcl::PointXYZ>::Ptr time_test(void);
};

#endif