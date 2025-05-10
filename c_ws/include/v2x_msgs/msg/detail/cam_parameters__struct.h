// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CamParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CAM_PARAMETERS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CAM_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'basic_container'
#include "v2x_msgs/msg/detail/basic_container__struct.h"
// Member 'high_frequency_container'
#include "v2x_msgs/msg/detail/high_frequency_container__struct.h"
// Member 'low_frequency_container'
#include "v2x_msgs/msg/detail/low_frequency_container__struct.h"
// Member 'special_vehicle_container'
#include "v2x_msgs/msg/detail/special_vehicle_container__struct.h"

/// Struct defined in msg/CamParameters in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CamParameters
{
  v2x_msgs__msg__BasicContainer basic_container;
  v2x_msgs__msg__HighFrequencyContainer high_frequency_container;
  /// Optional Field
  bool low_frequency_container_present;
  v2x_msgs__msg__LowFrequencyContainer low_frequency_container;
  /// Optional Field
  bool special_vehicle_container_present;
  v2x_msgs__msg__SpecialVehicleContainer special_vehicle_container;
} v2x_msgs__msg__CamParameters;

// Struct for a sequence of v2x_msgs__msg__CamParameters.
typedef struct v2x_msgs__msg__CamParameters__Sequence
{
  v2x_msgs__msg__CamParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CamParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CAM_PARAMETERS__STRUCT_H_
