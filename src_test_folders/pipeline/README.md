# Pipeline tests

This map contains all pipeline tests. For setting up a pipeline for the Creative BlasterX Senz3D and getting receiving a RGB or depth image.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests

### pipeline_ply_to_pcd
This test converts a .ply to a .pcd file.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./ply_to_pcd <ply_name>.ply
```

### pipeline_to_pcd
This test grabs a depth frame and converts it into a .pcd file and saves it.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./pipeline <save_pcd_name>.pcd
```

### ros_pipeline
This test grabs a pointcloud and RGB frame and shows them.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./getImages
```
