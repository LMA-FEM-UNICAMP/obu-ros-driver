// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviManagementContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_MANAGEMENT_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_MANAGEMENT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service_provider_id'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'ivi_identification_number'
#include "v2x_msgs/msg/detail/ivi_identification_number__struct.h"
// Member 'time_stamp'
// Member 'valid_from'
// Member 'valid_to'
#include "v2x_msgs/msg/detail/timestamp_its__struct.h"
// Member 'connected_ivi_structures'
#include "v2x_msgs/msg/detail/ivi_identification_numbers__struct.h"
// Member 'ivi_status'
#include "v2x_msgs/msg/detail/ivi_status__struct.h"
// Member 'connected_denms'
#include "v2x_msgs/msg/detail/connected_denms__struct.h"

/// Struct defined in msg/IviManagementContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviManagementContainer
{
  v2x_msgs__msg__Provider service_provider_id;
  v2x_msgs__msg__IviIdentificationNumber ivi_identification_number;
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__TimestampIts time_stamp;
  /// Optional Field
  bool valid_from_present;
  v2x_msgs__msg__TimestampIts valid_from;
  /// Optional Field
  bool valid_to_present;
  v2x_msgs__msg__TimestampIts valid_to;
  /// Optional Field
  bool connected_ivi_structures_present;
  v2x_msgs__msg__IviIdentificationNumbers connected_ivi_structures;
  v2x_msgs__msg__IviStatus ivi_status;
  /// Optional Field
  bool connected_denms_present;
  v2x_msgs__msg__ConnectedDenms connected_denms;
} v2x_msgs__msg__IviManagementContainer;

// Struct for a sequence of v2x_msgs__msg__IviManagementContainer.
typedef struct v2x_msgs__msg__IviManagementContainer__Sequence
{
  v2x_msgs__msg__IviManagementContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviManagementContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_MANAGEMENT_CONTAINER__STRUCT_H_
