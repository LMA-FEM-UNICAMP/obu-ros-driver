// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HazardousLocationDangerousCurveSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_DANGEROUS_LEFT_TURN_CURVE'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_DANGEROUS_LEFT_TURN_CURVE = 1ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_DANGEROUS_RIGHT_TURN_CURVE'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_DANGEROUS_RIGHT_TURN_CURVE = 2ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_UNKNOWN_TURNING_DIRECTION'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_UNKNOWN_TURNING_DIRECTION = 3ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_LEFT_TURN'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_LEFT_TURN = 4ll
};

/// Constant 'HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_RIGHT_TURN'.
enum
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__HAZARDOUS_LOCATIONDANGEROUS_CURVE_SUB_CAUSE_CODE_MULTIPLE_CURVES_STARTING_WITH_RIGHT_TURN = 5ll
};

/// Struct defined in msg/HazardousLocationDangerousCurveSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode
{
  int64_t hazardous_location_dangerous_curve_sub_cause_code;
} v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode.
typedef struct v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence
{
  v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HazardousLocationDangerousCurveSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HAZARDOUS_LOCATION_DANGEROUS_CURVE_SUB_CAUSE_CODE__STRUCT_H_
