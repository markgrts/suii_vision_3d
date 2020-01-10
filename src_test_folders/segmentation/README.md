# Segmentation tests

This map contains all segmentation tests.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests
Below, the used segmentation tutorials of PCL are explained how to use them. Some test uses a .pcd file to run. More PCD examples can be found in the [Pictures](https://github.com/markgrts/suii_vision_3d/tree/master/pictures) folder.

### segmentation_plane_model
This test searches for the planar model in a PCD.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./plane_model
```
Tutorial followed: [Plane model segmentation](http://pointclouds.org/documentation/tutorials/planar_segmentation.php#planar-segmentation)

### segmentation_euclidean_cluster_extraction
This test uses the euclidean cluster extraction to extract cluster out a PCD.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* Add a PCD file to the build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./cluster_extraction <pcd_name>.pcd
```
Tutorial followed: [Euclidean Cluster Extraction](http://pointclouds.org/documentation/tutorials/cluster_extraction.php#cluster-extraction)

From this tutorial, own version where created until version 4. All versions are added to the segmentation_euclidean_cluster_extraction. In version 4, an own PCD can be added, and the results are also visualised modifying and combing the [visualizer](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/visualization/visualization_pcl_visualizer) tutorial with the Euclidean Cluster Extractions tutorial.
