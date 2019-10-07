#include "tf.h"
#include <iostream>

Transformation::Transformation()
{
    cout << "TRANSFORMATION CREATED" << endl;
    cout << "##############################" << endl;
}

tf_data Transformation::getTf(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    cout << "RETURNED TF" << endl;
    cout << "##############################" << endl;

    return(transform);
}
