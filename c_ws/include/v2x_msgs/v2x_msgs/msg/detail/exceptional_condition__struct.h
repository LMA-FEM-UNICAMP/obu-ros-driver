// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ExceptionalCondition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EXCEPTIONAL_CONDITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EXCEPTIONAL_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXCEPTIONAL_CONDITION_UNKNOWN'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_UNKNOWN = 0ll
};

/// Constant 'EXCEPTIONAL_CONDITION_PUBLIC_TRANSPORT_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_PUBLIC_TRANSPORT_PRIORITY = 1ll
};

/// Constant 'EXCEPTIONAL_CONDITION_EMERGENCY_VEHICLE_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_EMERGENCY_VEHICLE_PRIORITY = 2ll
};

/// Constant 'EXCEPTIONAL_CONDITION_TRAIN_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_TRAIN_PRIORITY = 3ll
};

/// Constant 'EXCEPTIONAL_CONDITION_BRIDGE_OPEN'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_BRIDGE_OPEN = 4ll
};

/// Constant 'EXCEPTIONAL_CONDITION_VEHICLE_HEIGHT'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_VEHICLE_HEIGHT = 5ll
};

/// Constant 'EXCEPTIONAL_CONDITION_WEATHER'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_WEATHER = 6ll
};

/// Constant 'EXCEPTIONAL_CONDITION_TRAFFIC_JAM'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_TRAFFIC_JAM = 7ll
};

/// Constant 'EXCEPTIONAL_CONDITION_TUNNEL_CLOSURE'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_TUNNEL_CLOSURE = 8ll
};

/// Constant 'EXCEPTIONAL_CONDITION_METERING_ACTIVE'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_METERING_ACTIVE = 9ll
};

/// Constant 'EXCEPTIONAL_CONDITION_TRUCK_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_TRUCK_PRIORITY = 10ll
};

/// Constant 'EXCEPTIONAL_CONDITION_BICYCLE_PLATOON_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_BICYCLE_PLATOON_PRIORITY = 11ll
};

/// Constant 'EXCEPTIONAL_CONDITION_VEHICLE_PLATOON_PRIORITY'.
enum
{
  v2x_msgs__msg__ExceptionalCondition__EXCEPTIONAL_CONDITION_VEHICLE_PLATOON_PRIORITY = 12ll
};

/// Struct defined in msg/ExceptionalCondition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ExceptionalCondition
{
  int64_t exceptional_condition;
} v2x_msgs__msg__ExceptionalCondition;

// Struct for a sequence of v2x_msgs__msg__ExceptionalCondition.
typedef struct v2x_msgs__msg__ExceptionalCondition__Sequence
{
  v2x_msgs__msg__ExceptionalCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ExceptionalCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EXCEPTIONAL_CONDITION__STRUCT_H_
