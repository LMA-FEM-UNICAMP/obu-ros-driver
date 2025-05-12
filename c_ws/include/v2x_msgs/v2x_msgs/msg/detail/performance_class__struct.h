// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PerformanceClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PERFORMANCE_CLASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PERFORMANCE_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PERFORMANCE_CLASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PerformanceClass__PERFORMANCE_CLASS_RANGE_MIN = 0ll
};

/// Constant 'PERFORMANCE_CLASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PerformanceClass__PERFORMANCE_CLASS_RANGE_MAX = 7ll
};

/// Constant 'PERFORMANCE_CLASS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__PerformanceClass__PERFORMANCE_CLASS_UNAVAILABLE = 0ll
};

/// Constant 'PERFORMANCE_CLASS_PERFORMANCE_CLASS_A'.
enum
{
  v2x_msgs__msg__PerformanceClass__PERFORMANCE_CLASS_PERFORMANCE_CLASS_A = 1ll
};

/// Constant 'PERFORMANCE_CLASS_PERFORMANCE_CLASS_B'.
enum
{
  v2x_msgs__msg__PerformanceClass__PERFORMANCE_CLASS_PERFORMANCE_CLASS_B = 2ll
};

/// Struct defined in msg/PerformanceClass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PerformanceClass
{
  int64_t performance_class;
} v2x_msgs__msg__PerformanceClass;

// Struct for a sequence of v2x_msgs__msg__PerformanceClass.
typedef struct v2x_msgs__msg__PerformanceClass__Sequence
{
  v2x_msgs__msg__PerformanceClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PerformanceClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PERFORMANCE_CLASS__STRUCT_H_
