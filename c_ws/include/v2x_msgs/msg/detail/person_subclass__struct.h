// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PersonSubclass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS__STRUCT_H_

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
#include "v2x_msgs/msg/detail/person_subclass_type__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/class_confidence__struct.h"

/// Struct defined in msg/PersonSubclass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PersonSubclass
{
  /// Optional Field
  bool type_present;
  v2x_msgs__msg__PersonSubclassType type;
  /// Optional Field
  bool confidence_present;
  v2x_msgs__msg__ClassConfidence confidence;
} v2x_msgs__msg__PersonSubclass;

// Struct for a sequence of v2x_msgs__msg__PersonSubclass.
typedef struct v2x_msgs__msg__PersonSubclass__Sequence
{
  v2x_msgs__msg__PersonSubclass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PersonSubclass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS__STRUCT_H_
