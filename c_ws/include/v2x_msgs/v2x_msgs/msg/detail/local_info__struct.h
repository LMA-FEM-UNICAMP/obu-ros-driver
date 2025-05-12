// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LocalInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LOCAL_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LOCAL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "v2x_msgs/msg/detail/time_val__struct.h"
// Member 'position_info'
#include "v2x_msgs/msg/detail/position_info__struct.h"

/// Struct defined in msg/LocalInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LocalInfo
{
  v2x_msgs__msg__TimeVal timestamp;
  v2x_msgs__msg__PositionInfo position_info;
} v2x_msgs__msg__LocalInfo;

// Struct for a sequence of v2x_msgs__msg__LocalInfo.
typedef struct v2x_msgs__msg__LocalInfo__Sequence
{
  v2x_msgs__msg__LocalInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LocalInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LOCAL_INFO__STRUCT_H_
