// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from velodyne_msgs:msg/VelodyneScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "velodyne_msgs/msg/velodyne_scan__rosidl_typesupport_introspection_c.h"
#include "velodyne_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "velodyne_msgs/msg/velodyne_scan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `packets`
#include "velodyne_msgs/msg/velodyne_packet.h"
// Member `packets`
#include "velodyne_msgs/msg/velodyne_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t VelodyneScan__rosidl_typesupport_introspection_c__size_function__VelodynePacket__packets(
  const void * untyped_member)
{
  const velodyne_msgs__msg__VelodynePacket__Sequence * member =
    (const velodyne_msgs__msg__VelodynePacket__Sequence *)(untyped_member);
  return member->size;
}

const void * VelodyneScan__rosidl_typesupport_introspection_c__get_const_function__VelodynePacket__packets(
  const void * untyped_member, size_t index)
{
  const velodyne_msgs__msg__VelodynePacket__Sequence * member =
    (const velodyne_msgs__msg__VelodynePacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VelodyneScan__rosidl_typesupport_introspection_c__get_function__VelodynePacket__packets(
  void * untyped_member, size_t index)
{
  velodyne_msgs__msg__VelodynePacket__Sequence * member =
    (velodyne_msgs__msg__VelodynePacket__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VelodyneScan__rosidl_typesupport_introspection_c__resize_function__VelodynePacket__packets(
  void * untyped_member, size_t size)
{
  velodyne_msgs__msg__VelodynePacket__Sequence * member =
    (velodyne_msgs__msg__VelodynePacket__Sequence *)(untyped_member);
  velodyne_msgs__msg__VelodynePacket__Sequence__fini(member);
  return velodyne_msgs__msg__VelodynePacket__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velodyne_msgs__msg__VelodyneScan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(velodyne_msgs__msg__VelodyneScan, packets),  // bytes offset in struct
    NULL,  // default value
    VelodyneScan__rosidl_typesupport_introspection_c__size_function__VelodynePacket__packets,  // size() function pointer
    VelodyneScan__rosidl_typesupport_introspection_c__get_const_function__VelodynePacket__packets,  // get_const(index) function pointer
    VelodyneScan__rosidl_typesupport_introspection_c__get_function__VelodynePacket__packets,  // get(index) function pointer
    VelodyneScan__rosidl_typesupport_introspection_c__resize_function__VelodynePacket__packets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_members = {
  "velodyne_msgs__msg",  // message namespace
  "VelodyneScan",  // message name
  2,  // number of fields
  sizeof(velodyne_msgs__msg__VelodyneScan),
  VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_type_support_handle = {
  0,
  &VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_velodyne_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velodyne_msgs, msg, VelodyneScan)() {
  VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, velodyne_msgs, msg, VelodynePacket)();
  if (!VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_type_support_handle.typesupport_identifier) {
    VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VelodyneScan__rosidl_typesupport_introspection_c__VelodyneScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
