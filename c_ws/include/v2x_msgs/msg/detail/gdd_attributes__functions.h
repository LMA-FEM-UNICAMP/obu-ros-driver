// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/GddAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/gdd_attributes__struct.h"

/// Initialize msg/GddAttributes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__GddAttributes
 * )) before or use
 * v2x_msgs__msg__GddAttributes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__GddAttributes__init(v2x_msgs__msg__GddAttributes * msg);

/// Finalize msg/GddAttributes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__GddAttributes__fini(v2x_msgs__msg__GddAttributes * msg);

/// Create msg/GddAttributes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__GddAttributes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__GddAttributes *
v2x_msgs__msg__GddAttributes__create();

/// Destroy msg/GddAttributes message.
/**
 * It calls
 * v2x_msgs__msg__GddAttributes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__GddAttributes__destroy(v2x_msgs__msg__GddAttributes * msg);

/// Check for msg/GddAttributes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__GddAttributes__are_equal(const v2x_msgs__msg__GddAttributes * lhs, const v2x_msgs__msg__GddAttributes * rhs);

/// Copy a msg/GddAttributes message.
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
v2x_msgs__msg__GddAttributes__copy(
  const v2x_msgs__msg__GddAttributes * input,
  v2x_msgs__msg__GddAttributes * output);

/// Initialize array of msg/GddAttributes messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__GddAttributes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__GddAttributes__Sequence__init(v2x_msgs__msg__GddAttributes__Sequence * array, size_t size);

/// Finalize array of msg/GddAttributes messages.
/**
 * It calls
 * v2x_msgs__msg__GddAttributes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__GddAttributes__Sequence__fini(v2x_msgs__msg__GddAttributes__Sequence * array);

/// Create array of msg/GddAttributes messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__GddAttributes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__GddAttributes__Sequence *
v2x_msgs__msg__GddAttributes__Sequence__create(size_t size);

/// Destroy array of msg/GddAttributes messages.
/**
 * It calls
 * v2x_msgs__msg__GddAttributes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__GddAttributes__Sequence__destroy(v2x_msgs__msg__GddAttributes__Sequence * array);

/// Check for msg/GddAttributes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__GddAttributes__Sequence__are_equal(const v2x_msgs__msg__GddAttributes__Sequence * lhs, const v2x_msgs__msg__GddAttributes__Sequence * rhs);

/// Copy an array of msg/GddAttributes messages.
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
v2x_msgs__msg__GddAttributes__Sequence__copy(
  const v2x_msgs__msg__GddAttributes__Sequence * input,
  v2x_msgs__msg__GddAttributes__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__FUNCTIONS_H_
