# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jeroen/workspace/suii_vision_3d/src/main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeroen/workspace/suii_vision_3d/src/main/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/main.cpp.o.requires

CMakeFiles/main.dir/main.cpp.o.provides: CMakeFiles/main.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/main.cpp.o.provides

CMakeFiles/main.dir/main.cpp.o.provides.build: CMakeFiles/main.dir/main.cpp.o


CMakeFiles/main.dir/gettf.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/gettf.cpp.o: ../gettf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/gettf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/gettf.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/gettf.cpp

CMakeFiles/main.dir/gettf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/gettf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/gettf.cpp > CMakeFiles/main.dir/gettf.cpp.i

CMakeFiles/main.dir/gettf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/gettf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/gettf.cpp -o CMakeFiles/main.dir/gettf.cpp.s

CMakeFiles/main.dir/gettf.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/gettf.cpp.o.requires

CMakeFiles/main.dir/gettf.cpp.o.provides: CMakeFiles/main.dir/gettf.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/gettf.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/gettf.cpp.o.provides

CMakeFiles/main.dir/gettf.cpp.o.provides.build: CMakeFiles/main.dir/gettf.cpp.o


CMakeFiles/main.dir/pipeline.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/pipeline.cpp.o: ../pipeline.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/pipeline.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/pipeline.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/pipeline.cpp

CMakeFiles/main.dir/pipeline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/pipeline.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/pipeline.cpp > CMakeFiles/main.dir/pipeline.cpp.i

CMakeFiles/main.dir/pipeline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/pipeline.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/pipeline.cpp -o CMakeFiles/main.dir/pipeline.cpp.s

CMakeFiles/main.dir/pipeline.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/pipeline.cpp.o.requires

CMakeFiles/main.dir/pipeline.cpp.o.provides: CMakeFiles/main.dir/pipeline.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/pipeline.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/pipeline.cpp.o.provides

CMakeFiles/main.dir/pipeline.cpp.o.provides.build: CMakeFiles/main.dir/pipeline.cpp.o


CMakeFiles/main.dir/filter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/filter.cpp.o: ../filter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/filter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/filter.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/filter.cpp

CMakeFiles/main.dir/filter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/filter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/filter.cpp > CMakeFiles/main.dir/filter.cpp.i

CMakeFiles/main.dir/filter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/filter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/filter.cpp -o CMakeFiles/main.dir/filter.cpp.s

CMakeFiles/main.dir/filter.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/filter.cpp.o.requires

CMakeFiles/main.dir/filter.cpp.o.provides: CMakeFiles/main.dir/filter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/filter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/filter.cpp.o.provides

CMakeFiles/main.dir/filter.cpp.o.provides.build: CMakeFiles/main.dir/filter.cpp.o


CMakeFiles/main.dir/segmentation.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/segmentation.cpp.o: ../segmentation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/segmentation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/segmentation.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/segmentation.cpp

CMakeFiles/main.dir/segmentation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/segmentation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/segmentation.cpp > CMakeFiles/main.dir/segmentation.cpp.i

CMakeFiles/main.dir/segmentation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/segmentation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/segmentation.cpp -o CMakeFiles/main.dir/segmentation.cpp.s

CMakeFiles/main.dir/segmentation.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/segmentation.cpp.o.requires

CMakeFiles/main.dir/segmentation.cpp.o.provides: CMakeFiles/main.dir/segmentation.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/segmentation.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/segmentation.cpp.o.provides

CMakeFiles/main.dir/segmentation.cpp.o.provides.build: CMakeFiles/main.dir/segmentation.cpp.o


CMakeFiles/main.dir/tf.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/tf.cpp.o: ../tf.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/tf.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/tf.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/tf.cpp

CMakeFiles/main.dir/tf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/tf.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/tf.cpp > CMakeFiles/main.dir/tf.cpp.i

CMakeFiles/main.dir/tf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/tf.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/tf.cpp -o CMakeFiles/main.dir/tf.cpp.s

CMakeFiles/main.dir/tf.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/tf.cpp.o.requires

CMakeFiles/main.dir/tf.cpp.o.provides: CMakeFiles/main.dir/tf.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/tf.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/tf.cpp.o.provides

CMakeFiles/main.dir/tf.cpp.o.provides.build: CMakeFiles/main.dir/tf.cpp.o


CMakeFiles/main.dir/vis.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/vis.cpp.o: ../vis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/vis.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/vis.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/vis.cpp

CMakeFiles/main.dir/vis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/vis.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/vis.cpp > CMakeFiles/main.dir/vis.cpp.i

CMakeFiles/main.dir/vis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/vis.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/vis.cpp -o CMakeFiles/main.dir/vis.cpp.s

CMakeFiles/main.dir/vis.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/vis.cpp.o.requires

CMakeFiles/main.dir/vis.cpp.o.provides: CMakeFiles/main.dir/vis.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/vis.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/vis.cpp.o.provides

CMakeFiles/main.dir/vis.cpp.o.provides.build: CMakeFiles/main.dir/vis.cpp.o


CMakeFiles/main.dir/getImages.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/getImages.cpp.o: ../getImages.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/getImages.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/getImages.cpp.o -c /home/jeroen/workspace/suii_vision_3d/src/main/getImages.cpp

CMakeFiles/main.dir/getImages.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/getImages.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeroen/workspace/suii_vision_3d/src/main/getImages.cpp > CMakeFiles/main.dir/getImages.cpp.i

CMakeFiles/main.dir/getImages.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/getImages.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeroen/workspace/suii_vision_3d/src/main/getImages.cpp -o CMakeFiles/main.dir/getImages.cpp.s

CMakeFiles/main.dir/getImages.cpp.o.requires:

.PHONY : CMakeFiles/main.dir/getImages.cpp.o.requires

CMakeFiles/main.dir/getImages.cpp.o.provides: CMakeFiles/main.dir/getImages.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/getImages.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/getImages.cpp.o.provides

CMakeFiles/main.dir/getImages.cpp.o.provides.build: CMakeFiles/main.dir/getImages.cpp.o


# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/gettf.cpp.o" \
"CMakeFiles/main.dir/pipeline.cpp.o" \
"CMakeFiles/main.dir/filter.cpp.o" \
"CMakeFiles/main.dir/segmentation.cpp.o" \
"CMakeFiles/main.dir/tf.cpp.o" \
"CMakeFiles/main.dir/vis.cpp.o" \
"CMakeFiles/main.dir/getImages.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/gettf.cpp.o
main: CMakeFiles/main.dir/pipeline.cpp.o
main: CMakeFiles/main.dir/filter.cpp.o
main: CMakeFiles/main.dir/segmentation.cpp.o
main: CMakeFiles/main.dir/tf.cpp.o
main: CMakeFiles/main.dir/vis.cpp.o
main: CMakeFiles/main.dir/getImages.cpp.o
main: CMakeFiles/main.dir/build.make
main: /usr/lib/x86_64-linux-gnu/libboost_system.so
main: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
main: /usr/lib/x86_64-linux-gnu/libboost_thread.so
main: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
main: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
main: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
main: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
main: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
main: /usr/lib/x86_64-linux-gnu/libboost_regex.so
main: /usr/lib/x86_64-linux-gnu/libpthread.so
main: /usr/lib/x86_64-linux-gnu/libpcl_common.so
main: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
main: /usr/lib/libOpenNI.so
main: /usr/lib/libOpenNI2.so
main: /usr/lib/x86_64-linux-gnu/libfreetype.so
main: /usr/lib/x86_64-linux-gnu/libz.so
main: /usr/lib/x86_64-linux-gnu/libexpat.so
main: /usr/lib/x86_64-linux-gnu/libpython2.7.so
main: /usr/lib/libvtkWrappingTools-6.3.a
main: /usr/lib/x86_64-linux-gnu/libjpeg.so
main: /usr/lib/x86_64-linux-gnu/libpng.so
main: /usr/lib/x86_64-linux-gnu/libtiff.so
main: /usr/lib/x86_64-linux-gnu/libproj.so
main: /usr/lib/x86_64-linux-gnu/hdf5/openmpi/libhdf5.so
main: /usr/lib/x86_64-linux-gnu/libsz.so
main: /usr/lib/x86_64-linux-gnu/libdl.so
main: /usr/lib/x86_64-linux-gnu/libm.so
main: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
main: /usr/lib/x86_64-linux-gnu/libnetcdf_c++.so
main: /usr/lib/x86_64-linux-gnu/libnetcdf.so
main: /usr/lib/x86_64-linux-gnu/libgl2ps.so
main: /usr/lib/x86_64-linux-gnu/libtheoraenc.so
main: /usr/lib/x86_64-linux-gnu/libtheoradec.so
main: /usr/lib/x86_64-linux-gnu/libogg.so
main: /usr/lib/x86_64-linux-gnu/libxml2.so
main: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
main: /usr/lib/x86_64-linux-gnu/libpcl_io.so
main: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
main: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
main: /usr/lib/x86_64-linux-gnu/libpcl_search.so
main: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
main: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
main: /usr/lib/x86_64-linux-gnu/libpcl_features.so
main: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
main: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
main: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
main: /usr/lib/x86_64-linux-gnu/libqhull.so
main: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
main: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
main: /usr/lib/x86_64-linux-gnu/libpcl_keypoints.so
main: /usr/lib/x86_64-linux-gnu/libpcl_tracking.so
main: /usr/lib/x86_64-linux-gnu/libpcl_recognition.so
main: /usr/lib/x86_64-linux-gnu/libpcl_stereo.so
main: /usr/lib/x86_64-linux-gnu/libpcl_apps.so
main: /usr/lib/x86_64-linux-gnu/libpcl_outofcore.so
main: /usr/lib/x86_64-linux-gnu/libpcl_people.so
main: /usr/lib/x86_64-linux-gnu/libboost_system.so
main: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
main: /usr/lib/x86_64-linux-gnu/libboost_thread.so
main: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
main: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
main: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
main: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
main: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
main: /usr/lib/x86_64-linux-gnu/libboost_regex.so
main: /usr/lib/x86_64-linux-gnu/libpthread.so
main: /usr/lib/x86_64-linux-gnu/libqhull.so
main: /usr/lib/libOpenNI.so
main: /usr/lib/libOpenNI2.so
main: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
main: /usr/lib/x86_64-linux-gnu/libfreetype.so
main: /usr/lib/x86_64-linux-gnu/libz.so
main: /usr/lib/x86_64-linux-gnu/libvtkDomainsChemistry-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libexpat.so
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneric-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersHyperTree-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallelFlowPaths-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallelGeometry-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallelImaging-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallelMPI-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallelStatistics-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersProgrammable-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersPython-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libpython2.7.so
main: /usr/lib/libvtkWrappingTools-6.3.a
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersReebGraph-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersSMP-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersSelection-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersVerdict-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkverdict-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libjpeg.so
main: /usr/lib/x86_64-linux-gnu/libpng.so
main: /usr/lib/x86_64-linux-gnu/libtiff.so
main: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQtOpenGL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQtSQL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQtWebkit-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkViewsQt-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libproj.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOAMR-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/hdf5/openmpi/libhdf5.so
main: /usr/lib/x86_64-linux-gnu/libsz.so
main: /usr/lib/x86_64-linux-gnu/libdl.so
main: /usr/lib/x86_64-linux-gnu/libm.so
main: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOEnSight-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libnetcdf_c++.so
main: /usr/lib/x86_64-linux-gnu/libnetcdf.so
main: /usr/lib/x86_64-linux-gnu/libgl2ps.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOFFMPEG-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOMovie-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libtheoraenc.so
main: /usr/lib/x86_64-linux-gnu/libtheoradec.so
main: /usr/lib/x86_64-linux-gnu/libogg.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOGDAL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOGeoJSON-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOImport-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOInfovis-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libxml2.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOMINC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOMPIImage-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOMPIParallel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOParallel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIONetCDF-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOMySQL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOODBC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOParallelExodus-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOParallelLSDyna-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOParallelNetCDF-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOParallelXML-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOPostgreSQL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOVPIC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkVPIC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOVideo-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOXdmf2-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkxdmf2-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingMath-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingMorphological-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingStatistics-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingStencil-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInteractionImage-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkLocalExample-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkParallelMPI4Py-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingExternal-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeTypeFontConfig-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingImage-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingMatplotlib-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingParallel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingParallelLIC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingQt-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolumeAMR-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolumeOpenGL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkTestingGenericBridge-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkTestingIOSQL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkTestingRendering-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkViewsGeovis-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkWrappingJava-6.3.so.6.3.0
main: /usr/local/lib/librealsense2.so.2.29.0
main: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libpcl_common.so
main: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
main: /usr/lib/x86_64-linux-gnu/libpcl_io.so
main: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
main: /usr/lib/x86_64-linux-gnu/libpcl_search.so
main: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
main: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
main: /usr/lib/x86_64-linux-gnu/libpcl_features.so
main: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
main: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
main: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
main: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
main: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
main: /usr/lib/x86_64-linux-gnu/libpcl_keypoints.so
main: /usr/lib/x86_64-linux-gnu/libpcl_tracking.so
main: /usr/lib/x86_64-linux-gnu/libpcl_recognition.so
main: /usr/lib/x86_64-linux-gnu/libpcl_stereo.so
main: /usr/lib/x86_64-linux-gnu/libpcl_apps.so
main: /usr/lib/x86_64-linux-gnu/libpcl_outofcore.so
main: /usr/lib/x86_64-linux-gnu/libpcl_people.so
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersFlowPaths-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libtheoraenc.so
main: /usr/lib/x86_64-linux-gnu/libtheoradec.so
main: /usr/lib/x86_64-linux-gnu/libogg.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOExodus-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkexoIIc-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libnetcdf_c++.so
main: /usr/lib/x86_64-linux-gnu/libnetcdf.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOLSDyna-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libxml2.so
main: /usr/lib/x86_64-linux-gnu/hdf5/openmpi/libhdf5.so
main: /usr/lib/x86_64-linux-gnu/libsz.so
main: /usr/lib/x86_64-linux-gnu/libdl.so
main: /usr/lib/x86_64-linux-gnu/libm.so
main: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
main: /usr/lib/x86_64-linux-gnu/libvtkWrappingPython27Core-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkPythonInterpreter-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libpython2.7.so
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersParallel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkParallelMPI-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingLIC-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
main: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
main: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersAMR-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkParallelCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOSQL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkViewsInfovis-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkChartsCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersImaging-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkGeovisCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOXML-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOXMLParser-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInfovisLayout-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInfovisBoostGraphAlgorithms-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInfovisCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkViewsCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersHybrid-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingGeneral-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingSources-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolume-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libproj.so
main: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersTexture-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOExport-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingLabel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingColor-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingGL2PS-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingContextOpenGL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkftgl-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libfreetype.so
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingHybrid-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOImage-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkDICOMParser-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkmetaio-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libz.so
main: /usr/lib/x86_64-linux-gnu/libGLU.so
main: /usr/lib/x86_64-linux-gnu/libGL.so
main: /usr/lib/x86_64-linux-gnu/libSM.so
main: /usr/lib/x86_64-linux-gnu/libICE.so
main: /usr/lib/x86_64-linux-gnu/libX11.so
main: /usr/lib/x86_64-linux-gnu/libXext.so
main: /usr/lib/x86_64-linux-gnu/libXt.so
main: /usr/lib/x86_64-linux-gnu/libvtkIOPLY-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkIOCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonColor-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersStatistics-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingFourier-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkalglib-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonSystem-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libvtksys-6.3.so.6.3.0
main: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
main: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/main.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/gettf.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/pipeline.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/filter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/segmentation.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/tf.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/vis.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/getImages.cpp.o.requires

.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/jeroen/workspace/suii_vision_3d/src/main/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeroen/workspace/suii_vision_3d/src/main /home/jeroen/workspace/suii_vision_3d/src/main /home/jeroen/workspace/suii_vision_3d/src/main/build /home/jeroen/workspace/suii_vision_3d/src/main/build /home/jeroen/workspace/suii_vision_3d/src/main/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

