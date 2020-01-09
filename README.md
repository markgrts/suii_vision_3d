# suii_vision_3d

This repository contains the 3D vision research and tests for object detection for RoboCup@work competition that RoboHub Eindhoven participates in. A more up to date version can be found at [suii_3d_vision_ros](https://github.com/JeroenBongers96/suii_3d_vision_ros).

## Getting Started

For this project Ubuntu 18.04 LTS is used. 

### Prerequisites

The package runs on C++. It makes use of the following libraries:

C++:
* [Intel RealSense SDK2.0](https://github.com/IntelRealSense/librealsense)
* [PCL](http://pointclouds.org/)
* [OpenCV](https://opencv.org/)

### Installing

To install the suii_vision_3d package in your workspace, you will need to run the following lines:

```
git clone https://github.com/markgrts/suii_vision_3d.git
cmake ..
make
``` 
NOTE: these files are stand alone C++ codes and are not ROS related.

## Running the tests

After installation is done we can start running the tests. All tests can be found in the [src_test_folders](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders) map.
More info about running those tests can be found in the README of every test.

List of tests:
[filters](https://github.com/markgrts/suii_vision_3d/master/src_test_folders/filters)  
[object_detection](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/object_detection)  
[pipeline](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/pipeline)  
[segmentation](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/segmentation)  
[tf](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/tf)  
[visualization](https://github.com/markgrts/suii_vision_3d/tree/master/src_test_folders/visualization)  

## Authors

* **Jeroen Bongers** - *Initial work* - [JeroenBongers96](https://github.com/JeroenBongers96)
* **Mark Geraets** - *Initial work* - [markgrts](https://github.com/markgrts)

In name of [RoboHub Eindhoven](https://robohub-eindhoven.nl/)

## License

This project is licensed under the BSD 3-Clause License - see the [LICENSE.md](LICENSE.md) file for details
