// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zed_interfaces:msg/Keypoint3D.idl
// generated code does not contain a copyright notice

#ifndef ZED_INTERFACES__MSG__DETAIL__KEYPOINT3_D__FUNCTIONS_H_
#define ZED_INTERFACES__MSG__DETAIL__KEYPOINT3_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "zed_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "zed_interfaces/msg/detail/keypoint3_d__struct.h"

/// Initialize msg/Keypoint3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zed_interfaces__msg__Keypoint3D
 * )) before or use
 * zed_interfaces__msg__Keypoint3D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
bool
zed_interfaces__msg__Keypoint3D__init(zed_interfaces__msg__Keypoint3D * msg);

/// Finalize msg/Keypoint3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
void
zed_interfaces__msg__Keypoint3D__fini(zed_interfaces__msg__Keypoint3D * msg);

/// Create msg/Keypoint3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zed_interfaces__msg__Keypoint3D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
zed_interfaces__msg__Keypoint3D *
zed_interfaces__msg__Keypoint3D__create();

/// Destroy msg/Keypoint3D message.
/**
 * It calls
 * zed_interfaces__msg__Keypoint3D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
void
zed_interfaces__msg__Keypoint3D__destroy(zed_interfaces__msg__Keypoint3D * msg);


/// Initialize array of msg/Keypoint3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * zed_interfaces__msg__Keypoint3D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
bool
zed_interfaces__msg__Keypoint3D__Sequence__init(zed_interfaces__msg__Keypoint3D__Sequence * array, size_t size);

/// Finalize array of msg/Keypoint3D messages.
/**
 * It calls
 * zed_interfaces__msg__Keypoint3D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
void
zed_interfaces__msg__Keypoint3D__Sequence__fini(zed_interfaces__msg__Keypoint3D__Sequence * array);

/// Create array of msg/Keypoint3D messages.
/**
 * It allocates the memory for the array and calls
 * zed_interfaces__msg__Keypoint3D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
zed_interfaces__msg__Keypoint3D__Sequence *
zed_interfaces__msg__Keypoint3D__Sequence__create(size_t size);

/// Destroy array of msg/Keypoint3D messages.
/**
 * It calls
 * zed_interfaces__msg__Keypoint3D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_interfaces
void
zed_interfaces__msg__Keypoint3D__Sequence__destroy(zed_interfaces__msg__Keypoint3D__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ZED_INTERFACES__MSG__DETAIL__KEYPOINT3_D__FUNCTIONS_H_
