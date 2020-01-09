# Filter tests

This map contains all filter tests. For filtering the 3D point cloud made with the Creative BlasterX Senz3D.

## Getting Started

Getting started, prerequisites and how to install can be found in the [README](https://github.com/markgrts/suii_vision_3d/blob/master/README.md).

## Running the tests
Some test uses a .pcd file to run. Some PCD examples can be found in the [Pictures](https://github.com/markgrts/suii_vision_3d/tree/master/pictures) folder.

### filters_downsampling
This test reduces the amount of point with a voxel grid filter from a given PCD.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* Add a PCD file to the build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./down_sampling <pcd_name>.pcd
```
Tutorial followed: [PCL passthrough](http://pointclouds.org/documentation/tutorials/voxel_grid.php#voxelgrid)

### filters_outlierremoval
This test removes outliers from a given PCD file.

Steps to run the test:
* Remove the build folder with all its content.
* Create new build folder
* Add a PCD file to the build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./outlier_removal <pcd_name>.pcd
```
Tutorial followed: [PCL passthrough](http://pointclouds.org/documentation/tutorials/statistical_outlier.php#statistical-outlier-removal)

### filters_passthrough
This test removes the borders of a given PCD file.

Steps to run the test:

* Remove the build folder with all its content.
* Create new build folder
* Add a PCD file to the build folder
* cd into build directory
* Run the next lines:
```
cmake ..
make
./pt_filter <pcd_name>.pcd
```
Tutorial followed: [PCL passthrough](http://pointclouds.org/documentation/tutorials/passthrough.php#passthrough)
NOTE: tutorial uses Passthrough filter, our test uses BoxFilter

## Authors

* **Jeroen Bongers** - *Initial work* - [JeroenBongers96](https://github.com/JeroenBongers96)
* **Mark Geraets** - *Initial work* - [markgrts](https://github.com/markgrts)

In name of [RoboHub Eindhoven](https://robohub-eindhoven.nl/)

## License

This project is licensed under the BSD 3-Clause License - see the [LICENSE.md](LICENSE.md) file for details