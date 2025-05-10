// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/RegRequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REG_REQUESTOR_DESCRIPTION__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__REG_REQUESTOR_DESCRIPTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/reg_requestor_description__struct.h"

/// Initialize msg/RegRequestorDescription message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__RegRequestorDescription
 * )) before or use
 * v2x_msgs__msg__RegRequestorDescription__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegRequestorDescription__init(v2x_msgs__msg__RegRequestorDescription * msg);

/// Finalize msg/RegRequestorDescription message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegRequestorDescription__fini(v2x_msgs__msg__RegRequestorDescription * msg);

/// Create msg/RegRequestorDescription message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__RegRequestorDescription__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__RegRequestorDescription *
v2x_msgs__msg__RegRequestorDescription__create();

/// Destroy msg/RegRequestorDescription message.
/**
 * It calls
 * v2x_msgs__msg__RegRequestorDescription__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegRequestorDescription__destroy(v2x_msgs__msg__RegRequestorDescription * msg);

/// Check for msg/RegRequestorDescription message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegRequestorDescription__are_equal(const v2x_msgs__msg__RegRequestorDescription * lhs, const v2x_msgs__msg__RegRequestorDescription * rhs);

/// Copy a msg/RegRequestorDescription message.
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
v2x_msgs__msg__RegRequestorDescription__copy(
  const v2x_msgs__msg__RegRequestorDescription * input,
  v2x_msgs__msg__RegRequestorDescription * output);

/// Initialize array of msg/RegRequestorDescription messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__RegRequestorDescription__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegRequestorDescription__Sequence__init(v2x_msgs__msg__RegRequestorDescription__Sequence * array, size_t size);

/// Finalize array of msg/RegRequestorDescription messages.
/**
 * It calls
 * v2x_msgs__msg__RegRequestorDescription__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegRequestorDescription__Sequence__fini(v2x_msgs__msg__RegRequestorDescription__Sequence * array);

/// Create array of msg/RegRequestorDescription messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__RegRequestorDescription__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__RegRequestorDescription__Sequence *
v2x_msgs__msg__RegRequestorDescription__Sequence__create(size_t size);

/// Destroy array of msg/RegRequestorDescription messages.
/**
 * It calls
 * v2x_msgs__msg__RegRequestorDescription__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegRequestorDescription__Sequence__destroy(v2x_msgs__msg__RegRequestorDescription__Sequence * array);

/// Check for msg/RegRequestorDescription message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegRequestorDescription__Sequence__are_equal(const v2x_msgs__msg__RegRequestorDescription__Sequence * lhs, const v2x_msgs__msg__RegRequestorDescription__Sequence * rhs);

/// Copy an array of msg/RegRequestorDescription messages.
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
v2x_msgs__msg__RegRequestorDescription__Sequence__copy(
  const v2x_msgs__msg__RegRequestorDescription__Sequence * input,
  v2x_msgs__msg__RegRequestorDescription__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REG_REQUESTOR_DESCRIPTION__FUNCTIONS_H_
