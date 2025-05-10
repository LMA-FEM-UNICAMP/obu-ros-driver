// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleRole.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_ROLE_DEFAULT'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_DEFAULT = 0ll
};

/// Constant 'VEHICLE_ROLE_PUBLIC_TRANSPORT'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_PUBLIC_TRANSPORT = 1ll
};

/// Constant 'VEHICLE_ROLE_SPECIAL_TRANSPORT'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_SPECIAL_TRANSPORT = 2ll
};

/// Constant 'VEHICLE_ROLE_DANGEROUS_GOODS'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_DANGEROUS_GOODS = 3ll
};

/// Constant 'VEHICLE_ROLE_ROAD_WORK'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_ROAD_WORK = 4ll
};

/// Constant 'VEHICLE_ROLE_RESCUE'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_RESCUE = 5ll
};

/// Constant 'VEHICLE_ROLE_EMERGENCY'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_EMERGENCY = 6ll
};

/// Constant 'VEHICLE_ROLE_SAFETY_CAR'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_SAFETY_CAR = 7ll
};

/// Constant 'VEHICLE_ROLE_AGRICULTURE'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_AGRICULTURE = 8ll
};

/// Constant 'VEHICLE_ROLE_COMMERCIAL'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_COMMERCIAL = 9ll
};

/// Constant 'VEHICLE_ROLE_MILITARY'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_MILITARY = 10ll
};

/// Constant 'VEHICLE_ROLE_ROAD_OPERATOR'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_ROAD_OPERATOR = 11ll
};

/// Constant 'VEHICLE_ROLE_TAXI'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_TAXI = 12ll
};

/// Constant 'VEHICLE_ROLE_RESERVED1'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_RESERVED1 = 13ll
};

/// Constant 'VEHICLE_ROLE_RESERVED2'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_RESERVED2 = 14ll
};

/// Constant 'VEHICLE_ROLE_RESERVED3'.
enum
{
  v2x_msgs__msg__VehicleRole__VEHICLE_ROLE_RESERVED3 = 15ll
};

/// Struct defined in msg/VehicleRole in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleRole
{
  int64_t vehicle_role;
} v2x_msgs__msg__VehicleRole;

// Struct for a sequence of v2x_msgs__msg__VehicleRole.
typedef struct v2x_msgs__msg__VehicleRole__Sequence
{
  v2x_msgs__msg__VehicleRole * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleRole__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_H_
