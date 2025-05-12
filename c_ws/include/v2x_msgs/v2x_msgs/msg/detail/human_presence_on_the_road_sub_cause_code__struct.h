// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HumanPresenceOnTheRoadSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_CHILDREN_ON_ROADWAY'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_CHILDREN_ON_ROADWAY = 1ll
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_CYCLIST_ON_ROADWAY'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_CYCLIST_ON_ROADWAY = 2ll
};

/// Constant 'HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_MOTORCYCLIST_ON_ROADWAY'.
enum
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE_MOTORCYCLIST_ON_ROADWAY = 3ll
};

/// Struct defined in msg/HumanPresenceOnTheRoadSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode
{
  int64_t human_presence_on_the_road_sub_cause_code;
} v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode.
typedef struct v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__Sequence
{
  v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HumanPresenceOnTheRoadSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HUMAN_PRESENCE_ON_THE_ROAD_SUB_CAUSE_CODE__STRUCT_H_
