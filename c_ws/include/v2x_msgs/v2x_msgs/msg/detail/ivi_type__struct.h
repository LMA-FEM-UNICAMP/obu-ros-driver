// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IVI_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_RANGE_MIN = 0ll
};

/// Constant 'IVI_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_RANGE_MAX = 7ll
};

/// Constant 'IVI_TYPE_IMMEDIATE_DANGER_WARNING_MESSAGES'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_IMMEDIATE_DANGER_WARNING_MESSAGES = 0ll
};

/// Constant 'IVI_TYPE_REGULATORY_MESSAGES'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_REGULATORY_MESSAGES = 1ll
};

/// Constant 'IVI_TYPE_TRAFFIC_RELATED_INFORMATION_MESSAGES'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_TRAFFIC_RELATED_INFORMATION_MESSAGES = 2ll
};

/// Constant 'IVI_TYPE_POLLUTION_MESSAGES'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_POLLUTION_MESSAGES = 3ll
};

/// Constant 'IVI_TYPE_NOT_TRAFFIC_RELATED_INFORMATION_MESSAGES'.
enum
{
  v2x_msgs__msg__IviType__IVI_TYPE_NOT_TRAFFIC_RELATED_INFORMATION_MESSAGES = 4ll
};

/// Struct defined in msg/IviType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviType
{
  int64_t ivi_type;
} v2x_msgs__msg__IviType;

// Struct for a sequence of v2x_msgs__msg__IviType.
typedef struct v2x_msgs__msg__IviType__Sequence
{
  v2x_msgs__msg__IviType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_TYPE__STRUCT_H_
