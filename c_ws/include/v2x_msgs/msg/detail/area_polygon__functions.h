// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/AreaPolygon.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_POLYGON__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__AREA_POLYGON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/area_polygon__struct.h"

/// Initialize msg/AreaPolygon message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__AreaPolygon
 * )) before or use
 * v2x_msgs__msg__AreaPolygon__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__init(v2x_msgs__msg__AreaPolygon * msg);

/// Finalize msg/AreaPolygon message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__AreaPolygon__fini(v2x_msgs__msg__AreaPolygon * msg);

/// Create msg/AreaPolygon message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__AreaPolygon__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__AreaPolygon *
v2x_msgs__msg__AreaPolygon__create();

/// Destroy msg/AreaPolygon message.
/**
 * It calls
 * v2x_msgs__msg__AreaPolygon__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__AreaPolygon__destroy(v2x_msgs__msg__AreaPolygon * msg);

/// Check for msg/AreaPolygon message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__are_equal(const v2x_msgs__msg__AreaPolygon * lhs, const v2x_msgs__msg__AreaPolygon * rhs);

/// Copy a msg/AreaPolygon message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__copy(
  const v2x_msgs__msg__AreaPolygon * input,
  v2x_msgs__msg__AreaPolygon * output);

/// Initialize array of msg/AreaPolygon messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__AreaPolygon__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__Sequence__init(v2x_msgs__msg__AreaPolygon__Sequence * array, size_t size);

/// Finalize array of msg/AreaPolygon messages.
/**
 * It calls
 * v2x_msgs__msg__AreaPolygon__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__AreaPolygon__Sequence__fini(v2x_msgs__msg__AreaPolygon__Sequence * array);

/// Create array of msg/AreaPolygon messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__AreaPolygon__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__AreaPolygon__Sequence *
v2x_msgs__msg__AreaPolygon__Sequence__create(size_t size);

/// Destroy array of msg/AreaPolygon messages.
/**
 * It calls
 * v2x_msgs__msg__AreaPolygon__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__AreaPolygon__Sequence__destroy(v2x_msgs__msg__AreaPolygon__Sequence * array);

/// Check for msg/AreaPolygon message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__Sequence__are_equal(const v2x_msgs__msg__AreaPolygon__Sequence * lhs, const v2x_msgs__msg__AreaPolygon__Sequence * rhs);

/// Copy an array of msg/AreaPolygon messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__AreaPolygon__Sequence__copy(
  const v2x_msgs__msg__AreaPolygon__Sequence * input,
  v2x_msgs__msg__AreaPolygon__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_POLYGON__FUNCTIONS_H_
