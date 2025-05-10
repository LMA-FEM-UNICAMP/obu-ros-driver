// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObjectDistanceWithConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "v2x_msgs/msg/detail/distance_value__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/distance_confidence__struct.h"

/// Struct defined in msg/ObjectDistanceWithConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObjectDistanceWithConfidence
{
  v2x_msgs__msg__DistanceValue value;
  v2x_msgs__msg__DistanceConfidence confidence;
} v2x_msgs__msg__ObjectDistanceWithConfidence;

// Struct for a sequence of v2x_msgs__msg__ObjectDistanceWithConfidence.
typedef struct v2x_msgs__msg__ObjectDistanceWithConfidence__Sequence
{
  v2x_msgs__msg__ObjectDistanceWithConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObjectDistanceWithConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_
