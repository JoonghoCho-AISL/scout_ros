// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:msg/PlaneStamped.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/msg/detail/plane_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mesh`
#include "shape_msgs/msg/detail/mesh__functions.h"
// Member `coefficients`
#include "shape_msgs/msg/detail/plane__functions.h"
// Member `normal`
// Member `center`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `bounds`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
zed_interfaces__msg__PlaneStamped__init(zed_interfaces__msg__PlaneStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // mesh
  if (!shape_msgs__msg__Mesh__init(&msg->mesh)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // coefficients
  if (!shape_msgs__msg__Plane__init(&msg->coefficients)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Point32__init(&msg->normal)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point32__init(&msg->center)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Transform__init(&msg->pose)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  // extents
  // bounds
  if (!geometry_msgs__msg__Polygon__init(&msg->bounds)) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
    return false;
  }
  return true;
}

void
zed_interfaces__msg__PlaneStamped__fini(zed_interfaces__msg__PlaneStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mesh
  shape_msgs__msg__Mesh__fini(&msg->mesh);
  // coefficients
  shape_msgs__msg__Plane__fini(&msg->coefficients);
  // normal
  geometry_msgs__msg__Point32__fini(&msg->normal);
  // center
  geometry_msgs__msg__Point32__fini(&msg->center);
  // pose
  geometry_msgs__msg__Transform__fini(&msg->pose);
  // extents
  // bounds
  geometry_msgs__msg__Polygon__fini(&msg->bounds);
}

zed_interfaces__msg__PlaneStamped *
zed_interfaces__msg__PlaneStamped__create()
{
  zed_interfaces__msg__PlaneStamped * msg = (zed_interfaces__msg__PlaneStamped *)malloc(sizeof(zed_interfaces__msg__PlaneStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__msg__PlaneStamped));
  bool success = zed_interfaces__msg__PlaneStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__msg__PlaneStamped__destroy(zed_interfaces__msg__PlaneStamped * msg)
{
  if (msg) {
    zed_interfaces__msg__PlaneStamped__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__msg__PlaneStamped__Sequence__init(zed_interfaces__msg__PlaneStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__msg__PlaneStamped * data = NULL;
  if (size) {
    data = (zed_interfaces__msg__PlaneStamped *)calloc(size, sizeof(zed_interfaces__msg__PlaneStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__msg__PlaneStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__msg__PlaneStamped__fini(&data[i - 1]);
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
zed_interfaces__msg__PlaneStamped__Sequence__fini(zed_interfaces__msg__PlaneStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__msg__PlaneStamped__fini(&array->data[i]);
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

zed_interfaces__msg__PlaneStamped__Sequence *
zed_interfaces__msg__PlaneStamped__Sequence__create(size_t size)
{
  zed_interfaces__msg__PlaneStamped__Sequence * array = (zed_interfaces__msg__PlaneStamped__Sequence *)malloc(sizeof(zed_interfaces__msg__PlaneStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__msg__PlaneStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__msg__PlaneStamped__Sequence__destroy(zed_interfaces__msg__PlaneStamped__Sequence * array)
{
  if (array) {
    zed_interfaces__msg__PlaneStamped__Sequence__fini(array);
  }
  free(array);
}
