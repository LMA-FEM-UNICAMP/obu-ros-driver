// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/ReceiptData1.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_DATA1__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_DATA1__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/receipt_data1__struct.h"

/// Initialize msg/ReceiptData1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__ReceiptData1
 * )) before or use
 * v2x_msgs__msg__ReceiptData1__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptData1__init(v2x_msgs__msg__ReceiptData1 * msg);

/// Finalize msg/ReceiptData1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptData1__fini(v2x_msgs__msg__ReceiptData1 * msg);

/// Create msg/ReceiptData1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__ReceiptData1__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__ReceiptData1 *
v2x_msgs__msg__ReceiptData1__create();

/// Destroy msg/ReceiptData1 message.
/**
 * It calls
 * v2x_msgs__msg__ReceiptData1__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptData1__destroy(v2x_msgs__msg__ReceiptData1 * msg);

/// Check for msg/ReceiptData1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptData1__are_equal(const v2x_msgs__msg__ReceiptData1 * lhs, const v2x_msgs__msg__ReceiptData1 * rhs);

/// Copy a msg/ReceiptData1 message.
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
v2x_msgs__msg__ReceiptData1__copy(
  const v2x_msgs__msg__ReceiptData1 * input,
  v2x_msgs__msg__ReceiptData1 * output);

/// Initialize array of msg/ReceiptData1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__ReceiptData1__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptData1__Sequence__init(v2x_msgs__msg__ReceiptData1__Sequence * array, size_t size);

/// Finalize array of msg/ReceiptData1 messages.
/**
 * It calls
 * v2x_msgs__msg__ReceiptData1__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptData1__Sequence__fini(v2x_msgs__msg__ReceiptData1__Sequence * array);

/// Create array of msg/ReceiptData1 messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__ReceiptData1__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__ReceiptData1__Sequence *
v2x_msgs__msg__ReceiptData1__Sequence__create(size_t size);

/// Destroy array of msg/ReceiptData1 messages.
/**
 * It calls
 * v2x_msgs__msg__ReceiptData1__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptData1__Sequence__destroy(v2x_msgs__msg__ReceiptData1__Sequence * array);

/// Check for msg/ReceiptData1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptData1__Sequence__are_equal(const v2x_msgs__msg__ReceiptData1__Sequence * lhs, const v2x_msgs__msg__ReceiptData1__Sequence * rhs);

/// Copy an array of msg/ReceiptData1 messages.
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
v2x_msgs__msg__ReceiptData1__Sequence__copy(
  const v2x_msgs__msg__ReceiptData1__Sequence * input,
  v2x_msgs__msg__ReceiptData1__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_DATA1__FUNCTIONS_H_
