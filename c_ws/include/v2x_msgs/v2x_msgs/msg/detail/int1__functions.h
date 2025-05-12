// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/Int1.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INT1__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__INT1__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/int1__struct.h"

/// Initialize msg/Int1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__Int1
 * )) before or use
 * v2x_msgs__msg__Int1__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Int1__init(v2x_msgs__msg__Int1 * msg);

/// Finalize msg/Int1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Int1__fini(v2x_msgs__msg__Int1 * msg);

/// Create msg/Int1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__Int1__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__Int1 *
v2x_msgs__msg__Int1__create();

/// Destroy msg/Int1 message.
/**
 * It calls
 * v2x_msgs__msg__Int1__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Int1__destroy(v2x_msgs__msg__Int1 * msg);

/// Check for msg/Int1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Int1__are_equal(const v2x_msgs__msg__Int1 * lhs, const v2x_msgs__msg__Int1 * rhs);

/// Copy a msg/Int1 message.
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
v2x_msgs__msg__Int1__copy(
  const v2x_msgs__msg__Int1 * input,
  v2x_msgs__msg__Int1 * output);

/// Initialize array of msg/Int1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__Int1__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Int1__Sequence__init(v2x_msgs__msg__Int1__Sequence * array, size_t size);

/// Finalize array of msg/Int1 messages.
/**
 * It calls
 * v2x_msgs__msg__Int1__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Int1__Sequence__fini(v2x_msgs__msg__Int1__Sequence * array);

/// Create array of msg/Int1 messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__Int1__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__Int1__Sequence *
v2x_msgs__msg__Int1__Sequence__create(size_t size);

/// Destroy array of msg/Int1 messages.
/**
 * It calls
 * v2x_msgs__msg__Int1__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__Int1__Sequence__destroy(v2x_msgs__msg__Int1__Sequence * array);

/// Check for msg/Int1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__Int1__Sequence__are_equal(const v2x_msgs__msg__Int1__Sequence * lhs, const v2x_msgs__msg__Int1__Sequence * rhs);

/// Copy an array of msg/Int1 messages.
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
v2x_msgs__msg__Int1__Sequence__copy(
  const v2x_msgs__msg__Int1__Sequence * input,
  v2x_msgs__msg__Int1__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INT1__FUNCTIONS_H_
