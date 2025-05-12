// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CompleteVehicleCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COMPLETE_VEHICLE_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COMPLETE_VEHICLE_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tractor'
#include "v2x_msgs/msg/detail/tractor_characteristics__struct.h"
// Member 'trailer'
#include "v2x_msgs/msg/detail/trailer_characteristics_list__struct.h"
// Member 'train'
#include "v2x_msgs/msg/detail/train_characteristics__struct.h"

/// Struct defined in msg/CompleteVehicleCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CompleteVehicleCharacteristics
{
  /// Optional Field
  bool tractor_present;
  v2x_msgs__msg__TractorCharacteristics tractor;
  /// Optional Field
  bool trailer_present;
  v2x_msgs__msg__TrailerCharacteristicsList trailer;
  /// Optional Field
  bool train_present;
  v2x_msgs__msg__TrainCharacteristics train;
} v2x_msgs__msg__CompleteVehicleCharacteristics;

// Struct for a sequence of v2x_msgs__msg__CompleteVehicleCharacteristics.
typedef struct v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence
{
  v2x_msgs__msg__CompleteVehicleCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CompleteVehicleCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COMPLETE_VEHICLE_CHARACTERISTICS__STRUCT_H_
