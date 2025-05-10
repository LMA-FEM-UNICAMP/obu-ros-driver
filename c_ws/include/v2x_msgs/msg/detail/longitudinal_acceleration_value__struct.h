// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LongitudinalAccelerationValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LONGITUDINAL_ACCELERATION_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LongitudinalAccelerationValue__LONGITUDINAL_ACCELERATION_VALUE_RANGE_MIN = -160ll
};

/// Constant 'LONGITUDINAL_ACCELERATION_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LongitudinalAccelerationValue__LONGITUDINAL_ACCELERATION_VALUE_RANGE_MAX = 161ll
};

/// Constant 'LONGITUDINAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_FORWARD'.
enum
{
  v2x_msgs__msg__LongitudinalAccelerationValue__LONGITUDINAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_FORWARD = 1ll
};

/// Constant 'LONGITUDINAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_BACKWARD'.
enum
{
  v2x_msgs__msg__LongitudinalAccelerationValue__LONGITUDINAL_ACCELERATION_VALUE_POINT_ONE_METER_PER_SEC_SQUARED_BACKWARD = -1ll
};

/// Constant 'LONGITUDINAL_ACCELERATION_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__LongitudinalAccelerationValue__LONGITUDINAL_ACCELERATION_VALUE_UNAVAILABLE = 161ll
};

/// Struct defined in msg/LongitudinalAccelerationValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LongitudinalAccelerationValue
{
  int64_t longitudinal_acceleration_value;
} v2x_msgs__msg__LongitudinalAccelerationValue;

// Struct for a sequence of v2x_msgs__msg__LongitudinalAccelerationValue.
typedef struct v2x_msgs__msg__LongitudinalAccelerationValue__Sequence
{
  v2x_msgs__msg__LongitudinalAccelerationValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LongitudinalAccelerationValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION_VALUE__STRUCT_H_
