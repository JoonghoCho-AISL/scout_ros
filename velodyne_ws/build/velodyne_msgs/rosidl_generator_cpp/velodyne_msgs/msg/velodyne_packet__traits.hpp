// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from velodyne_msgs:msg/VelodynePacket.idl
// generated code does not contain a copyright notice

#ifndef VELODYNE_MSGS__MSG__VELODYNE_PACKET__TRAITS_HPP_
#define VELODYNE_MSGS__MSG__VELODYNE_PACKET__TRAITS_HPP_

#include "velodyne_msgs/msg/velodyne_packet__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<velodyne_msgs::msg::VelodynePacket>()
{
  return "velodyne_msgs::msg::VelodynePacket";
}

template<>
struct has_fixed_size<velodyne_msgs::msg::VelodynePacket>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<velodyne_msgs::msg::VelodynePacket>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

#endif  // VELODYNE_MSGS__MSG__VELODYNE_PACKET__TRAITS_HPP_
