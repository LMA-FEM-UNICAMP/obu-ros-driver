// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ValidityPeriods.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VALIDITY_PERIODS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VALIDITY_PERIODS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'periods'
#include "v2x_msgs/msg/detail/international_sign_applicable_period__struct.h"

/// Struct defined in msg/ValidityPeriods in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ValidityPeriods
{
  ///  InternationalSignapplicablePeriod -> InternationalSignApplicablePeriod
  /// size(1..8)
  v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence periods;
} v2x_msgs__msg__ValidityPeriods;

// Struct for a sequence of v2x_msgs__msg__ValidityPeriods.
typedef struct v2x_msgs__msg__ValidityPeriods__Sequence
{
  v2x_msgs__msg__ValidityPeriods * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ValidityPeriods__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VALIDITY_PERIODS__STRUCT_H_
