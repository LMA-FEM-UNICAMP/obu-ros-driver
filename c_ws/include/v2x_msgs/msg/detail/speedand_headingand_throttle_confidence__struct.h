// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'heading'
#include "v2x_msgs/msg/detail/heading_confidence_dsrc__struct.h"
// Member 'speed'
#include "v2x_msgs/msg/detail/speed_confidence_dsrc__struct.h"
// Member 'throttle'
#include "v2x_msgs/msg/detail/throttle_confidence__struct.h"

/// Struct defined in msg/SpeedandHeadingandThrottleConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedandHeadingandThrottleConfidence
{
  v2x_msgs__msg__HeadingConfidenceDSRC heading;
  v2x_msgs__msg__SpeedConfidenceDSRC speed;
  v2x_msgs__msg__ThrottleConfidence throttle;
} v2x_msgs__msg__SpeedandHeadingandThrottleConfidence;

// Struct for a sequence of v2x_msgs__msg__SpeedandHeadingandThrottleConfidence.
typedef struct v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence
{
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
