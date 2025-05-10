// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InformationQuality.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INFORMATION_QUALITY_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InformationQuality__INFORMATION_QUALITY_RANGE_MIN = 0ll
};

/// Constant 'INFORMATION_QUALITY_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InformationQuality__INFORMATION_QUALITY_RANGE_MAX = 7ll
};

/// Constant 'INFORMATION_QUALITY_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__InformationQuality__INFORMATION_QUALITY_UNAVAILABLE = 0ll
};

/// Constant 'INFORMATION_QUALITY_LOWEST'.
enum
{
  v2x_msgs__msg__InformationQuality__INFORMATION_QUALITY_LOWEST = 1ll
};

/// Constant 'INFORMATION_QUALITY_HIGHEST'.
enum
{
  v2x_msgs__msg__InformationQuality__INFORMATION_QUALITY_HIGHEST = 7ll
};

/// Struct defined in msg/InformationQuality in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InformationQuality
{
  int64_t information_quality;
} v2x_msgs__msg__InformationQuality;

// Struct for a sequence of v2x_msgs__msg__InformationQuality.
typedef struct v2x_msgs__msg__InformationQuality__Sequence
{
  v2x_msgs__msg__InformationQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InformationQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_
