// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/DrivenLineOffsetSm.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/driven_line_offset_sm__struct.h"

/// Initialize msg/DrivenLineOffsetSm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__DrivenLineOffsetSm
 * )) before or use
 * v2x_msgs__msg__DrivenLineOffsetSm__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__DrivenLineOffsetSm__init(v2x_msgs__msg__DrivenLineOffsetSm * msg);

/// Finalize msg/DrivenLineOffsetSm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__DrivenLineOffsetSm__fini(v2x_msgs__msg__DrivenLineOffsetSm * msg);

/// Create msg/DrivenLineOffsetSm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__DrivenLineOffsetSm__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__DrivenLineOffsetSm *
v2x_msgs__msg__DrivenLineOffsetSm__create();

/// Destroy msg/DrivenLineOffsetSm message.
/**
 * It calls
 * v2x_msgs__msg__DrivenLineOffsetSm__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__DrivenLineOffsetSm__destroy(v2x_msgs__msg__DrivenLineOffsetSm * msg);

/// Check for msg/DrivenLineOffsetSm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__DrivenLineOffsetSm__are_equal(const v2x_msgs__msg__DrivenLineOffsetSm * lhs, const v2x_msgs__msg__DrivenLineOffsetSm * rhs);

/// Copy a msg/DrivenLineOffsetSm message.
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
v2x_msgs__msg__DrivenLineOffsetSm__copy(
  const v2x_msgs__msg__DrivenLineOffsetSm * input,
  v2x_msgs__msg__DrivenLineOffsetSm * output);

/// Initialize array of msg/DrivenLineOffsetSm messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__DrivenLineOffsetSm__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__init(v2x_msgs__msg__DrivenLineOffsetSm__Sequence * array, size_t size);

/// Finalize array of msg/DrivenLineOffsetSm messages.
/**
 * It calls
 * v2x_msgs__msg__DrivenLineOffsetSm__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__fini(v2x_msgs__msg__DrivenLineOffsetSm__Sequence * array);

/// Create array of msg/DrivenLineOffsetSm messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__DrivenLineOffsetSm__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__DrivenLineOffsetSm__Sequence *
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__create(size_t size);

/// Destroy array of msg/DrivenLineOffsetSm messages.
/**
 * It calls
 * v2x_msgs__msg__DrivenLineOffsetSm__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__destroy(v2x_msgs__msg__DrivenLineOffsetSm__Sequence * array);

/// Check for msg/DrivenLineOffsetSm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__are_equal(const v2x_msgs__msg__DrivenLineOffsetSm__Sequence * lhs, const v2x_msgs__msg__DrivenLineOffsetSm__Sequence * rhs);

/// Copy an array of msg/DrivenLineOffsetSm messages.
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
v2x_msgs__msg__DrivenLineOffsetSm__Sequence__copy(
  const v2x_msgs__msg__DrivenLineOffsetSm__Sequence * input,
  v2x_msgs__msg__DrivenLineOffsetSm__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVEN_LINE_OFFSET_SM__FUNCTIONS_H_
