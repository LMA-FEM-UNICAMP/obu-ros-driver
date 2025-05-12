// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BasicVehicleRole.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BASIC_VEHICLE_ROLE_BASIC_VEHICLE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_BASIC_VEHICLE = 0ll
};

/// Constant 'BASIC_VEHICLE_ROLE_PUBLIC_TRANSPORT'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_PUBLIC_TRANSPORT = 1ll
};

/// Constant 'BASIC_VEHICLE_ROLE_SPECIAL_TRANSPORT'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_SPECIAL_TRANSPORT = 2ll
};

/// Constant 'BASIC_VEHICLE_ROLE_DANGEROUS_GOODS'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_DANGEROUS_GOODS = 3ll
};

/// Constant 'BASIC_VEHICLE_ROLE_ROAD_WORK'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_ROAD_WORK = 4ll
};

/// Constant 'BASIC_VEHICLE_ROLE_ROAD_RESCUE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_ROAD_RESCUE = 5ll
};

/// Constant 'BASIC_VEHICLE_ROLE_EMERGENCY'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_EMERGENCY = 6ll
};

/// Constant 'BASIC_VEHICLE_ROLE_SAFETY_CAR'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_SAFETY_CAR = 7ll
};

/// Constant 'BASIC_VEHICLE_ROLE_NONE_UNKNOWN'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_NONE_UNKNOWN = 8ll
};

/// Constant 'BASIC_VEHICLE_ROLE_TRUCK'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_TRUCK = 9ll
};

/// Constant 'BASIC_VEHICLE_ROLE_MOTORCYCLE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_MOTORCYCLE = 10ll
};

/// Constant 'BASIC_VEHICLE_ROLE_ROAD_SIDE_SOURCE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_ROAD_SIDE_SOURCE = 11ll
};

/// Constant 'BASIC_VEHICLE_ROLE_POLICE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_POLICE = 12ll
};

/// Constant 'BASIC_VEHICLE_ROLE_FIRE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_FIRE = 13ll
};

/// Constant 'BASIC_VEHICLE_ROLE_AMBULANCE'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_AMBULANCE = 14ll
};

/// Constant 'BASIC_VEHICLE_ROLE_DOT'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_DOT = 15ll
};

/// Constant 'BASIC_VEHICLE_ROLE_TRANSIT'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_TRANSIT = 16ll
};

/// Constant 'BASIC_VEHICLE_ROLE_SLOW_MOVING'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_SLOW_MOVING = 17ll
};

/// Constant 'BASIC_VEHICLE_ROLE_STOP_NGO'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_STOP_NGO = 18ll
};

/// Constant 'BASIC_VEHICLE_ROLE_CYCLIST'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_CYCLIST = 19ll
};

/// Constant 'BASIC_VEHICLE_ROLE_PEDESTRIAN'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_PEDESTRIAN = 20ll
};

/// Constant 'BASIC_VEHICLE_ROLE_NON_MOTORIZED'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_NON_MOTORIZED = 21ll
};

/// Constant 'BASIC_VEHICLE_ROLE_MILITARY'.
enum
{
  v2x_msgs__msg__BasicVehicleRole__BASIC_VEHICLE_ROLE_MILITARY = 22ll
};

/// Struct defined in msg/BasicVehicleRole in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BasicVehicleRole
{
  int64_t basic_vehicle_role;
} v2x_msgs__msg__BasicVehicleRole;

// Struct for a sequence of v2x_msgs__msg__BasicVehicleRole.
typedef struct v2x_msgs__msg__BasicVehicleRole__Sequence
{
  v2x_msgs__msg__BasicVehicleRole * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BasicVehicleRole__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_ROLE__STRUCT_H_
