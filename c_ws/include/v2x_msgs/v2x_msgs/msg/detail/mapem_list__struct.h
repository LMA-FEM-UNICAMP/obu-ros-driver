// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MAPEMList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAPEM_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAPEM_LIST__STRUCT_H_

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
// Member 'mapems'
#include "v2x_msgs/msg/detail/mapem__struct.h"

/// Struct defined in msg/MAPEMList in the package v2x_msgs.
typedef struct v2x_msgs__msg__MAPEMList
{
  std_msgs__msg__Header header;
  v2x_msgs__msg__MAPEM__Sequence mapems;
} v2x_msgs__msg__MAPEMList;

// Struct for a sequence of v2x_msgs__msg__MAPEMList.
typedef struct v2x_msgs__msg__MAPEMList__Sequence
{
  v2x_msgs__msg__MAPEMList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MAPEMList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAPEM_LIST__STRUCT_H_
