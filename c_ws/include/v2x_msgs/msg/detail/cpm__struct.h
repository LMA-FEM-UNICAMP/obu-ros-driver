// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CPM__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CPM__STRUCT_H_

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
#include "v2x_msgs/msg/detail/its_pdu_header__struct.h"
// Member 'cpm'
#include "v2x_msgs/msg/detail/collective_perception_message__struct.h"

/// Struct defined in msg/CPM in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CPM
{
  v2x_msgs__msg__ItsPduHeader header;
  v2x_msgs__msg__CollectivePerceptionMessage cpm;
} v2x_msgs__msg__CPM;

// Struct for a sequence of v2x_msgs__msg__CPM.
typedef struct v2x_msgs__msg__CPM__Sequence
{
  v2x_msgs__msg__CPM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CPM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CPM__STRUCT_H_
