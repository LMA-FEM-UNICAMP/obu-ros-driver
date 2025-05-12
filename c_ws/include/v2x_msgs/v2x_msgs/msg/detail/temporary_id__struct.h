// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'temporary_id'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TemporaryID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TemporaryID
{
  /// size(1..4)
  rosidl_runtime_c__int64__Sequence temporary_id;
} v2x_msgs__msg__TemporaryID;

// Struct for a sequence of v2x_msgs__msg__TemporaryID.
typedef struct v2x_msgs__msg__TemporaryID__Sequence
{
  v2x_msgs__msg__TemporaryID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TemporaryID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_H_
