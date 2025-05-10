// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CpmParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CPM_PARAMETERS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CPM_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'management_container'
#include "v2x_msgs/msg/detail/cpm_management_container__struct.h"
// Member 'station_data_container'
#include "v2x_msgs/msg/detail/station_data_container__struct.h"
// Member 'sensor_information_container'
#include "v2x_msgs/msg/detail/sensor_information_container__struct.h"
// Member 'perceived_object_container'
#include "v2x_msgs/msg/detail/perceived_object_container__struct.h"
// Member 'free_space_addendum_container'
#include "v2x_msgs/msg/detail/free_space_addendum_container__struct.h"
// Member 'number_of_perceived_objects'
#include "v2x_msgs/msg/detail/number_of_perceived_objects__struct.h"

/// Struct defined in msg/CpmParameters in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CpmParameters
{
  v2x_msgs__msg__CpmManagementContainer management_container;
  /// Optional Field
  bool station_data_container_present;
  v2x_msgs__msg__StationDataContainer station_data_container;
  /// Optional Field
  bool sensor_information_container_present;
  v2x_msgs__msg__SensorInformationContainer sensor_information_container;
  /// Optional Field
  bool perceived_object_container_present;
  v2x_msgs__msg__PerceivedObjectContainer perceived_object_container;
  /// Optional Field
  bool free_space_addendum_container_present;
  v2x_msgs__msg__FreeSpaceAddendumContainer free_space_addendum_container;
  v2x_msgs__msg__NumberOfPerceivedObjects number_of_perceived_objects;
} v2x_msgs__msg__CpmParameters;

// Struct for a sequence of v2x_msgs__msg__CpmParameters.
typedef struct v2x_msgs__msg__CpmParameters__Sequence
{
  v2x_msgs__msg__CpmParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CpmParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CPM_PARAMETERS__STRUCT_H_
