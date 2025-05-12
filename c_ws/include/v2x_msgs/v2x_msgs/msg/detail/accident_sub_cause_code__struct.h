// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AccidentSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACCIDENT_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACCIDENT_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_MULTI_VEHICLE_ACCIDENT'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_MULTI_VEHICLE_ACCIDENT = 1ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_HEAVY_ACCIDENT'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_HEAVY_ACCIDENT = 2ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_LORRY'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_LORRY = 3ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_BUS'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_BUS = 4ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_HAZARDOUS_MATERIALS'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_INVOLVING_HAZARDOUS_MATERIALS = 5ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_ON_OPPOSITE_LANE'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_ACCIDENT_ON_OPPOSITE_LANE = 6ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_UNSECURED_ACCIDENT'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_UNSECURED_ACCIDENT = 7ll
};

/// Constant 'ACCIDENT_SUB_CAUSE_CODE_ASSISTANCE_REQUESTED'.
enum
{
  v2x_msgs__msg__AccidentSubCauseCode__ACCIDENT_SUB_CAUSE_CODE_ASSISTANCE_REQUESTED = 8ll
};

/// Struct defined in msg/AccidentSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AccidentSubCauseCode
{
  int64_t accident_sub_cause_code;
} v2x_msgs__msg__AccidentSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__AccidentSubCauseCode.
typedef struct v2x_msgs__msg__AccidentSubCauseCode__Sequence
{
  v2x_msgs__msg__AccidentSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AccidentSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACCIDENT_SUB_CAUSE_CODE__STRUCT_H_
