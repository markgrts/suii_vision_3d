# Object_detection test

This map contains all object_detection tests. For using a given ROI to cut out a region out a pointcloud.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests

### object_detection
This test cuts out a given ROI out of a pointcloud that it gets from the Creative BlasterX Senz3D.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./color_pc
```
