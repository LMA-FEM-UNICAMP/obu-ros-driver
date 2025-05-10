// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VerticalAccelerationValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VERTICAL_ACCELERATION_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VerticalAccelerationValue__VERTICAL_ACCELERATION_VALUE_RANGE_MIN = -160ll
};

/// Constant 'VERTICAL_ACCELERATION_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VerticalAccelerationValue__VERTICAL_ACCELERATION_VALUE_RANGE_MAX = 161ll
};

/// Constant 'VERTICAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_UP'.
enum
{
  v2x_msgs__msg__VerticalAccelerationValue__VERTICAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_UP = 1ll
};

/// Constant 'VERTICAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_DOWN'.
enum
{
  v2x_msgs__msg__VerticalAccelerationValue__VERTICAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_DOWN = -1ll
};

/// Constant 'VERTICAL_ACCELERATION_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VerticalAccelerationValue__VERTICAL_ACCELERATION_VALUE_UNAVAILABLE = 161ll
};

/// Struct defined in msg/VerticalAccelerationValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VerticalAccelerationValue
{
  int64_t vertical_acceleration_value;
} v2x_msgs__msg__VerticalAccelerationValue;

// Struct for a sequence of v2x_msgs__msg__VerticalAccelerationValue.
typedef struct v2x_msgs__msg__VerticalAccelerationValue__Sequence
{
  v2x_msgs__msg__VerticalAccelerationValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VerticalAccelerationValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_VALUE__STRUCT_H_
