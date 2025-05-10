// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadworksSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROADWORKS_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROADWORKS_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_MAJOR_ROADWORKS'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_MAJOR_ROADWORKS = 1ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_ROAD_MARKING_WORK'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_ROAD_MARKING_WORK = 2ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_SLOW_MOVING_ROAD_MAINTENANCE'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_SLOW_MOVING_ROAD_MAINTENANCE = 3ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_SHORT_TERM_STATIONARY_ROADWORKS'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_SHORT_TERM_STATIONARY_ROADWORKS = 4ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_STREET_CLEANING'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_STREET_CLEANING = 5ll
};

/// Constant 'ROADWORKS_SUB_CAUSE_CODE_WINTER_SERVICE'.
enum
{
  v2x_msgs__msg__RoadworksSubCauseCode__ROADWORKS_SUB_CAUSE_CODE_WINTER_SERVICE = 6ll
};

/// Struct defined in msg/RoadworksSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadworksSubCauseCode
{
  int64_t roadworks_sub_cause_code;
} v2x_msgs__msg__RoadworksSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__RoadworksSubCauseCode.
typedef struct v2x_msgs__msg__RoadworksSubCauseCode__Sequence
{
  v2x_msgs__msg__RoadworksSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadworksSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROADWORKS_SUB_CAUSE_CODE__STRUCT_H_
