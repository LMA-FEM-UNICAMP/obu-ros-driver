// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HighFrequencyContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HIGH_FREQUENCY_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HIGH_FREQUENCY_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HIGH_FREQUENCY_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__HighFrequencyContainer__HIGH_FREQUENCY_CONTAINER_NOTHING = 0ll
};

/// Constant 'HIGH_FREQUENCY_CONTAINER_BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY'.
enum
{
  v2x_msgs__msg__HighFrequencyContainer__HIGH_FREQUENCY_CONTAINER_BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY = 1ll
};

/// Constant 'HIGH_FREQUENCY_CONTAINER_RSU_CONTAINER_HIGH_FREQUENCY'.
enum
{
  v2x_msgs__msg__HighFrequencyContainer__HIGH_FREQUENCY_CONTAINER_RSU_CONTAINER_HIGH_FREQUENCY = 2ll
};

// Include directives for member types
// Member 'basic_vehicle_container_high_frequency'
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.h"
// Member 'rsu_container_high_frequency'
#include "v2x_msgs/msg/detail/rsu_container_high_frequency__struct.h"

/// Struct defined in msg/HighFrequencyContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HighFrequencyContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t high_frequency_container_container_select;
  /// container 1
  v2x_msgs__msg__BasicVehicleContainerHighFrequency basic_vehicle_container_high_frequency;
  /// container 2
  v2x_msgs__msg__RSUContainerHighFrequency rsu_container_high_frequency;
} v2x_msgs__msg__HighFrequencyContainer;

// Struct for a sequence of v2x_msgs__msg__HighFrequencyContainer.
typedef struct v2x_msgs__msg__HighFrequencyContainer__Sequence
{
  v2x_msgs__msg__HighFrequencyContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HighFrequencyContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HIGH_FREQUENCY_CONTAINER__STRUCT_H_
