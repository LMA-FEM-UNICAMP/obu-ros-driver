// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SetMMIRq.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SET_MMI_RQ__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SET_MMI_RQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SET_MMIRQ_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_RANGE_MIN = 0ll
};

/// Constant 'SET_MMIRQ_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_RANGE_MAX = 255ll
};

/// Constant 'SET_MMIRQ_OK'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_OK = 0ll
};

/// Constant 'SET_MMIRQ_NOK'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_NOK = 1ll
};

/// Constant 'SET_MMIRQ_CONTACT_OPERATOR'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_CONTACT_OPERATOR = 2ll
};

/// Constant 'SET_MMIRQ_NO_SIGNALLING'.
enum
{
  v2x_msgs__msg__SetMMIRq__SET_MMIRQ_NO_SIGNALLING = 255ll
};

/// Struct defined in msg/SetMMIRq in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SetMMIRq
{
  int64_t set_mmirq;
} v2x_msgs__msg__SetMMIRq;

// Struct for a sequence of v2x_msgs__msg__SetMMIRq.
typedef struct v2x_msgs__msg__SetMMIRq__Sequence
{
  v2x_msgs__msg__SetMMIRq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SetMMIRq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SET_MMI_RQ__STRUCT_H_
