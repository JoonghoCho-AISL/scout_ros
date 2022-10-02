# CMake generated Testfile for 
# Source directory: /ROS/velodyne_ws/src/velodyne/velodyne_pointcloud/tests
# Build directory: /ROS/velodyne_ws/build/velodyne_pointcloud/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_row_step "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_pointcloud/test_results/velodyne_pointcloud/test_row_step.gtest.xml" "--package-name" "velodyne_pointcloud" "--output-file" "/ROS/velodyne_ws/build/velodyne_pointcloud/ament_cmake_gtest/test_row_step.txt" "--command" "/ROS/velodyne_ws/build/velodyne_pointcloud/tests/test_row_step" "--gtest_output=xml:/ROS/velodyne_ws/build/velodyne_pointcloud/test_results/velodyne_pointcloud/test_row_step.gtest.xml")
set_tests_properties(test_row_step PROPERTIES  LABELS "gtest" REQUIRED_FILES "/ROS/velodyne_ws/build/velodyne_pointcloud/tests/test_row_step" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_pointcloud")
subdirs("../gtest")
