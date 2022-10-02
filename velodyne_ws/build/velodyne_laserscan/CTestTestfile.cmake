# CMake generated Testfile for 
# Source directory: /ROS/velodyne_ws/src/velodyne/velodyne_laserscan
# Build directory: /ROS/velodyne_ws/build/velodyne_laserscan
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/copyright.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/cppcheck.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/cppcheck.xunit.xml" "--include_dirs" "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/cpplint.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/flake8.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_flake8/flake8.txt" "--command" "/opt/ros/dashing/bin/ament_flake8" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/lint_cmake.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/pep257.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_pep257/pep257.txt" "--command" "/opt/ros/dashing/bin/ament_pep257" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/uncrustify.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/xmllint.xunit.xml" "--package-name" "velodyne_laserscan" "--output-file" "/ROS/velodyne_ws/build/velodyne_laserscan/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/ROS/velodyne_ws/build/velodyne_laserscan/test_results/velodyne_laserscan/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/velodyne/velodyne_laserscan")
