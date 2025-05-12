// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OtherSubclass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OTHER_SUBCLASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OTHER_SUBCLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "v2x_msgs/msg/detail/other_sublass_type__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/class_confidence__struct.h"

/// Struct defined in msg/OtherSubclass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OtherSubclass
{
  /// Optional Field
  bool type_present;
  v2x_msgs__msg__OtherSublassType type;
  /// Optional Field
  bool confidence_present;
  v2x_msgs__msg__ClassConfidence confidence;
} v2x_msgs__msg__OtherSubclass;

// Struct for a sequence of v2x_msgs__msg__OtherSubclass.
typedef struct v2x_msgs__msg__OtherSubclass__Sequence
{
  v2x_msgs__msg__OtherSubclass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OtherSubclass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OTHER_SUBCLASS__STRUCT_H_
