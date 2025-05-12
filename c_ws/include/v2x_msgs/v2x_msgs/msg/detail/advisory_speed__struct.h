// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "v2x_msgs/msg/detail/advisory_speed_type__struct.h"
// Member 'speed'
#include "v2x_msgs/msg/detail/speed_advice__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/speed_confidence_dsrc__struct.h"
// Member 'distance'
#include "v2x_msgs/msg/detail/zone_length__struct.h"
// Member 'rest_class'
#include "v2x_msgs/msg/detail/restriction_class_id__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_advisory_speed__struct.h"

/// Struct defined in msg/AdvisorySpeed in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__AdvisorySpeed
{
  v2x_msgs__msg__AdvisorySpeedType type;
  /// Optional Field
  bool speed_present;
  v2x_msgs__msg__SpeedAdvice speed;
  /// Optional Field
  bool confidence_present;
  v2x_msgs__msg__SpeedConfidenceDSRC confidence;
  /// Optional Field
  bool distance_present;
  v2x_msgs__msg__ZoneLength distance;
  /// Parser generates RestrictionClassID class, but class is a c++ key word, therefor not supported
  /// Optional Field
  bool class_present;
  v2x_msgs__msg__RestrictionClassID rest_class;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegAdvisorySpeed__Sequence regional;
} v2x_msgs__msg__AdvisorySpeed;

// Struct for a sequence of v2x_msgs__msg__AdvisorySpeed.
typedef struct v2x_msgs__msg__AdvisorySpeed__Sequence
{
  v2x_msgs__msg__AdvisorySpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AdvisorySpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_H_
