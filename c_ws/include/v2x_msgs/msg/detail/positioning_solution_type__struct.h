// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PositioningSolutionType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITIONING_SOLUTION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITIONING_SOLUTION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITIONING_SOLUTION_TYPE_NO_POSITIONING_SOLUTION'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_NO_POSITIONING_SOLUTION = 0ll
};

/// Constant 'POSITIONING_SOLUTION_TYPE_S_GNSS'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_S_GNSS = 1ll
};

/// Constant 'POSITIONING_SOLUTION_TYPE_D_GNSS'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_D_GNSS = 2ll
};

/// Constant 'POSITIONING_SOLUTION_TYPE_S_GNSSPLUS_DR'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_S_GNSSPLUS_DR = 3ll
};

/// Constant 'POSITIONING_SOLUTION_TYPE_D_GNSSPLUS_DR'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_D_GNSSPLUS_DR = 4ll
};

/// Constant 'POSITIONING_SOLUTION_TYPE_D_R'.
enum
{
  v2x_msgs__msg__PositioningSolutionType__POSITIONING_SOLUTION_TYPE_D_R = 5ll
};

/// Struct defined in msg/PositioningSolutionType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PositioningSolutionType
{
  int64_t positioning_solution_type;
} v2x_msgs__msg__PositioningSolutionType;

// Struct for a sequence of v2x_msgs__msg__PositioningSolutionType.
typedef struct v2x_msgs__msg__PositioningSolutionType__Sequence
{
  v2x_msgs__msg__PositioningSolutionType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PositioningSolutionType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITIONING_SOLUTION_TYPE__STRUCT_H_
