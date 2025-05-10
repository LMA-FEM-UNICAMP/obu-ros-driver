// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_STRAIGHT_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_STRAIGHT_ALLOWED = 0ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_LEFT_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_LEFT_ALLOWED = 1ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_RIGHT_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_RIGHT_ALLOWED = 2ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_UTURN_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_UTURN_ALLOWED = 3ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_LEFT_TURN_ON_RED_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_LEFT_TURN_ON_RED_ALLOWED = 4ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_RIGHT_TURN_ON_RED_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_RIGHT_TURN_ON_RED_ALLOWED = 5ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_LANE_CHANGE_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_LANE_CHANGE_ALLOWED = 6ll
};

/// Constant 'ALLOWED_MANEUVERS_MANEUVER_NO_STOPPING_ALLOWED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_MANEUVER_NO_STOPPING_ALLOWED = 7ll
};

/// Constant 'ALLOWED_MANEUVERS_YIELD_ALLWAYS_REQUIRED'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_YIELD_ALLWAYS_REQUIRED = 8ll
};

/// Constant 'ALLOWED_MANEUVERS_GO_WITH_HALT'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_GO_WITH_HALT = 9ll
};

/// Constant 'ALLOWED_MANEUVERS_CAUTION'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_CAUTION = 10ll
};

/// Constant 'ALLOWED_MANEUVERS_RESERVED1'.
enum
{
  v2x_msgs__msg__AllowedManeuvers__ALLOWED_MANEUVERS_RESERVED1 = 11ll
};

/// Struct defined in msg/AllowedManeuvers in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AllowedManeuvers
{
  int64_t allowed_maneuvers;
} v2x_msgs__msg__AllowedManeuvers;

// Struct for a sequence of v2x_msgs__msg__AllowedManeuvers.
typedef struct v2x_msgs__msg__AllowedManeuvers__Sequence
{
  v2x_msgs__msg__AllowedManeuvers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AllowedManeuvers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
