// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaReferencePositions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITIONS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "v2x_msgs/msg/detail/delta_reference_position__struct.h"

/// Struct defined in msg/DeltaReferencePositions in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaReferencePositions
{
  /// size(1..32100)
  v2x_msgs__msg__DeltaReferencePosition__Sequence positions;
} v2x_msgs__msg__DeltaReferencePositions;

// Struct for a sequence of v2x_msgs__msg__DeltaReferencePositions.
typedef struct v2x_msgs__msg__DeltaReferencePositions__Sequence
{
  v2x_msgs__msg__DeltaReferencePositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaReferencePositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITIONS__STRUCT_H_
