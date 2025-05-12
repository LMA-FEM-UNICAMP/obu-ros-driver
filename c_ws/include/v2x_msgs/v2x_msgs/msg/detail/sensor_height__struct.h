// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SensorHeight.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SENSOR_HEIGHT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SENSOR_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SENSOR_HEIGHT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SensorHeight__SENSOR_HEIGHT_RANGE_MIN = -5000ll
};

/// Constant 'SENSOR_HEIGHT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SensorHeight__SENSOR_HEIGHT_RANGE_MAX = 5000ll
};

/// Constant 'SENSOR_HEIGHT_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__SensorHeight__SENSOR_HEIGHT_ZERO_POINT_ZERO_ONE_METER = 1ll
};

/// Struct defined in msg/SensorHeight in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SensorHeight
{
  int64_t sensor_height;
} v2x_msgs__msg__SensorHeight;

// Struct for a sequence of v2x_msgs__msg__SensorHeight.
typedef struct v2x_msgs__msg__SensorHeight__Sequence
{
  v2x_msgs__msg__SensorHeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SensorHeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SENSOR_HEIGHT__STRUCT_H_
