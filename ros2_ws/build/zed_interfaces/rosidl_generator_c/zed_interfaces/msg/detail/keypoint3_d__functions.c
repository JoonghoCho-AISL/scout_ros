// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:msg/Keypoint3D.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/msg/detail/keypoint3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
zed_interfaces__msg__Keypoint3D__init(zed_interfaces__msg__Keypoint3D * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  return true;
}

void
zed_interfaces__msg__Keypoint3D__fini(zed_interfaces__msg__Keypoint3D * msg)
{
  if (!msg) {
    return;
  }
  // kp
}

zed_interfaces__msg__Keypoint3D *
zed_interfaces__msg__Keypoint3D__create()
{
  zed_interfaces__msg__Keypoint3D * msg = (zed_interfaces__msg__Keypoint3D *)malloc(sizeof(zed_interfaces__msg__Keypoint3D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__msg__Keypoint3D));
  bool success = zed_interfaces__msg__Keypoint3D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__msg__Keypoint3D__destroy(zed_interfaces__msg__Keypoint3D * msg)
{
  if (msg) {
    zed_interfaces__msg__Keypoint3D__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__msg__Keypoint3D__Sequence__init(zed_interfaces__msg__Keypoint3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__msg__Keypoint3D * data = NULL;
  if (size) {
    data = (zed_interfaces__msg__Keypoint3D *)calloc(size, sizeof(zed_interfaces__msg__Keypoint3D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__msg__Keypoint3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__msg__Keypoint3D__fini(&data[i - 1]);
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
zed_interfaces__msg__Keypoint3D__Sequence__fini(zed_interfaces__msg__Keypoint3D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__msg__Keypoint3D__fini(&array->data[i]);
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

zed_interfaces__msg__Keypoint3D__Sequence *
zed_interfaces__msg__Keypoint3D__Sequence__create(size_t size)
{
  zed_interfaces__msg__Keypoint3D__Sequence * array = (zed_interfaces__msg__Keypoint3D__Sequence *)malloc(sizeof(zed_interfaces__msg__Keypoint3D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__msg__Keypoint3D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__msg__Keypoint3D__Sequence__destroy(zed_interfaces__msg__Keypoint3D__Sequence * array)
{
  if (array) {
    zed_interfaces__msg__Keypoint3D__Sequence__fini(array);
  }
  free(array);
}
