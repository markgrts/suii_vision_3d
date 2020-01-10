# Transformation tests

This map contains all transformation tests.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests
Below, the used transformation tutorials of PCL are explained how to use them. Some test uses a .pcd file to run. More PCD examples can be found in the [Pictures](https://github.com/markgrts/suii_vision_3d/tree/master/pictures) folder.

### tf_from_inertia
This code calculates and visualizes the tranfsormation of a given PCD.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* Copy the lamppost.pcd file from the pictures folder to the build folder.
* cd into build directory
* Run the next lines:
```
cmake ..
make
./moment_of_inertia lamppost.pcd
```
Tutorial followed: [Moment of inertia and eccentricity based descriptors](http://pointclouds.org/documentation/tutorials/moment_of_inertia.php#moment-of-inertia)


