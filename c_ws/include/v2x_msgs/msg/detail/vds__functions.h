// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/VDS.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VDS__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__VDS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/vds__struct.h"

/// Initialize msg/VDS message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__VDS
 * )) before or use
 * v2x_msgs__msg__VDS__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VDS__init(v2x_msgs__msg__VDS * msg);

/// Finalize msg/VDS message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VDS__fini(v2x_msgs__msg__VDS * msg);

/// Create msg/VDS message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__VDS__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__VDS *
v2x_msgs__msg__VDS__create();

/// Destroy msg/VDS message.
/**
 * It calls
 * v2x_msgs__msg__VDS__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VDS__destroy(v2x_msgs__msg__VDS * msg);

/// Check for msg/VDS message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VDS__are_equal(const v2x_msgs__msg__VDS * lhs, const v2x_msgs__msg__VDS * rhs);

/// Copy a msg/VDS message.
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
v2x_msgs__msg__VDS__copy(
  const v2x_msgs__msg__VDS * input,
  v2x_msgs__msg__VDS * output);

/// Initialize array of msg/VDS messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__VDS__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VDS__Sequence__init(v2x_msgs__msg__VDS__Sequence * array, size_t size);

/// Finalize array of msg/VDS messages.
/**
 * It calls
 * v2x_msgs__msg__VDS__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VDS__Sequence__fini(v2x_msgs__msg__VDS__Sequence * array);

/// Create array of msg/VDS messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__VDS__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__VDS__Sequence *
v2x_msgs__msg__VDS__Sequence__create(size_t size);

/// Destroy array of msg/VDS messages.
/**
 * It calls
 * v2x_msgs__msg__VDS__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VDS__Sequence__destroy(v2x_msgs__msg__VDS__Sequence * array);

/// Check for msg/VDS message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VDS__Sequence__are_equal(const v2x_msgs__msg__VDS__Sequence * lhs, const v2x_msgs__msg__VDS__Sequence * rhs);

/// Copy an array of msg/VDS messages.
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
v2x_msgs__msg__VDS__Sequence__copy(
  const v2x_msgs__msg__VDS__Sequence * input,
  v2x_msgs__msg__VDS__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VDS__FUNCTIONS_H_
