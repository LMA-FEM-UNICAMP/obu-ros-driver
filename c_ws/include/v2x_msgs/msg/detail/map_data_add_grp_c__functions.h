// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msgs:msg/MapDataAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__FUNCTIONS_H_
#define V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msgs/msg/detail/map_data_add_grp_c__struct.h"

/// Initialize msg/MapDataAddGrpC message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msgs__msg__MapDataAddGrpC
 * )) before or use
 * v2x_msgs__msg__MapDataAddGrpC__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__MapDataAddGrpC__init(v2x_msgs__msg__MapDataAddGrpC * msg);

/// Finalize msg/MapDataAddGrpC message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__MapDataAddGrpC__fini(v2x_msgs__msg__MapDataAddGrpC * msg);

/// Create msg/MapDataAddGrpC message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msgs__msg__MapDataAddGrpC__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__MapDataAddGrpC *
v2x_msgs__msg__MapDataAddGrpC__create();

/// Destroy msg/MapDataAddGrpC message.
/**
 * It calls
 * v2x_msgs__msg__MapDataAddGrpC__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__MapDataAddGrpC__destroy(v2x_msgs__msg__MapDataAddGrpC * msg);

/// Check for msg/MapDataAddGrpC message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__MapDataAddGrpC__are_equal(const v2x_msgs__msg__MapDataAddGrpC * lhs, const v2x_msgs__msg__MapDataAddGrpC * rhs);

/// Copy a msg/MapDataAddGrpC message.
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
v2x_msgs__msg__MapDataAddGrpC__copy(
  const v2x_msgs__msg__MapDataAddGrpC * input,
  v2x_msgs__msg__MapDataAddGrpC * output);

/// Initialize array of msg/MapDataAddGrpC messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msgs__msg__MapDataAddGrpC__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__MapDataAddGrpC__Sequence__init(v2x_msgs__msg__MapDataAddGrpC__Sequence * array, size_t size);

/// Finalize array of msg/MapDataAddGrpC messages.
/**
 * It calls
 * v2x_msgs__msg__MapDataAddGrpC__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__MapDataAddGrpC__Sequence__fini(v2x_msgs__msg__MapDataAddGrpC__Sequence * array);

/// Create array of msg/MapDataAddGrpC messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msgs__msg__MapDataAddGrpC__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
v2x_msgs__msg__MapDataAddGrpC__Sequence *
v2x_msgs__msg__MapDataAddGrpC__Sequence__create(size_t size);

/// Destroy array of msg/MapDataAddGrpC messages.
/**
 * It calls
 * v2x_msgs__msg__MapDataAddGrpC__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
void
v2x_msgs__msg__MapDataAddGrpC__Sequence__destroy(v2x_msgs__msg__MapDataAddGrpC__Sequence * array);

/// Check for msg/MapDataAddGrpC message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msgs
bool
v2x_msgs__msg__MapDataAddGrpC__Sequence__are_equal(const v2x_msgs__msg__MapDataAddGrpC__Sequence * lhs, const v2x_msgs__msg__MapDataAddGrpC__Sequence * rhs);

/// Copy an array of msg/MapDataAddGrpC messages.
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
v2x_msgs__msg__MapDataAddGrpC__Sequence__copy(
  const v2x_msgs__msg__MapDataAddGrpC__Sequence * input,
  v2x_msgs__msg__MapDataAddGrpC__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAP_DATA_ADD_GRP_C__FUNCTIONS_H_
