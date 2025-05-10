// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AccelerationControl.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCELERATION_CONTROL_BRAKE_PEDAL_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_BRAKE_PEDAL_ENGAGED = 0ll
};

/// Constant 'ACCELERATION_CONTROL_GAS_PEDAL_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_GAS_PEDAL_ENGAGED = 1ll
};

/// Constant 'ACCELERATION_CONTROL_EMERGENCY_BRAKE_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_EMERGENCY_BRAKE_ENGAGED = 2ll
};

/// Constant 'ACCELERATION_CONTROL_COLLISION_WARNING_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_COLLISION_WARNING_ENGAGED = 3ll
};

/// Constant 'ACCELERATION_CONTROL_ACC_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_ACC_ENGAGED = 4ll
};

/// Constant 'ACCELERATION_CONTROL_CRUISE_CONTROL_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_CRUISE_CONTROL_ENGAGED = 5ll
};

/// Constant 'ACCELERATION_CONTROL_SPEED_LIMITER_ENGAGED'.
enum
{
  v2x_msgs__msg__AccelerationControl__ACCELERATION_CONTROL_SPEED_LIMITER_ENGAGED = 6ll
};

/// Struct defined in msg/AccelerationControl in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AccelerationControl
{
  int64_t acceleration_control;
} v2x_msgs__msg__AccelerationControl;

// Struct for a sequence of v2x_msgs__msg__AccelerationControl.
typedef struct v2x_msgs__msg__AccelerationControl__Sequence
{
  v2x_msgs__msg__AccelerationControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AccelerationControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_H_
