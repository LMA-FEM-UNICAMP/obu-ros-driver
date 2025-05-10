// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_TYPE_NONE'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_NONE = 0ll
};

/// Constant 'VEHICLE_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_UNKNOWN = 1ll
};

/// Constant 'VEHICLE_TYPE_SPECIAL'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_SPECIAL = 2ll
};

/// Constant 'VEHICLE_TYPE_MOTO'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_MOTO = 3ll
};

/// Constant 'VEHICLE_TYPE_CAR'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_CAR = 4ll
};

/// Constant 'VEHICLE_TYPE_CAR_OTHER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_CAR_OTHER = 5ll
};

/// Constant 'VEHICLE_TYPE_BUS'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_BUS = 6ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT2'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT2 = 7ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT3'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT3 = 8ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT4'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT4 = 9ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT4TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT4TRAILER = 10ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT5TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT5TRAILER = 11ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT6TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT6TRAILER = 12ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT5MULTI_TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT5MULTI_TRAILER = 13ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT6MULTI_TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT6MULTI_TRAILER = 14ll
};

/// Constant 'VEHICLE_TYPE_AXLE_CNT7MULTI_TRAILER'.
enum
{
  v2x_msgs__msg__VehicleType__VEHICLE_TYPE_AXLE_CNT7MULTI_TRAILER = 15ll
};

/// Struct defined in msg/VehicleType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleType
{
  int64_t vehicle_type;
} v2x_msgs__msg__VehicleType;

// Struct for a sequence of v2x_msgs__msg__VehicleType.
typedef struct v2x_msgs__msg__VehicleType__Sequence
{
  v2x_msgs__msg__VehicleType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_
