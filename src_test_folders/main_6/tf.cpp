#include "tf.h"
#include <iostream>

Transformation::Transformation()
{
    std::cout << "Transformation CREATED" << std::endl;
    std::cout << "##############################" << std::endl;

}

tf_data Transformation::getTf(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    std::cout << "RETURNED TF" << std::endl;
    std::cout << "##############################" << std::endl;

    return(tf_tf_data);
}

