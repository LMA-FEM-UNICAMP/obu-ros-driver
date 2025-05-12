// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ResultFin.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESULT_FIN__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESULT_FIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'result_fin'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ResultFin in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ResultFin
{
  /// size(1..1)
  rosidl_runtime_c__int64__Sequence result_fin;
} v2x_msgs__msg__ResultFin;

// Struct for a sequence of v2x_msgs__msg__ResultFin.
typedef struct v2x_msgs__msg__ResultFin__Sequence
{
  v2x_msgs__msg__ResultFin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ResultFin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESULT_FIN__STRUCT_H_
