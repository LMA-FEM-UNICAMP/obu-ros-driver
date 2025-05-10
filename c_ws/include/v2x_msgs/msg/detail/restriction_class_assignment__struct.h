// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "v2x_msgs/msg/detail/restriction_class_id__struct.h"
// Member 'users'
#include "v2x_msgs/msg/detail/restriction_user_type_list__struct.h"

/// Struct defined in msg/RestrictionClassAssignment in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RestrictionClassAssignment
{
  v2x_msgs__msg__RestrictionClassID id;
  v2x_msgs__msg__RestrictionUserTypeList users;
} v2x_msgs__msg__RestrictionClassAssignment;

// Struct for a sequence of v2x_msgs__msg__RestrictionClassAssignment.
typedef struct v2x_msgs__msg__RestrictionClassAssignment__Sequence
{
  v2x_msgs__msg__RestrictionClassAssignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RestrictionClassAssignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
