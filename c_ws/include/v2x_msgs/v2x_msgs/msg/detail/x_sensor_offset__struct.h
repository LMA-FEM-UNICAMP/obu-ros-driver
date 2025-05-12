// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/XSensorOffset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__X_SENSOR_OFFSET__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__X_SENSOR_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'XSENSOR_OFFSET_RANGE_MIN'.
enum
{
  v2x_msgs__msg__XSensorOffset__XSENSOR_OFFSET_RANGE_MIN = -5000ll
};

/// Constant 'XSENSOR_OFFSET_RANGE_MAX'.
enum
{
  v2x_msgs__msg__XSensorOffset__XSENSOR_OFFSET_RANGE_MAX = 0ll
};

/// Constant 'XSENSOR_OFFSET_NEGATIVE_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__XSensorOffset__XSENSOR_OFFSET_NEGATIVE_ZERO_POINT_ZERO_ONE_METER = -1ll
};

/// Constant 'XSENSOR_OFFSET_NEGATIVE_ONE_METER'.
enum
{
  v2x_msgs__msg__XSensorOffset__XSENSOR_OFFSET_NEGATIVE_ONE_METER = -100ll
};

/// Struct defined in msg/XSensorOffset in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__XSensorOffset
{
  int64_t xsensor_offset;
} v2x_msgs__msg__XSensorOffset;

// Struct for a sequence of v2x_msgs__msg__XSensorOffset.
typedef struct v2x_msgs__msg__XSensorOffset__Sequence
{
  v2x_msgs__msg__XSensorOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__XSensorOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__X_SENSOR_OFFSET__STRUCT_H_
