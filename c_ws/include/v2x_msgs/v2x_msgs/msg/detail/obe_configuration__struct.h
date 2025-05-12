// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObeConfiguration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBE_CONFIGURATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBE_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EQUIPMENT_CLASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObeConfiguration__EQUIPMENT_CLASS_RANGE_MIN = 0ll
};

/// Constant 'EQUIPMENT_CLASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObeConfiguration__EQUIPMENT_CLASS_RANGE_MAX = 32767ll
};

/// Constant 'MANUFACTURER_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObeConfiguration__MANUFACTURER_ID_RANGE_MIN = 0ll
};

/// Constant 'MANUFACTURER_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObeConfiguration__MANUFACTURER_ID_RANGE_MAX = 65535ll
};

/// Constant 'OBE_STATUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObeConfiguration__OBE_STATUS_RANGE_MIN = 0ll
};

/// Constant 'OBE_STATUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObeConfiguration__OBE_STATUS_RANGE_MAX = 65535ll
};

/// Struct defined in msg/ObeConfiguration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObeConfiguration
{
  int64_t equipment_class;
  int64_t manufacturer_id;
  /// Optional Field
  bool obe_status_present;
  int64_t obe_status;
} v2x_msgs__msg__ObeConfiguration;

// Struct for a sequence of v2x_msgs__msg__ObeConfiguration.
typedef struct v2x_msgs__msg__ObeConfiguration__Sequence
{
  v2x_msgs__msg__ObeConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObeConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBE_CONFIGURATION__STRUCT_H_
