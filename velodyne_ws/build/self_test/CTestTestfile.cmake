# CMake generated Testfile for 
# Source directory: /ROS/velodyne_ws/src/diagnostics/self_test
# Build directory: /ROS/velodyne_ws/build/self_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/cppcheck.xunit.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/ROS/velodyne_ws/build/self_test/test_results/self_test/cppcheck.xunit.xml" "--include_dirs" "/ROS/velodyne_ws/src/diagnostics/self_test/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/cpplint.xunit.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/ROS/velodyne_ws/build/self_test/test_results/self_test/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/lint_cmake.xunit.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/ROS/velodyne_ws/build/self_test/test_results/self_test/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/uncrustify.xunit.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/ROS/velodyne_ws/build/self_test/test_results/self_test/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/ROS/velodyne_ws/build/self_test/test_results/self_test/xmllint.xunit.xml" "--package-name" "self_test" "--output-file" "/ROS/velodyne_ws/build/self_test/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/ROS/velodyne_ws/build/self_test/test_results/self_test/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/ROS/velodyne_ws/src/diagnostics/self_test")
subdirs("test")
