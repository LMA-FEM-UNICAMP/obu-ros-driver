// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DecentralizedEnvironmentalNotificationMessage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DECENTRALIZED_ENVIRONMENTAL_NOTIFICATION_MESSAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DECENTRALIZED_ENVIRONMENTAL_NOTIFICATION_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'management'
#include "v2x_msgs/msg/detail/management_container__struct.h"
// Member 'situation'
#include "v2x_msgs/msg/detail/situation_container__struct.h"
// Member 'location'
#include "v2x_msgs/msg/detail/location_container__struct.h"
// Member 'alacarte'
#include "v2x_msgs/msg/detail/alacarte_container__struct.h"

/// Struct defined in msg/DecentralizedEnvironmentalNotificationMessage in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage
{
  v2x_msgs__msg__ManagementContainer management;
  /// Optional Field
  bool situation_present;
  v2x_msgs__msg__SituationContainer situation;
  /// Optional Field
  bool location_present;
  v2x_msgs__msg__LocationContainer location;
  /// Optional Field
  bool alacarte_present;
  v2x_msgs__msg__AlacarteContainer alacarte;
} v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage;

// Struct for a sequence of v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage.
typedef struct v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence
{
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DECENTRALIZED_ENVIRONMENTAL_NOTIFICATION_MESSAGE__STRUCT_H_
