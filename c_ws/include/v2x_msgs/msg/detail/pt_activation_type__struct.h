// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PtActivationType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PT_ACTIVATION_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PtActivationType__PT_ACTIVATION_TYPE_RANGE_MIN = 0ll
};

/// Constant 'PT_ACTIVATION_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PtActivationType__PT_ACTIVATION_TYPE_RANGE_MAX = 255ll
};

/// Constant 'PT_ACTIVATION_TYPE_UNDEFINED_CODING_TYPE'.
enum
{
  v2x_msgs__msg__PtActivationType__PT_ACTIVATION_TYPE_UNDEFINED_CODING_TYPE = 0ll
};

/// Constant 'PT_ACTIVATION_TYPE_R09_16CODING_TYPE'.
enum
{
  v2x_msgs__msg__PtActivationType__PT_ACTIVATION_TYPE_R09_16CODING_TYPE = 1ll
};

/// Constant 'PT_ACTIVATION_TYPE_VDV_50149CODING_TYPE'.
enum
{
  v2x_msgs__msg__PtActivationType__PT_ACTIVATION_TYPE_VDV_50149CODING_TYPE = 2ll
};

/// Struct defined in msg/PtActivationType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PtActivationType
{
  int64_t pt_activation_type;
} v2x_msgs__msg__PtActivationType;

// Struct for a sequence of v2x_msgs__msg__PtActivationType.
typedef struct v2x_msgs__msg__PtActivationType__Sequence
{
  v2x_msgs__msg__PtActivationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PtActivationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_TYPE__STRUCT_H_
