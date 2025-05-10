// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/VehicleCharacteristicsList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_LIST__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/vehicle_characteristics_list__struct.h"

/// Initialize msg/VehicleCharacteristicsList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__VehicleCharacteristicsList
 * )) before or use
 * v2x_msgs__msg__VehicleCharacteristicsList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VehicleCharacteristicsList__init(v2x_msgs__msg__VehicleCharacteristicsList * msg);

/// Finalize msg/VehicleCharacteristicsList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VehicleCharacteristicsList__fini(v2x_msgs__msg__VehicleCharacteristicsList * msg);

/// Create msg/VehicleCharacteristicsList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__VehicleCharacteristicsList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__VehicleCharacteristicsList *
v2x_msgs__msg__VehicleCharacteristicsList__create();

/// Destroy msg/VehicleCharacteristicsList message.
/**
 * It calls
 * v2x_msgs__msg__VehicleCharacteristicsList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VehicleCharacteristicsList__destroy(v2x_msgs__msg__VehicleCharacteristicsList * msg);

/// Check for msg/VehicleCharacteristicsList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VehicleCharacteristicsList__are_equal(const v2x_msgs__msg__VehicleCharacteristicsList * lhs, const v2x_msgs__msg__VehicleCharacteristicsList * rhs);

/// Copy a msg/VehicleCharacteristicsList message.
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
v2x_msgs__msg__VehicleCharacteristicsList__copy(
  const v2x_msgs__msg__VehicleCharacteristicsList * input,
  v2x_msgs__msg__VehicleCharacteristicsList * output);

/// Initialize array of msg/VehicleCharacteristicsList messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__VehicleCharacteristicsList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__init(v2x_msgs__msg__VehicleCharacteristicsList__Sequence * array, size_t size);

/// Finalize array of msg/VehicleCharacteristicsList messages.
/**
 * It calls
 * v2x_msgs__msg__VehicleCharacteristicsList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__fini(v2x_msgs__msg__VehicleCharacteristicsList__Sequence * array);

/// Create array of msg/VehicleCharacteristicsList messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__VehicleCharacteristicsList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__VehicleCharacteristicsList__Sequence *
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__create(size_t size);

/// Destroy array of msg/VehicleCharacteristicsList messages.
/**
 * It calls
 * v2x_msgs__msg__VehicleCharacteristicsList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__destroy(v2x_msgs__msg__VehicleCharacteristicsList__Sequence * array);

/// Check for msg/VehicleCharacteristicsList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__are_equal(const v2x_msgs__msg__VehicleCharacteristicsList__Sequence * lhs, const v2x_msgs__msg__VehicleCharacteristicsList__Sequence * rhs);

/// Copy an array of msg/VehicleCharacteristicsList messages.
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
v2x_msgs__msg__VehicleCharacteristicsList__Sequence__copy(
  const v2x_msgs__msg__VehicleCharacteristicsList__Sequence * input,
  v2x_msgs__msg__VehicleCharacteristicsList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_LIST__FUNCTIONS_H_
