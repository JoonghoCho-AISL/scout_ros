#!/bin/bash

#DOCKERPID=$(docker inspect -f '{{ .State.Pid }}＇ net_ros1_scout)
#sudo ip link set can0 netns $DOCKERPID

# lidar setting

DOCKERPID=$(docker inspect -f '{{ .State.Pid }}' net_ros2_lidar)
sudo ip link set enp47s0 netns $DOCKERPID

# can0

DOCKERPID=$(docker inspect -f '{{ .State.Pid }}' net_ros1_scout)
sudo ip link set can0 netns $DOCKERPID

