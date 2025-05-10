// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/SteeringWheelAngleValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/steering_wheel_angle_value__struct.h"

/// Initialize msg/SteeringWheelAngleValue message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__SteeringWheelAngleValue
 * )) before or use
 * v2x_msgs__msg__SteeringWheelAngleValue__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__SteeringWheelAngleValue__init(v2x_msgs__msg__SteeringWheelAngleValue * msg);

/// Finalize msg/SteeringWheelAngleValue message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__SteeringWheelAngleValue__fini(v2x_msgs__msg__SteeringWheelAngleValue * msg);

/// Create msg/SteeringWheelAngleValue message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__SteeringWheelAngleValue__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__SteeringWheelAngleValue *
v2x_msgs__msg__SteeringWheelAngleValue__create();

/// Destroy msg/SteeringWheelAngleValue message.
/**
 * It calls
 * v2x_msgs__msg__SteeringWheelAngleValue__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__SteeringWheelAngleValue__destroy(v2x_msgs__msg__SteeringWheelAngleValue * msg);

/// Check for msg/SteeringWheelAngleValue message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__SteeringWheelAngleValue__are_equal(const v2x_msgs__msg__SteeringWheelAngleValue * lhs, const v2x_msgs__msg__SteeringWheelAngleValue * rhs);

/// Copy a msg/SteeringWheelAngleValue message.
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
v2x_msgs__msg__SteeringWheelAngleValue__copy(
  const v2x_msgs__msg__SteeringWheelAngleValue * input,
  v2x_msgs__msg__SteeringWheelAngleValue * output);

/// Initialize array of msg/SteeringWheelAngleValue messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__SteeringWheelAngleValue__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__init(v2x_msgs__msg__SteeringWheelAngleValue__Sequence * array, size_t size);

/// Finalize array of msg/SteeringWheelAngleValue messages.
/**
 * It calls
 * v2x_msgs__msg__SteeringWheelAngleValue__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__fini(v2x_msgs__msg__SteeringWheelAngleValue__Sequence * array);

/// Create array of msg/SteeringWheelAngleValue messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__SteeringWheelAngleValue__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__SteeringWheelAngleValue__Sequence *
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__create(size_t size);

/// Destroy array of msg/SteeringWheelAngleValue messages.
/**
 * It calls
 * v2x_msgs__msg__SteeringWheelAngleValue__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__destroy(v2x_msgs__msg__SteeringWheelAngleValue__Sequence * array);

/// Check for msg/SteeringWheelAngleValue message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__are_equal(const v2x_msgs__msg__SteeringWheelAngleValue__Sequence * lhs, const v2x_msgs__msg__SteeringWheelAngleValue__Sequence * rhs);

/// Copy an array of msg/SteeringWheelAngleValue messages.
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
v2x_msgs__msg__SteeringWheelAngleValue__Sequence__copy(
  const v2x_msgs__msg__SteeringWheelAngleValue__Sequence * input,
  v2x_msgs__msg__SteeringWheelAngleValue__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE_VALUE__FUNCTIONS_H_
