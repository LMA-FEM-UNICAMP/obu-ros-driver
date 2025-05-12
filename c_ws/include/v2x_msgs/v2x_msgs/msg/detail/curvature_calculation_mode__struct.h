// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CurvatureCalculationMode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CURVATURE_CALCULATION_MODE_YAW_RATE_USED'.
enum
{
  v2x_msgs__msg__CurvatureCalculationMode__CURVATURE_CALCULATION_MODE_YAW_RATE_USED = 0ll
};

/// Constant 'CURVATURE_CALCULATION_MODE_YAW_RATE_NOT_USED'.
enum
{
  v2x_msgs__msg__CurvatureCalculationMode__CURVATURE_CALCULATION_MODE_YAW_RATE_NOT_USED = 1ll
};

/// Constant 'CURVATURE_CALCULATION_MODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__CurvatureCalculationMode__CURVATURE_CALCULATION_MODE_UNAVAILABLE = 2ll
};

/// Struct defined in msg/CurvatureCalculationMode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CurvatureCalculationMode
{
  int64_t curvature_calculation_mode;
} v2x_msgs__msg__CurvatureCalculationMode;

// Struct for a sequence of v2x_msgs__msg__CurvatureCalculationMode.
typedef struct v2x_msgs__msg__CurvatureCalculationMode__Sequence
{
  v2x_msgs__msg__CurvatureCalculationMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CurvatureCalculationMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_
