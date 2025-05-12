// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/YSensorOffset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__Y_SENSOR_OFFSET__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__Y_SENSOR_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'YSENSOR_OFFSET_RANGE_MIN'.
enum
{
  v2x_msgs__msg__YSensorOffset__YSENSOR_OFFSET_RANGE_MIN = -1000ll
};

/// Constant 'YSENSOR_OFFSET_RANGE_MAX'.
enum
{
  v2x_msgs__msg__YSensorOffset__YSENSOR_OFFSET_RANGE_MAX = 1000ll
};

/// Constant 'YSENSOR_OFFSET_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__YSensorOffset__YSENSOR_OFFSET_ZERO_POINT_ZERO_ONE_METER = 1ll
};

/// Constant 'YSENSOR_OFFSET_ONE_METER'.
enum
{
  v2x_msgs__msg__YSensorOffset__YSENSOR_OFFSET_ONE_METER = 100ll
};

/// Struct defined in msg/YSensorOffset in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__YSensorOffset
{
  int64_t ysensor_offset;
} v2x_msgs__msg__YSensorOffset;

// Struct for a sequence of v2x_msgs__msg__YSensorOffset.
typedef struct v2x_msgs__msg__YSensorOffset__Sequence
{
  v2x_msgs__msg__YSensorOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__YSensorOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__Y_SENSOR_OFFSET__STRUCT_H_
