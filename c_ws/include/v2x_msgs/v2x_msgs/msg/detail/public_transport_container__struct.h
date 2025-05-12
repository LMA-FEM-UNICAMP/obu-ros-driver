// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PublicTransportContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PUBLIC_TRANSPORT_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PUBLIC_TRANSPORT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'embarkation_status'
#include "v2x_msgs/msg/detail/embarkation_status__struct.h"
// Member 'pt_activation'
#include "v2x_msgs/msg/detail/pt_activation__struct.h"

/// Struct defined in msg/PublicTransportContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PublicTransportContainer
{
  v2x_msgs__msg__EmbarkationStatus embarkation_status;
  /// Optional Field
  bool pt_activation_present;
  v2x_msgs__msg__PtActivation pt_activation;
} v2x_msgs__msg__PublicTransportContainer;

// Struct for a sequence of v2x_msgs__msg__PublicTransportContainer.
typedef struct v2x_msgs__msg__PublicTransportContainer__Sequence
{
  v2x_msgs__msg__PublicTransportContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PublicTransportContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PUBLIC_TRANSPORT_CONTAINER__STRUCT_H_
