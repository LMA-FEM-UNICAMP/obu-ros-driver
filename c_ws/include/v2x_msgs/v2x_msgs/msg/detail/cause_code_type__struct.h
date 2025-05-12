// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CauseCodeType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CAUSE_CODE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CAUSE_CODE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAUSE_CODE_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_RANGE_MIN = 0ll
};

/// Constant 'CAUSE_CODE_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_RANGE_MAX = 255ll
};

/// Constant 'CAUSE_CODE_TYPE_RESERVED'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_RESERVED = 0ll
};

/// Constant 'CAUSE_CODE_TYPE_TRAFFIC_CONDITION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_TRAFFIC_CONDITION = 1ll
};

/// Constant 'CAUSE_CODE_TYPE_ACCIDENT'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ACCIDENT = 2ll
};

/// Constant 'CAUSE_CODE_TYPE_ROADWORKS'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ROADWORKS = 3ll
};

/// Constant 'CAUSE_CODE_TYPE_IMPASSABILITY'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_IMPASSABILITY = 5ll
};

/// Constant 'CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_ADHESION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_ADHESION = 6ll
};

/// Constant 'CAUSE_CODE_TYPE_AQUAPLANNNING'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_AQUAPLANNNING = 7ll
};

/// Constant 'CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_SURFACE_CONDITION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_SURFACE_CONDITION = 9ll
};

/// Constant 'CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD = 10ll
};

/// Constant 'CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD = 11ll
};

/// Constant 'CAUSE_CODE_TYPE_HUMAN_PRESENCE_ON_THE_ROAD'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HUMAN_PRESENCE_ON_THE_ROAD = 12ll
};

/// Constant 'CAUSE_CODE_TYPE_WRONG_WAY_DRIVING'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_WRONG_WAY_DRIVING = 14ll
};

/// Constant 'CAUSE_CODE_TYPE_RESCUE_AND_RECOVERY_WORK_IN_PROGRESS'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_RESCUE_AND_RECOVERY_WORK_IN_PROGRESS = 15ll
};

/// Constant 'CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_EXTREME_WEATHER_CONDITION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_EXTREME_WEATHER_CONDITION = 17ll
};

/// Constant 'CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_VISIBILITY'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_VISIBILITY = 18ll
};

/// Constant 'CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_PRECIPITATION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_ADVERSE_WEATHER_CONDITION_PRECIPITATION = 19ll
};

/// Constant 'CAUSE_CODE_TYPE_SLOW_VEHICLE'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_SLOW_VEHICLE = 26ll
};

/// Constant 'CAUSE_CODE_TYPE_DANGEROUS_END_OF_QUEUE'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_DANGEROUS_END_OF_QUEUE = 27ll
};

/// Constant 'CAUSE_CODE_TYPE_VEHICLE_BREAKDOWN'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_VEHICLE_BREAKDOWN = 91ll
};

/// Constant 'CAUSE_CODE_TYPE_POST_CRASH'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_POST_CRASH = 92ll
};

/// Constant 'CAUSE_CODE_TYPE_HUMAN_PROBLEM'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HUMAN_PROBLEM = 93ll
};

/// Constant 'CAUSE_CODE_TYPE_STATIONARY_VEHICLE'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_STATIONARY_VEHICLE = 94ll
};

/// Constant 'CAUSE_CODE_TYPE_EMERGENCY_VEHICLE_APPROACHING'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_EMERGENCY_VEHICLE_APPROACHING = 95ll
};

/// Constant 'CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_DANGEROUS_CURVE'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_HAZARDOUS_LOCATION_DANGEROUS_CURVE = 96ll
};

/// Constant 'CAUSE_CODE_TYPE_COLLISION_RISK'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_COLLISION_RISK = 97ll
};

/// Constant 'CAUSE_CODE_TYPE_SIGNAL_VIOLATION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_SIGNAL_VIOLATION = 98ll
};

/// Constant 'CAUSE_CODE_TYPE_DANGEROUS_SITUATION'.
enum
{
  v2x_msgs__msg__CauseCodeType__CAUSE_CODE_TYPE_DANGEROUS_SITUATION = 99ll
};

/// Struct defined in msg/CauseCodeType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CauseCodeType
{
  int64_t cause_code_type;
} v2x_msgs__msg__CauseCodeType;

// Struct for a sequence of v2x_msgs__msg__CauseCodeType.
typedef struct v2x_msgs__msg__CauseCodeType__Sequence
{
  v2x_msgs__msg__CauseCodeType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CauseCodeType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CAUSE_CODE_TYPE__STRUCT_H_
