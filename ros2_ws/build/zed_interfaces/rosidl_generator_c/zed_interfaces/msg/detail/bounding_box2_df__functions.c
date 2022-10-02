// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:msg/BoundingBox2Df.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/msg/detail/bounding_box2_df__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `corners`
#include "zed_interfaces/msg/detail/keypoint2_df__functions.h"

bool
zed_interfaces__msg__BoundingBox2Df__init(zed_interfaces__msg__BoundingBox2Df * msg)
{
  if (!msg) {
    return false;
  }
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!zed_interfaces__msg__Keypoint2Df__init(&msg->corners[i])) {
      zed_interfaces__msg__BoundingBox2Df__fini(msg);
      return false;
    }
  }
  return true;
}

void
zed_interfaces__msg__BoundingBox2Df__fini(zed_interfaces__msg__BoundingBox2Df * msg)
{
  if (!msg) {
    return;
  }
  // corners
  for (size_t i = 0; i < 4; ++i) {
    zed_interfaces__msg__Keypoint2Df__fini(&msg->corners[i]);
  }
}

zed_interfaces__msg__BoundingBox2Df *
zed_interfaces__msg__BoundingBox2Df__create()
{
  zed_interfaces__msg__BoundingBox2Df * msg = (zed_interfaces__msg__BoundingBox2Df *)malloc(sizeof(zed_interfaces__msg__BoundingBox2Df));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__msg__BoundingBox2Df));
  bool success = zed_interfaces__msg__BoundingBox2Df__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__msg__BoundingBox2Df__destroy(zed_interfaces__msg__BoundingBox2Df * msg)
{
  if (msg) {
    zed_interfaces__msg__BoundingBox2Df__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__msg__BoundingBox2Df__Sequence__init(zed_interfaces__msg__BoundingBox2Df__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__msg__BoundingBox2Df * data = NULL;
  if (size) {
    data = (zed_interfaces__msg__BoundingBox2Df *)calloc(size, sizeof(zed_interfaces__msg__BoundingBox2Df));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__msg__BoundingBox2Df__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__msg__BoundingBox2Df__fini(&data[i - 1]);
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
zed_interfaces__msg__BoundingBox2Df__Sequence__fini(zed_interfaces__msg__BoundingBox2Df__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__msg__BoundingBox2Df__fini(&array->data[i]);
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

zed_interfaces__msg__BoundingBox2Df__Sequence *
zed_interfaces__msg__BoundingBox2Df__Sequence__create(size_t size)
{
  zed_interfaces__msg__BoundingBox2Df__Sequence * array = (zed_interfaces__msg__BoundingBox2Df__Sequence *)malloc(sizeof(zed_interfaces__msg__BoundingBox2Df__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__msg__BoundingBox2Df__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__msg__BoundingBox2Df__Sequence__destroy(zed_interfaces__msg__BoundingBox2Df__Sequence * array)
{
  if (array) {
    zed_interfaces__msg__BoundingBox2Df__Sequence__fini(array);
  }
  free(array);
}
