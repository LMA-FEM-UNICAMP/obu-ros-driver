// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_RANGE_MIN = 0ll
};

/// Constant 'LANE_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_RANGE_MAX = 31ll
};

/// Constant 'LANE_TYPE_TRAFFIC'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_TRAFFIC = 0ll
};

/// Constant 'LANE_TYPE_THROUGH'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_THROUGH = 1ll
};

/// Constant 'LANE_TYPE_REVERSIBLE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_REVERSIBLE = 2ll
};

/// Constant 'LANE_TYPE_ACCELERATION'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_ACCELERATION = 3ll
};

/// Constant 'LANE_TYPE_DECELERATION'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_DECELERATION = 4ll
};

/// Constant 'LANE_TYPE_LEFT_HAND_TURNING'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_LEFT_HAND_TURNING = 5ll
};

/// Constant 'LANE_TYPE_RIGHT_HAND_TURNING'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_RIGHT_HAND_TURNING = 6ll
};

/// Constant 'LANE_TYPE_DEDICATED_VEHICLE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_DEDICATED_VEHICLE = 7ll
};

/// Constant 'LANE_TYPE_BUS'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_BUS = 8ll
};

/// Constant 'LANE_TYPE_TAXI'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_TAXI = 9ll
};

/// Constant 'LANE_TYPE_HOV'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_HOV = 10ll
};

/// Constant 'LANE_TYPE_HOT'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_HOT = 11ll
};

/// Constant 'LANE_TYPE_PEDESTRIAN'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_PEDESTRIAN = 12ll
};

/// Constant 'LANE_TYPE_BIKE_LANE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_BIKE_LANE = 13ll
};

/// Constant 'LANE_TYPE_MEDIAN'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_MEDIAN = 14ll
};

/// Constant 'LANE_TYPE_STRIPING'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_STRIPING = 15ll
};

/// Constant 'LANE_TYPE_TRACKED_VEHICLE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_TRACKED_VEHICLE = 16ll
};

/// Constant 'LANE_TYPE_PARKING'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_PARKING = 17ll
};

/// Constant 'LANE_TYPE_EMERGENCY'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_EMERGENCY = 18ll
};

/// Constant 'LANE_TYPE_VERGE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_VERGE = 19ll
};

/// Constant 'LANE_TYPE_MINIMUM_RISK_MANOEUVRE'.
enum
{
  v2x_msgs__msg__LaneType__LANE_TYPE_MINIMUM_RISK_MANOEUVRE = 20ll
};

/// Struct defined in msg/LaneType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneType
{
  int64_t lane_type;
} v2x_msgs__msg__LaneType;

// Struct for a sequence of v2x_msgs__msg__LaneType.
typedef struct v2x_msgs__msg__LaneType__Sequence
{
  v2x_msgs__msg__LaneType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_H_
