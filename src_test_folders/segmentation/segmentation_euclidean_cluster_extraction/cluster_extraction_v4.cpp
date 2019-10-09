//http://www.pointclouds.org/documentation/tutorials/cluster_extraction.php#cluster-extraction
#include <thread>
#include <pcl/ModelCoefficients.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/features/normal_3d.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/extract_clusters.h>
#include <pcl/console/parse.h>
#include <pcl/visualization/pcl_visualizer.h>

using namespace std::chrono;

struct Color_vals {
    int col1;
    int col2;
    int col3; 
};


Color_vals color_func(int a){
    Color_vals color;
    if(a == 0){
        color.col1 = 255;
        color.col2 = 0;
        color.col3 = 0;
    }
    else if(a == 1){
        color.col1 = 0;
        color.col2 = 255;
        color.col3 = 0;
    }
    else if(a == 2){
        color.col1 = 0;
        color.col2 = 0;
        color.col3 = 255;
    }
    else if(a == 3){
        color.col1 = 0;
        color.col2 = 255;
        color.col3 = 255;
    }
    else if(a == 4){
        color.col1 = 255;
        color.col2 = 255;
        color.col3 = 0;
    }
    else if(a == 5){
        color.col1 = 255;
        color.col2 = 0;
        color.col3 = 255;
    }
    else if(a == 6){
        color.col1 = 125;
        color.col2 = 125;
        color.col3 = 0;
    }
    else if(a == 7){
        color.col1 = 0;
        color.col2 = 125;
        color.col3 = 125;
    }
    else if(a == 8){
        color.col1 = 125;
        color.col2 = 0;
        color.col3 = 125;
    }
    else if(a == 9){
        color.col1 = 125;
        color.col2 = 125;
        color.col3 = 125;
    }
    else if(a == 10){
        color.col1 = 30;
        color.col2 = 100;
        color.col3 = 200;
    }
    else{
        color.col1 = 255;
        color.col2 = 255;
        color.col3 = 255;
    }
    return(color);
} 

int 
main (int argc, char** argv)
{
    
    // Read in the cloud data
    pcl::PCDReader reader;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>), cloud_f (new pcl::PointCloud<pcl::PointXYZ>);
    
    //std::cout << argv[1] << std::endl;
    
    std::string input (argv[1]);
    int sz = input.size();
    input.resize(sz-4);
    std::cout << "filename without .pcd is: " << input << std::endl;
    //std::cout << "input: " << argv[1] << std::endl;
    //std::string one ("hey");s
    //std::string two (".pcd");
    //std::string total;
    //total = input - two;
    //std::cout << total << std::endl;
    
    reader.read (argv[1], *cloud);
    std::cout << "PointCloud before filtering has: " << cloud->points.size () << " data points." << std::endl; //*

    // Create the filtering object: downsample the dataset using a leaf size of 1cm
    pcl::VoxelGrid<pcl::PointXYZ> vg;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered (new pcl::PointCloud<pcl::PointXYZ>);
    vg.setInputCloud (cloud);
    vg.setLeafSize (0.001f, 0.001f, 0.001f);
    vg.filter (*cloud_filtered);
    std::cout << "PointCloud after filtering has: " << cloud_filtered->points.size ()  << " data points." << std::endl; //*

    // Create the segmentation object for the planar model and set all the parameters
    pcl::SACSegmentation<pcl::PointXYZ> seg;
    pcl::PointIndices::Ptr inliers (new pcl::PointIndices);
    pcl::ModelCoefficients::Ptr coefficients (new pcl::ModelCoefficients);
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_plane (new pcl::PointCloud<pcl::PointXYZ> ());
    pcl::PCDWriter writer;
    seg.setOptimizeCoefficients (true);
    seg.setModelType (pcl::SACMODEL_PLANE);
    seg.setMethodType (pcl::SAC_RANSAC);
    seg.setMaxIterations (100);
    seg.setDistanceThreshold (0.02);

    int i=0, nr_points = (int) cloud_filtered->points.size ();
    while (cloud_filtered->points.size () > 0.3 * nr_points)
    {
        // Segment the largest planar component from the remaining cloud
        seg.setInputCloud (cloud_filtered);
        seg.segment (*inliers, *coefficients);
        if (inliers->indices.size () == 0)
        {
        std::cout << "Could not estimate a planar model for the given dataset." << std::endl;
        break;
        }

        // Extract the planar inliers from the input cloud
        pcl::ExtractIndices<pcl::PointXYZ> extract;
        extract.setInputCloud (cloud_filtered);
        extract.setIndices (inliers);
        extract.setNegative (false);

        // Get the points associated with the planar surface
        extract.filter (*cloud_plane);
        std::cout << "PointCloud representing the planar component: " << cloud_plane->points.size () << " data points." << std::endl;

        // Remove the planar inliers, extract the rest
        extract.setNegative (true);
        extract.filter (*cloud_f);
        *cloud_filtered = *cloud_f;
    }

    /*
    pcl::visualization::PCLVisualizer::Ptr viewer2 (new pcl::visualization::PCLVisualizer ("3D Viewer"));
    viewer2->setBackgroundColor (0, 0, 0);
    viewer2->addPointCloud<pcl::PointXYZ> (cloud_plane, "test");
    viewer2->addCoordinateSystem (0.1);
    viewer2->initCameraParameters ();
    */

    // Creating the KdTree object for the search method of the extraction
    pcl::search::KdTree<pcl::PointXYZ>::Ptr tree (new pcl::search::KdTree<pcl::PointXYZ>);
    tree->setInputCloud (cloud_filtered);
    

    std::vector<pcl::PointIndices> cluster_indices;
    pcl::EuclideanClusterExtraction<pcl::PointXYZ> ec;
    ec.setClusterTolerance (0.02); // 2cm
    ec.setMinClusterSize (100);
    ec.setMaxClusterSize (25000);
    ec.setSearchMethod (tree);
    ec.setInputCloud (cloud_filtered);
    ec.extract (cluster_indices);

    
    //pcl::visualization::PCLVisualizer::Ptr viewer;
    pcl::visualization::PCLVisualizer::Ptr viewer (new pcl::visualization::PCLVisualizer ("3D Viewer"));
    viewer->setBackgroundColor (0, 0, 0);

    int j = 0;
    for (std::vector<pcl::PointIndices>::const_iterator it = cluster_indices.begin (); it != cluster_indices.end (); ++it)
    {
        
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_cluster (new pcl::PointCloud<pcl::PointXYZ>);
        for (std::vector<int>::const_iterator pit = it->indices.begin (); pit != it->indices.end (); ++pit)
        cloud_cluster->points.push_back (cloud_filtered->points[*pit]); //*
        cloud_cluster->width = cloud_cluster->points.size ();
        cloud_cluster->height = 1;
        cloud_cluster->is_dense = true;

        std::string cluster_name = "sample_cloud" + std::to_string(j);
    
        Color_vals color;
        color = color_func(j);

        pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> single_color(cloud_cluster, color.col1, color.col2, color.col3);
        viewer->addPointCloud<pcl::PointXYZ> (cloud_cluster, single_color, cluster_name);

        std::cout << "PointCloud representing the Cluster: " << cloud_cluster->points.size () << " data points." << std::endl;
        std::stringstream ss;
        ss << input << "_" << j << ".pcd";
        //writer.write<pcl::PointXYZ> (ss.str (), *cloud_cluster, false); //*
        j++;        

    }
    //viewer->setPointCloudRenderingProperties (pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 3, "sample cloud");
    viewer->addCoordinateSystem (0.1);
    viewer->initCameraParameters ();

    while (!viewer->wasStopped ())
    {
        viewer->spinOnce (100); 	
        //viewer2->spinOnce (100);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }


    return (0);
}