// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/Version.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/version__struct.h"

/// Initialize msg/Version message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__Version
 * )) before or use
 * v2x_msgs__msg__Version__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Version__init(v2x_msgs__msg__Version * msg);

/// Finalize msg/Version message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Version__fini(v2x_msgs__msg__Version * msg);

/// Create msg/Version message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__Version__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__Version *
v2x_msgs__msg__Version__create();

/// Destroy msg/Version message.
/**
 * It calls
 * v2x_msgs__msg__Version__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Version__destroy(v2x_msgs__msg__Version * msg);

/// Check for msg/Version message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Version__are_equal(const v2x_msgs__msg__Version * lhs, const v2x_msgs__msg__Version * rhs);

/// Copy a msg/Version message.
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
v2x_msgs__msg__Version__copy(
  const v2x_msgs__msg__Version * input,
  v2x_msgs__msg__Version * output);

/// Initialize array of msg/Version messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__Version__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Version__Sequence__init(v2x_msgs__msg__Version__Sequence * array, size_t size);

/// Finalize array of msg/Version messages.
/**
 * It calls
 * v2x_msgs__msg__Version__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Version__Sequence__fini(v2x_msgs__msg__Version__Sequence * array);

/// Create array of msg/Version messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__Version__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__Version__Sequence *
v2x_msgs__msg__Version__Sequence__create(size_t size);

/// Destroy array of msg/Version messages.
/**
 * It calls
 * v2x_msgs__msg__Version__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Version__Sequence__destroy(v2x_msgs__msg__Version__Sequence * array);

/// Check for msg/Version message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Version__Sequence__are_equal(const v2x_msgs__msg__Version__Sequence * lhs, const v2x_msgs__msg__Version__Sequence * rhs);

/// Copy an array of msg/Version messages.
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
v2x_msgs__msg__Version__Sequence__copy(
  const v2x_msgs__msg__Version__Sequence * input,
  v2x_msgs__msg__Version__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VERSION__FUNCTIONS_H_
