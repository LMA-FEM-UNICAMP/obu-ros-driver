// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/ReceiptServiceSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_SERIAL_NUMBER__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_SERIAL_NUMBER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/receipt_service_serial_number__struct.h"

/// Initialize msg/ReceiptServiceSerialNumber message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__ReceiptServiceSerialNumber
 * )) before or use
 * v2x_msgs__msg__ReceiptServiceSerialNumber__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptServiceSerialNumber__init(v2x_msgs__msg__ReceiptServiceSerialNumber * msg);

/// Finalize msg/ReceiptServiceSerialNumber message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptServiceSerialNumber__fini(v2x_msgs__msg__ReceiptServiceSerialNumber * msg);

/// Create msg/ReceiptServiceSerialNumber message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__ReceiptServiceSerialNumber *
v2x_msgs__msg__ReceiptServiceSerialNumber__create();

/// Destroy msg/ReceiptServiceSerialNumber message.
/**
 * It calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptServiceSerialNumber__destroy(v2x_msgs__msg__ReceiptServiceSerialNumber * msg);

/// Check for msg/ReceiptServiceSerialNumber message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptServiceSerialNumber__are_equal(const v2x_msgs__msg__ReceiptServiceSerialNumber * lhs, const v2x_msgs__msg__ReceiptServiceSerialNumber * rhs);

/// Copy a msg/ReceiptServiceSerialNumber message.
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
v2x_msgs__msg__ReceiptServiceSerialNumber__copy(
  const v2x_msgs__msg__ReceiptServiceSerialNumber * input,
  v2x_msgs__msg__ReceiptServiceSerialNumber * output);

/// Initialize array of msg/ReceiptServiceSerialNumber messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__init(v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * array, size_t size);

/// Finalize array of msg/ReceiptServiceSerialNumber messages.
/**
 * It calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__fini(v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * array);

/// Create array of msg/ReceiptServiceSerialNumber messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence *
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__create(size_t size);

/// Destroy array of msg/ReceiptServiceSerialNumber messages.
/**
 * It calls
 * v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__destroy(v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * array);

/// Check for msg/ReceiptServiceSerialNumber message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__are_equal(const v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * lhs, const v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * rhs);

/// Copy an array of msg/ReceiptServiceSerialNumber messages.
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
v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence__copy(
  const v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * input,
  v2x_msgs__msg__ReceiptServiceSerialNumber__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_SERIAL_NUMBER__FUNCTIONS_H_
