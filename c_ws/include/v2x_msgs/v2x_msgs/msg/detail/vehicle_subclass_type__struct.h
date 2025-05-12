// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleSubclassType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_SUBCLASS_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_SUBCLASS_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_SUBCLASS_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_RANGE_MIN = 0ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_RANGE_MAX = 255ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_UNKNOWN = 0ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_MOPED'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_MOPED = 1ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_MOTORCYCLE'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_MOTORCYCLE = 2ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_PASSENGER_CAR = 3ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_BUS'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_BUS = 4ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_LIGHT_TRUCK'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_LIGHT_TRUCK = 5ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_HEAVY_TRUCK'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_HEAVY_TRUCK = 6ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_TRAILER'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_TRAILER = 7ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_SPECIAL_VEHICLES'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_SPECIAL_VEHICLES = 8ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_TRAM'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_TRAM = 9ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_EMERGENCY_VEHICLE'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_EMERGENCY_VEHICLE = 10ll
};

/// Constant 'VEHICLE_SUBCLASS_TYPE_AGRICULTURAL'.
enum
{
  v2x_msgs__msg__VehicleSubclassType__VEHICLE_SUBCLASS_TYPE_AGRICULTURAL = 11ll
};

/// Struct defined in msg/VehicleSubclassType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleSubclassType
{
  int64_t vehicle_subclass_type;
} v2x_msgs__msg__VehicleSubclassType;

// Struct for a sequence of v2x_msgs__msg__VehicleSubclassType.
typedef struct v2x_msgs__msg__VehicleSubclassType__Sequence
{
  v2x_msgs__msg__VehicleSubclassType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleSubclassType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_SUBCLASS_TYPE__STRUCT_H_
