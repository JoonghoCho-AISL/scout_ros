#!/bin/bash

ip addr add 192.168.1.100/24 dev enp47s0
ip link set dev enp47s0 up