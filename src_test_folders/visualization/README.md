# Visualization tests

This map contains all visualization tests.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests
Below, the used visualization tutorials of PCL are explained how to use them. Some test uses a .pcd file to run. More PCD examples can be found in the [Pictures](https://github.com/markgrts/suii_vision_3d/tree/master/pictures) folder.

### visualization_pcl_visualizer
This test visualizes a PCD in multiple colors.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./pcl_visualizer_demo
```
* Add one of the given option to the command for example:
```
./pcl_visualizer_demo -r
```

Tutorial followed: [PCLVisualizer](http://pointclouds.org/documentation/tutorials/pcl_visualizer.php#pcl-visualizer)


