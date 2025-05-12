// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_LIMIT_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_UNKNOWN = 0ll
};

/// Constant 'SPEED_LIMIT_TYPE_MAX_SPEED_IN_SCHOOL_ZONE'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_MAX_SPEED_IN_SCHOOL_ZONE = 1ll
};

/// Constant 'SPEED_LIMIT_TYPE_MAX_SPEED_IN_SCHOOL_ZONE_WHEN_CHILDREN_ARE_PRESENT'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_MAX_SPEED_IN_SCHOOL_ZONE_WHEN_CHILDREN_ARE_PRESENT = 2ll
};

/// Constant 'SPEED_LIMIT_TYPE_MAX_SPEED_IN_CONSTRUCTION_ZONE'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_MAX_SPEED_IN_CONSTRUCTION_ZONE = 3ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLE_MIN_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLE_MIN_SPEED = 4ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLE_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLE_MAX_SPEED = 5ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLE_NIGHT_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLE_NIGHT_MAX_SPEED = 6ll
};

/// Constant 'SPEED_LIMIT_TYPE_TRUCK_MIN_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_TRUCK_MIN_SPEED = 7ll
};

/// Constant 'SPEED_LIMIT_TYPE_TRUCK_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_TRUCK_MAX_SPEED = 8ll
};

/// Constant 'SPEED_LIMIT_TYPE_TRUCK_NIGHT_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_TRUCK_NIGHT_MAX_SPEED = 9ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_MIN_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_MIN_SPEED = 10ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_MAX_SPEED = 11ll
};

/// Constant 'SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_NIGHT_MAX_SPEED'.
enum
{
  v2x_msgs__msg__SpeedLimitType__SPEED_LIMIT_TYPE_VEHICLES_WITH_TRAILERS_NIGHT_MAX_SPEED = 12ll
};

/// Struct defined in msg/SpeedLimitType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedLimitType
{
  int64_t speed_limit_type;
} v2x_msgs__msg__SpeedLimitType;

// Struct for a sequence of v2x_msgs__msg__SpeedLimitType.
typedef struct v2x_msgs__msg__SpeedLimitType__Sequence
{
  v2x_msgs__msg__SpeedLimitType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedLimitType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
