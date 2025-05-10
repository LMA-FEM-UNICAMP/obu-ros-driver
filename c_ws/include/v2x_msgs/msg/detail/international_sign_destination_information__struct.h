// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignDestinationInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DESTINATION_INFORMATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DESTINATION_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'JUNCTION_DIRECTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__JUNCTION_DIRECTION_RANGE_MIN = 1ll
};

/// Constant 'JUNCTION_DIRECTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__JUNCTION_DIRECTION_RANGE_MAX = 128ll
};

/// Constant 'ROUNDABOUT_CW_DIRECTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__ROUNDABOUT_CW_DIRECTION_RANGE_MIN = 1ll
};

/// Constant 'ROUNDABOUT_CW_DIRECTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__ROUNDABOUT_CW_DIRECTION_RANGE_MAX = 128ll
};

/// Constant 'ROUNDABOUT_CCW_DIRECTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__ROUNDABOUT_CCW_DIRECTION_RANGE_MIN = 1ll
};

/// Constant 'ROUNDABOUT_CCW_DIRECTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignDestinationInformation__ROUNDABOUT_CCW_DIRECTION_RANGE_MAX = 128ll
};

// Include directives for member types
// Member 'io_list'
#include "v2x_msgs/msg/detail/dddiolist__struct.h"

/// Struct defined in msg/InternationalSignDestinationInformation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignDestinationInformation
{
  /// Optional Field
  bool junction_direction_present;
  int64_t junction_direction;
  /// Optional Field
  bool roundabout_cw_direction_present;
  int64_t roundabout_cw_direction;
  /// Optional Field
  bool roundabout_ccw_direction_present;
  int64_t roundabout_ccw_direction;
  v2x_msgs__msg__DDDIOLIST io_list;
} v2x_msgs__msg__InternationalSignDestinationInformation;

// Struct for a sequence of v2x_msgs__msg__InternationalSignDestinationInformation.
typedef struct v2x_msgs__msg__InternationalSignDestinationInformation__Sequence
{
  v2x_msgs__msg__InternationalSignDestinationInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignDestinationInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_DESTINATION_INFORMATION__STRUCT_H_
