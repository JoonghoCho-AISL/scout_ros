// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:msg/Object.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
// Member `sublabel`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box_2d`
#include "zed_interfaces/msg/detail/bounding_box2_di__functions.h"
// Member `bounding_box_3d`
// Member `head_bounding_box_3d`
#include "zed_interfaces/msg/detail/bounding_box3_d__functions.h"
// Member `head_bounding_box_2d`
#include "zed_interfaces/msg/detail/bounding_box2_df__functions.h"
// Member `skeleton_2d`
#include "zed_interfaces/msg/detail/skeleton2_d__functions.h"
// Member `skeleton_3d`
#include "zed_interfaces/msg/detail/skeleton3_d__functions.h"

bool
zed_interfaces__msg__Object__init(zed_interfaces__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // label_id
  // sublabel
  if (!rosidl_runtime_c__String__init(&msg->sublabel)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // confidence
  // position
  // position_covariance
  // velocity
  // tracking_available
  // tracking_state
  // action_state
  // bounding_box_2d
  if (!zed_interfaces__msg__BoundingBox2Di__init(&msg->bounding_box_2d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // bounding_box_3d
  if (!zed_interfaces__msg__BoundingBox3D__init(&msg->bounding_box_3d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // dimensions_3d
  // skeleton_available
  // body_format
  // head_bounding_box_2d
  if (!zed_interfaces__msg__BoundingBox2Df__init(&msg->head_bounding_box_2d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // head_bounding_box_3d
  if (!zed_interfaces__msg__BoundingBox3D__init(&msg->head_bounding_box_3d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // head_position
  // skeleton_2d
  if (!zed_interfaces__msg__Skeleton2D__init(&msg->skeleton_2d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  // skeleton_3d
  if (!zed_interfaces__msg__Skeleton3D__init(&msg->skeleton_3d)) {
    zed_interfaces__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
zed_interfaces__msg__Object__fini(zed_interfaces__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // label_id
  // sublabel
  rosidl_runtime_c__String__fini(&msg->sublabel);
  // confidence
  // position
  // position_covariance
  // velocity
  // tracking_available
  // tracking_state
  // action_state
  // bounding_box_2d
  zed_interfaces__msg__BoundingBox2Di__fini(&msg->bounding_box_2d);
  // bounding_box_3d
  zed_interfaces__msg__BoundingBox3D__fini(&msg->bounding_box_3d);
  // dimensions_3d
  // skeleton_available
  // body_format
  // head_bounding_box_2d
  zed_interfaces__msg__BoundingBox2Df__fini(&msg->head_bounding_box_2d);
  // head_bounding_box_3d
  zed_interfaces__msg__BoundingBox3D__fini(&msg->head_bounding_box_3d);
  // head_position
  // skeleton_2d
  zed_interfaces__msg__Skeleton2D__fini(&msg->skeleton_2d);
  // skeleton_3d
  zed_interfaces__msg__Skeleton3D__fini(&msg->skeleton_3d);
}

zed_interfaces__msg__Object *
zed_interfaces__msg__Object__create()
{
  zed_interfaces__msg__Object * msg = (zed_interfaces__msg__Object *)malloc(sizeof(zed_interfaces__msg__Object));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__msg__Object));
  bool success = zed_interfaces__msg__Object__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__msg__Object__destroy(zed_interfaces__msg__Object * msg)
{
  if (msg) {
    zed_interfaces__msg__Object__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__msg__Object__Sequence__init(zed_interfaces__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__msg__Object * data = NULL;
  if (size) {
    data = (zed_interfaces__msg__Object *)calloc(size, sizeof(zed_interfaces__msg__Object));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__msg__Object__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
zed_interfaces__msg__Object__Sequence__fini(zed_interfaces__msg__Object__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__msg__Object__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

zed_interfaces__msg__Object__Sequence *
zed_interfaces__msg__Object__Sequence__create(size_t size)
{
  zed_interfaces__msg__Object__Sequence * array = (zed_interfaces__msg__Object__Sequence *)malloc(sizeof(zed_interfaces__msg__Object__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__msg__Object__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__msg__Object__Sequence__destroy(zed_interfaces__msg__Object__Sequence * array)
{
  if (array) {
    zed_interfaces__msg__Object__Sequence__fini(array);
  }
  free(array);
}
