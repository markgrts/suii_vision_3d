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
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud;
        pcl::PointCloud<pcl::PointXYZ>::Ptr table;
        pcl::PointCloud<pcl::PointXYZ>::Ptr object;
        pcl::visualization::PCLVisualizer::Ptr viewer;
        obj_struct objects_struct;
        vector<obj_struct> list;
    public:
        Gettf();
        void send_pcd(pcl::PointCloud<pcl::PointXYZ>::Ptr, string cloud_name);
        vector<obj_struct> build_center(string, vector<int>, vector<obj_struct>,bool);
        //std::list<int> build_view(void);
        bool reset_view(void);
};

#endif