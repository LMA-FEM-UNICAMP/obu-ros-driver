// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LowFrequencyContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LOW_FREQUENCY_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LOW_FREQUENCY_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOW_FREQUENCY_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__LowFrequencyContainer__LOW_FREQUENCY_CONTAINER_NOTHING = 0ll
};

/// Constant 'LOW_FREQUENCY_CONTAINER_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY'.
enum
{
  v2x_msgs__msg__LowFrequencyContainer__LOW_FREQUENCY_CONTAINER_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY = 1ll
};

// Include directives for member types
// Member 'basic_vehicle_container_low_frequency'
#include "v2x_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.h"

/// Struct defined in msg/LowFrequencyContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LowFrequencyContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t low_frequency_container_container_select;
  /// container 1
  v2x_msgs__msg__BasicVehicleContainerLowFrequency basic_vehicle_container_low_frequency;
} v2x_msgs__msg__LowFrequencyContainer;

// Struct for a sequence of v2x_msgs__msg__LowFrequencyContainer.
typedef struct v2x_msgs__msg__LowFrequencyContainer__Sequence
{
  v2x_msgs__msg__LowFrequencyContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LowFrequencyContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LOW_FREQUENCY_CONTAINER__STRUCT_H_
