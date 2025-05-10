// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SREMList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SREM_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SREM_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'srems'
#include "v2x_msgs/msg/detail/srem__struct.h"

/// Struct defined in msg/SREMList in the package v2x_msgs.
typedef struct v2x_msgs__msg__SREMList
{
  std_msgs__msg__Header header;
  v2x_msgs__msg__SREM__Sequence srems;
} v2x_msgs__msg__SREMList;

// Struct for a sequence of v2x_msgs__msg__SREMList.
typedef struct v2x_msgs__msg__SREMList__Sequence
{
  v2x_msgs__msg__SREMList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SREMList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SREM_LIST__STRUCT_H_
