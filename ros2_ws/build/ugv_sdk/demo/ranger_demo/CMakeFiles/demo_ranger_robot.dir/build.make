# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /ROS/ros2_ws/src/ugv_sdk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /ROS/ros2_ws/build/ugv_sdk

# Include any dependencies generated for this target.
include demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/depend.make

# Include the progress variables for this target.
include demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/progress.make

# Include the compile flags for this target's objects.
include demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/flags.make

demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o: demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/flags.make
demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o: /ROS/ros2_ws/src/ugv_sdk/demo/ranger_demo/ranger_robot_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/ROS/ros2_ws/build/ugv_sdk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o"
	cd /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o -c /ROS/ros2_ws/src/ugv_sdk/demo/ranger_demo/ranger_robot_demo.cpp

demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.i"
	cd /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /ROS/ros2_ws/src/ugv_sdk/demo/ranger_demo/ranger_robot_demo.cpp > CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.i

demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.s"
	cd /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /ROS/ros2_ws/src/ugv_sdk/demo/ranger_demo/ranger_robot_demo.cpp -o CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.s

# Object files for target demo_ranger_robot
demo_ranger_robot_OBJECTS = \
"CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o"

# External object files for target demo_ranger_robot
demo_ranger_robot_EXTERNAL_OBJECTS =

bin/demo_ranger_robot: demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/ranger_robot_demo.cpp.o
bin/demo_ranger_robot: demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/build.make
bin/demo_ranger_robot: lib/libugv_sdk.a
bin/demo_ranger_robot: demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/ROS/ros2_ws/build/ugv_sdk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/demo_ranger_robot"
	cd /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo_ranger_robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/build: bin/demo_ranger_robot

.PHONY : demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/build

demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/clean:
	cd /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo && $(CMAKE_COMMAND) -P CMakeFiles/demo_ranger_robot.dir/cmake_clean.cmake
.PHONY : demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/clean

demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/depend:
	cd /ROS/ros2_ws/build/ugv_sdk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /ROS/ros2_ws/src/ugv_sdk /ROS/ros2_ws/src/ugv_sdk/demo/ranger_demo /ROS/ros2_ws/build/ugv_sdk /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo /ROS/ros2_ws/build/ugv_sdk/demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : demo/ranger_demo/CMakeFiles/demo_ranger_robot.dir/depend

