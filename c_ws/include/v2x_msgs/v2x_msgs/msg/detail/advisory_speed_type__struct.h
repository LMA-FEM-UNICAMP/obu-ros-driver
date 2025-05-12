// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AdvisorySpeedType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADVISORY_SPEED_TYPE_NONE'.
enum
{
  v2x_msgs__msg__AdvisorySpeedType__ADVISORY_SPEED_TYPE_NONE = 0ll
};

/// Constant 'ADVISORY_SPEED_TYPE_GREENWAVE'.
enum
{
  v2x_msgs__msg__AdvisorySpeedType__ADVISORY_SPEED_TYPE_GREENWAVE = 1ll
};

/// Constant 'ADVISORY_SPEED_TYPE_ECO_DRIVE'.
enum
{
  v2x_msgs__msg__AdvisorySpeedType__ADVISORY_SPEED_TYPE_ECO_DRIVE = 2ll
};

/// Constant 'ADVISORY_SPEED_TYPE_TRANSIT'.
enum
{
  v2x_msgs__msg__AdvisorySpeedType__ADVISORY_SPEED_TYPE_TRANSIT = 3ll
};

/// Struct defined in msg/AdvisorySpeedType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AdvisorySpeedType
{
  int64_t advisory_speed_type;
} v2x_msgs__msg__AdvisorySpeedType;

// Struct for a sequence of v2x_msgs__msg__AdvisorySpeedType.
typedef struct v2x_msgs__msg__AdvisorySpeedType__Sequence
{
  v2x_msgs__msg__AdvisorySpeedType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AdvisorySpeedType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_
