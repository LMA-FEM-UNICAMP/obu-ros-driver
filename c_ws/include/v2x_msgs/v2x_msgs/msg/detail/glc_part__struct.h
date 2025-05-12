// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GlcPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GLC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GLC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ZONE_EXTENSION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__GlcPart__ZONE_EXTENSION_RANGE_MIN = 0ll
};

/// Constant 'ZONE_EXTENSION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GlcPart__ZONE_EXTENSION_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'zone_id'
#include "v2x_msgs/msg/detail/zid__struct.h"
// Member 'lane_number'
#include "v2x_msgs/msg/detail/lane_position__struct.h"
// Member 'zone_heading'
#include "v2x_msgs/msg/detail/heading_value__struct.h"
// Member 'zone'
#include "v2x_msgs/msg/detail/zone__struct.h"

/// Struct defined in msg/GlcPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GlcPart
{
  v2x_msgs__msg__Zid zone_id;
  /// Optional Field
  bool lane_number_present;
  v2x_msgs__msg__LanePosition lane_number;
  /// Optional Field
  bool zone_extension_present;
  int64_t zone_extension;
  /// Optional Field
  bool zone_heading_present;
  v2x_msgs__msg__HeadingValue zone_heading;
  /// Optional Field
  bool zone_present;
  v2x_msgs__msg__Zone zone;
} v2x_msgs__msg__GlcPart;

// Struct for a sequence of v2x_msgs__msg__GlcPart.
typedef struct v2x_msgs__msg__GlcPart__Sequence
{
  v2x_msgs__msg__GlcPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GlcPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GLC_PART__STRUCT_H_
