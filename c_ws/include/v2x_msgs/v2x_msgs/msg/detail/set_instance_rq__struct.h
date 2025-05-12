// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SetInstanceRq.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SET_INSTANCE_RQ__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SET_INSTANCE_RQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POS_OF_INSTANCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SetInstanceRq__POS_OF_INSTANCE_RANGE_MIN = 0ll
};

/// Constant 'POS_OF_INSTANCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SetInstanceRq__POS_OF_INSTANCE_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'attribute'
#include "v2x_msgs/msg/detail/attributes__struct.h"

/// Struct defined in msg/SetInstanceRq in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SetInstanceRq
{
  int64_t pos_of_instance;
  v2x_msgs__msg__Attributes attribute;
} v2x_msgs__msg__SetInstanceRq;

// Struct for a sequence of v2x_msgs__msg__SetInstanceRq.
typedef struct v2x_msgs__msg__SetInstanceRq__Sequence
{
  v2x_msgs__msg__SetInstanceRq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SetInstanceRq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SET_INSTANCE_RQ__STRUCT_H_
