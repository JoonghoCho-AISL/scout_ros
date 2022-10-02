# CMake generated Testfile for 
# Source directory: /ROS/velodyne_ws/src/diagnostics/self_test/test
# Build directory: /ROS/velodyne_ws/build/self_test/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_nominal_selftest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/test_nominal_selftest.gtest.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cmake_gtest/test_nominal_selftest.txt" "--command" "/ROS/velodyne_ws/build/self_test/test/test_nominal_selftest" "--gtest_output=xml:/ROS/velodyne_ws/build/self_test/test_results/self_test/test_nominal_selftest.gtest.xml")
set_tests_properties(test_nominal_selftest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/ROS/velodyne_ws/build/self_test/test/test_nominal_selftest" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(test_no_id_selftest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/test_no_id_selftest.gtest.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cmake_gtest/test_no_id_selftest.txt" "--command" "/ROS/velodyne_ws/build/self_test/test/test_no_id_selftest" "--gtest_output=xml:/ROS/velodyne_ws/build/self_test/test_results/self_test/test_no_id_selftest.gtest.xml")
set_tests_properties(test_no_id_selftest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/ROS/velodyne_ws/build/self_test/test/test_no_id_selftest" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(test_exception_selftest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/test_exception_selftest.gtest.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cmake_gtest/test_exception_selftest.txt" "--command" "/ROS/velodyne_ws/build/self_test/test/test_exception_selftest" "--gtest_output=xml:/ROS/velodyne_ws/build/self_test/test_results/self_test/test_exception_selftest.gtest.xml")
set_tests_properties(test_exception_selftest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/ROS/velodyne_ws/build/self_test/test/test_exception_selftest" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(test_error_selftest "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/test_error_selftest.gtest.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cmake_gtest/test_error_selftest.txt" "--command" "/ROS/velodyne_ws/build/self_test/test/test_error_selftest" "--gtest_output=xml:/ROS/velodyne_ws/build/self_test/test_results/self_test/test_error_selftest.gtest.xml")
set_tests_properties(test_error_selftest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/ROS/velodyne_ws/build/self_test/test/test_error_selftest" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
subdirs("../gtest")
