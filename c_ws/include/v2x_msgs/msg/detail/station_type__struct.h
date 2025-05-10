// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StationType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATION_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_RANGE_MIN = 0ll
};

/// Constant 'STATION_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_RANGE_MAX = 255ll
};

/// Constant 'STATION_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_UNKNOWN = 0ll
};

/// Constant 'STATION_TYPE_PEDESTRIAN'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_PEDESTRIAN = 1ll
};

/// Constant 'STATION_TYPE_CYCLIST'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_CYCLIST = 2ll
};

/// Constant 'STATION_TYPE_MOPED'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_MOPED = 3ll
};

/// Constant 'STATION_TYPE_MOTORCYCLE'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_MOTORCYCLE = 4ll
};

/// Constant 'STATION_TYPE_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_PASSENGER_CAR = 5ll
};

/// Constant 'STATION_TYPE_BUS'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_BUS = 6ll
};

/// Constant 'STATION_TYPE_LIGHT_TRUCK'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_LIGHT_TRUCK = 7ll
};

/// Constant 'STATION_TYPE_HEAVY_TRUCK'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_HEAVY_TRUCK = 8ll
};

/// Constant 'STATION_TYPE_TRAILER'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_TRAILER = 9ll
};

/// Constant 'STATION_TYPE_SPECIAL_VEHICLES'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_SPECIAL_VEHICLES = 10ll
};

/// Constant 'STATION_TYPE_TRAM'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_TRAM = 11ll
};

/// Constant 'STATION_TYPE_ROAD_SIDE_UNIT'.
enum
{
  v2x_msgs__msg__StationType__STATION_TYPE_ROAD_SIDE_UNIT = 15ll
};

/// Struct defined in msg/StationType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StationType
{
  int64_t station_type;
} v2x_msgs__msg__StationType;

// Struct for a sequence of v2x_msgs__msg__StationType.
typedef struct v2x_msgs__msg__StationType__Sequence
{
  v2x_msgs__msg__StationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_H_
