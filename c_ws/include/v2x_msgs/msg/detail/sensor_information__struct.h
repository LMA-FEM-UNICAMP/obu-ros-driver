// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_id'
#include "v2x_msgs/msg/detail/identifier__struct.h"
// Member 'type'
#include "v2x_msgs/msg/detail/sensor_type__struct.h"
// Member 'detection_area'
#include "v2x_msgs/msg/detail/detection_area__struct.h"
// Member 'free_space_confidence'
#include "v2x_msgs/msg/detail/free_space_confidence__struct.h"

/// Struct defined in msg/SensorInformation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SensorInformation
{
  v2x_msgs__msg__Identifier sensor_id;
  v2x_msgs__msg__SensorType type;
  v2x_msgs__msg__DetectionArea detection_area;
  /// Optional Field
  bool free_space_confidence_present;
  v2x_msgs__msg__FreeSpaceConfidence free_space_confidence;
} v2x_msgs__msg__SensorInformation;

// Struct for a sequence of v2x_msgs__msg__SensorInformation.
typedef struct v2x_msgs__msg__SensorInformation__Sequence
{
  v2x_msgs__msg__SensorInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SensorInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_
