// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:msg/ObjectsStamped.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/msg/detail/objects_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "zed_interfaces/msg/detail/object__functions.h"

bool
zed_interfaces__msg__ObjectsStamped__init(zed_interfaces__msg__ObjectsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    zed_interfaces__msg__ObjectsStamped__fini(msg);
    return false;
  }
  // objects
  if (!zed_interfaces__msg__Object__Sequence__init(&msg->objects, 0)) {
    zed_interfaces__msg__ObjectsStamped__fini(msg);
    return false;
  }
  return true;
}

void
zed_interfaces__msg__ObjectsStamped__fini(zed_interfaces__msg__ObjectsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  zed_interfaces__msg__Object__Sequence__fini(&msg->objects);
}

zed_interfaces__msg__ObjectsStamped *
zed_interfaces__msg__ObjectsStamped__create()
{
  zed_interfaces__msg__ObjectsStamped * msg = (zed_interfaces__msg__ObjectsStamped *)malloc(sizeof(zed_interfaces__msg__ObjectsStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__msg__ObjectsStamped));
  bool success = zed_interfaces__msg__ObjectsStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__msg__ObjectsStamped__destroy(zed_interfaces__msg__ObjectsStamped * msg)
{
  if (msg) {
    zed_interfaces__msg__ObjectsStamped__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__msg__ObjectsStamped__Sequence__init(zed_interfaces__msg__ObjectsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__msg__ObjectsStamped * data = NULL;
  if (size) {
    data = (zed_interfaces__msg__ObjectsStamped *)calloc(size, sizeof(zed_interfaces__msg__ObjectsStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__msg__ObjectsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__msg__ObjectsStamped__fini(&data[i - 1]);
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
zed_interfaces__msg__ObjectsStamped__Sequence__fini(zed_interfaces__msg__ObjectsStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__msg__ObjectsStamped__fini(&array->data[i]);
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

zed_interfaces__msg__ObjectsStamped__Sequence *
zed_interfaces__msg__ObjectsStamped__Sequence__create(size_t size)
{
  zed_interfaces__msg__ObjectsStamped__Sequence * array = (zed_interfaces__msg__ObjectsStamped__Sequence *)malloc(sizeof(zed_interfaces__msg__ObjectsStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__msg__ObjectsStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__msg__ObjectsStamped__Sequence__destroy(zed_interfaces__msg__ObjectsStamped__Sequence * array)
{
  if (array) {
    zed_interfaces__msg__ObjectsStamped__Sequence__fini(array);
  }
  free(array);
}
