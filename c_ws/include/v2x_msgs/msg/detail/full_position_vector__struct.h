// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'utc_time'
#include "v2x_msgs/msg/detail/d_date_time__struct.h"
// Member 'vector_long'
#include "v2x_msgs/msg/detail/longitude__struct.h"
// Member 'vector_lat'
#include "v2x_msgs/msg/detail/latitude__struct.h"
// Member 'elevation'
#include "v2x_msgs/msg/detail/elevation__struct.h"
// Member 'heading'
#include "v2x_msgs/msg/detail/heading_dsrc__struct.h"
// Member 'speed'
#include "v2x_msgs/msg/detail/transmission_and_speed__struct.h"
// Member 'pos_accuracy'
#include "v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'time_confidence'
#include "v2x_msgs/msg/detail/time_confidence__struct.h"
// Member 'pos_confidence'
#include "v2x_msgs/msg/detail/position_confidence_set__struct.h"
// Member 'speed_confidence'
#include "v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.h"

/// Struct defined in msg/FullPositionVector in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__FullPositionVector
{
  /// Added vector in front of long & lat
  /// Optional Field
  bool utc_time_present;
  v2x_msgs__msg__DDateTime utc_time;
  v2x_msgs__msg__Longitude vector_long;
  v2x_msgs__msg__Latitude vector_lat;
  /// Optional Field
  bool elevation_present;
  v2x_msgs__msg__Elevation elevation;
  /// Optional Field
  bool heading_present;
  v2x_msgs__msg__HeadingDSRC heading;
  /// Optional Field
  bool speed_present;
  v2x_msgs__msg__TransmissionAndSpeed speed;
  /// Optional Field
  bool pos_accuracy_present;
  v2x_msgs__msg__PositionalAccuracy pos_accuracy;
  /// Optional Field
  bool time_confidence_present;
  v2x_msgs__msg__TimeConfidence time_confidence;
  /// Optional Field
  bool pos_confidence_present;
  v2x_msgs__msg__PositionConfidenceSet pos_confidence;
  /// Optional Field
  bool speed_confidence_present;
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence speed_confidence;
} v2x_msgs__msg__FullPositionVector;

// Struct for a sequence of v2x_msgs__msg__FullPositionVector.
typedef struct v2x_msgs__msg__FullPositionVector__Sequence
{
  v2x_msgs__msg__FullPositionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FullPositionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_H_
