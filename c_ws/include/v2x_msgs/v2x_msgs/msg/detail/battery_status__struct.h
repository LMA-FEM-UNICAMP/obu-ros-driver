// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BATTERY_STATUS_UNKNOWN'.
enum
{
  v2x_msgs__msg__BatteryStatus__BATTERY_STATUS_UNKNOWN = 0ll
};

/// Constant 'BATTERY_STATUS_CRITICAL'.
enum
{
  v2x_msgs__msg__BatteryStatus__BATTERY_STATUS_CRITICAL = 1ll
};

/// Constant 'BATTERY_STATUS_LOW'.
enum
{
  v2x_msgs__msg__BatteryStatus__BATTERY_STATUS_LOW = 2ll
};

/// Constant 'BATTERY_STATUS_GOOD'.
enum
{
  v2x_msgs__msg__BatteryStatus__BATTERY_STATUS_GOOD = 3ll
};

/// Struct defined in msg/BatteryStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BatteryStatus
{
  int64_t battery_status;
} v2x_msgs__msg__BatteryStatus;

// Struct for a sequence of v2x_msgs__msg__BatteryStatus.
typedef struct v2x_msgs__msg__BatteryStatus__Sequence
{
  v2x_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
