// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zed_interfaces:srv/StartSvoRec.idl
// generated code does not contain a copyright notice
#include "zed_interfaces/srv/detail/start_svo_rec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `svo_filename`
#include "rosidl_runtime_c/string_functions.h"

bool
zed_interfaces__srv__StartSvoRec_Request__init(zed_interfaces__srv__StartSvoRec_Request * msg)
{
  if (!msg) {
    return false;
  }
  // bitrate
  // compression_mode
  // target_framerate
  // input_transcode
  // svo_filename
  if (!rosidl_runtime_c__String__init(&msg->svo_filename)) {
    zed_interfaces__srv__StartSvoRec_Request__fini(msg);
    return false;
  }
  return true;
}

void
zed_interfaces__srv__StartSvoRec_Request__fini(zed_interfaces__srv__StartSvoRec_Request * msg)
{
  if (!msg) {
    return;
  }
  // bitrate
  // compression_mode
  // target_framerate
  // input_transcode
  // svo_filename
  rosidl_runtime_c__String__fini(&msg->svo_filename);
}

zed_interfaces__srv__StartSvoRec_Request *
zed_interfaces__srv__StartSvoRec_Request__create()
{
  zed_interfaces__srv__StartSvoRec_Request * msg = (zed_interfaces__srv__StartSvoRec_Request *)malloc(sizeof(zed_interfaces__srv__StartSvoRec_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__srv__StartSvoRec_Request));
  bool success = zed_interfaces__srv__StartSvoRec_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__srv__StartSvoRec_Request__destroy(zed_interfaces__srv__StartSvoRec_Request * msg)
{
  if (msg) {
    zed_interfaces__srv__StartSvoRec_Request__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__srv__StartSvoRec_Request__Sequence__init(zed_interfaces__srv__StartSvoRec_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__srv__StartSvoRec_Request * data = NULL;
  if (size) {
    data = (zed_interfaces__srv__StartSvoRec_Request *)calloc(size, sizeof(zed_interfaces__srv__StartSvoRec_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__srv__StartSvoRec_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__srv__StartSvoRec_Request__fini(&data[i - 1]);
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
zed_interfaces__srv__StartSvoRec_Request__Sequence__fini(zed_interfaces__srv__StartSvoRec_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__srv__StartSvoRec_Request__fini(&array->data[i]);
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

zed_interfaces__srv__StartSvoRec_Request__Sequence *
zed_interfaces__srv__StartSvoRec_Request__Sequence__create(size_t size)
{
  zed_interfaces__srv__StartSvoRec_Request__Sequence * array = (zed_interfaces__srv__StartSvoRec_Request__Sequence *)malloc(sizeof(zed_interfaces__srv__StartSvoRec_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__srv__StartSvoRec_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__srv__StartSvoRec_Request__Sequence__destroy(zed_interfaces__srv__StartSvoRec_Request__Sequence * array)
{
  if (array) {
    zed_interfaces__srv__StartSvoRec_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
zed_interfaces__srv__StartSvoRec_Response__init(zed_interfaces__srv__StartSvoRec_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    zed_interfaces__srv__StartSvoRec_Response__fini(msg);
    return false;
  }
  return true;
}

void
zed_interfaces__srv__StartSvoRec_Response__fini(zed_interfaces__srv__StartSvoRec_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

zed_interfaces__srv__StartSvoRec_Response *
zed_interfaces__srv__StartSvoRec_Response__create()
{
  zed_interfaces__srv__StartSvoRec_Response * msg = (zed_interfaces__srv__StartSvoRec_Response *)malloc(sizeof(zed_interfaces__srv__StartSvoRec_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zed_interfaces__srv__StartSvoRec_Response));
  bool success = zed_interfaces__srv__StartSvoRec_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
zed_interfaces__srv__StartSvoRec_Response__destroy(zed_interfaces__srv__StartSvoRec_Response * msg)
{
  if (msg) {
    zed_interfaces__srv__StartSvoRec_Response__fini(msg);
  }
  free(msg);
}


bool
zed_interfaces__srv__StartSvoRec_Response__Sequence__init(zed_interfaces__srv__StartSvoRec_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  zed_interfaces__srv__StartSvoRec_Response * data = NULL;
  if (size) {
    data = (zed_interfaces__srv__StartSvoRec_Response *)calloc(size, sizeof(zed_interfaces__srv__StartSvoRec_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zed_interfaces__srv__StartSvoRec_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zed_interfaces__srv__StartSvoRec_Response__fini(&data[i - 1]);
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
zed_interfaces__srv__StartSvoRec_Response__Sequence__fini(zed_interfaces__srv__StartSvoRec_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      zed_interfaces__srv__StartSvoRec_Response__fini(&array->data[i]);
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

zed_interfaces__srv__StartSvoRec_Response__Sequence *
zed_interfaces__srv__StartSvoRec_Response__Sequence__create(size_t size)
{
  zed_interfaces__srv__StartSvoRec_Response__Sequence * array = (zed_interfaces__srv__StartSvoRec_Response__Sequence *)malloc(sizeof(zed_interfaces__srv__StartSvoRec_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = zed_interfaces__srv__StartSvoRec_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
zed_interfaces__srv__StartSvoRec_Response__Sequence__destroy(zed_interfaces__srv__StartSvoRec_Response__Sequence * array)
{
  if (array) {
    zed_interfaces__srv__StartSvoRec_Response__Sequence__fini(array);
  }
  free(array);
}
