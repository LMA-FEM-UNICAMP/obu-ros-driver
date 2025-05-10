// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/RegSignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REG_SIGNAL_REQUEST__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__REG_SIGNAL_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/reg_signal_request__struct.h"

/// Initialize msg/RegSignalRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__RegSignalRequest
 * )) before or use
 * v2x_msgs__msg__RegSignalRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegSignalRequest__init(v2x_msgs__msg__RegSignalRequest * msg);

/// Finalize msg/RegSignalRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegSignalRequest__fini(v2x_msgs__msg__RegSignalRequest * msg);

/// Create msg/RegSignalRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__RegSignalRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__RegSignalRequest *
v2x_msgs__msg__RegSignalRequest__create();

/// Destroy msg/RegSignalRequest message.
/**
 * It calls
 * v2x_msgs__msg__RegSignalRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegSignalRequest__destroy(v2x_msgs__msg__RegSignalRequest * msg);

/// Check for msg/RegSignalRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegSignalRequest__are_equal(const v2x_msgs__msg__RegSignalRequest * lhs, const v2x_msgs__msg__RegSignalRequest * rhs);

/// Copy a msg/RegSignalRequest message.
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
v2x_msgs__msg__RegSignalRequest__copy(
  const v2x_msgs__msg__RegSignalRequest * input,
  v2x_msgs__msg__RegSignalRequest * output);

/// Initialize array of msg/RegSignalRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__RegSignalRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegSignalRequest__Sequence__init(v2x_msgs__msg__RegSignalRequest__Sequence * array, size_t size);

/// Finalize array of msg/RegSignalRequest messages.
/**
 * It calls
 * v2x_msgs__msg__RegSignalRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegSignalRequest__Sequence__fini(v2x_msgs__msg__RegSignalRequest__Sequence * array);

/// Create array of msg/RegSignalRequest messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__RegSignalRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__RegSignalRequest__Sequence *
v2x_msgs__msg__RegSignalRequest__Sequence__create(size_t size);

/// Destroy array of msg/RegSignalRequest messages.
/**
 * It calls
 * v2x_msgs__msg__RegSignalRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__RegSignalRequest__Sequence__destroy(v2x_msgs__msg__RegSignalRequest__Sequence * array);

/// Check for msg/RegSignalRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__RegSignalRequest__Sequence__are_equal(const v2x_msgs__msg__RegSignalRequest__Sequence * lhs, const v2x_msgs__msg__RegSignalRequest__Sequence * rhs);

/// Copy an array of msg/RegSignalRequest messages.
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
v2x_msgs__msg__RegSignalRequest__Sequence__copy(
  const v2x_msgs__msg__RegSignalRequest__Sequence * input,
  v2x_msgs__msg__RegSignalRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REG_SIGNAL_REQUEST__FUNCTIONS_H_
