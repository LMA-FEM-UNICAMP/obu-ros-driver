// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EmergencyPriority.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EMERGENCY_PRIORITY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EMERGENCY_PRIORITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMERGENCY_PRIORITY_REQUEST_FOR_RIGHT_OF_WAY'.
enum
{
  v2x_msgs__msg__EmergencyPriority__EMERGENCY_PRIORITY_REQUEST_FOR_RIGHT_OF_WAY = 0ll
};

/// Constant 'EMERGENCY_PRIORITY_REQUEST_FOR_FREE_CROSSING_AT_ATRAFFIC_LIGHT'.
enum
{
  v2x_msgs__msg__EmergencyPriority__EMERGENCY_PRIORITY_REQUEST_FOR_FREE_CROSSING_AT_ATRAFFIC_LIGHT = 1ll
};

/// Struct defined in msg/EmergencyPriority in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EmergencyPriority
{
  int64_t emergency_priority;
} v2x_msgs__msg__EmergencyPriority;

// Struct for a sequence of v2x_msgs__msg__EmergencyPriority.
typedef struct v2x_msgs__msg__EmergencyPriority__Sequence
{
  v2x_msgs__msg__EmergencyPriority * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EmergencyPriority__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EMERGENCY_PRIORITY__STRUCT_H_
