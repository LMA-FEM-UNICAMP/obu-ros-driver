// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CAM__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CAM__STRUCT_H_

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
// Member 'cam'
#include "v2x_msgs/msg/detail/coop_awareness__struct.h"

/// Struct defined in msg/CAM in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CAM
{
  v2x_msgs__msg__ItsPduHeader header;
  v2x_msgs__msg__CoopAwareness cam;
} v2x_msgs__msg__CAM;

// Struct for a sequence of v2x_msgs__msg__CAM.
typedef struct v2x_msgs__msg__CAM__Sequence
{
  v2x_msgs__msg__CAM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CAM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CAM__STRUCT_H_
