// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "v2x_msgs/msg/detail/vehicle_id__struct.h"
// Member 'type'
#include "v2x_msgs/msg/detail/requestor_type__struct.h"
// Member 'position'
#include "v2x_msgs/msg/detail/requestor_position_vector__struct.h"
// Member 'name'
// Member 'route_name'
#include "v2x_msgs/msg/detail/descriptive_name__struct.h"
// Member 'transit_status'
#include "v2x_msgs/msg/detail/transit_vehicle_status__struct.h"
// Member 'transit_occupancy'
#include "v2x_msgs/msg/detail/transit_vehicle_occupancy__struct.h"
// Member 'transit_schedule'
#include "v2x_msgs/msg/detail/delta_time__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_requestor_description__struct.h"

/// Struct defined in msg/RequestorDescription in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RequestorDescription
{
  v2x_msgs__msg__VehicleID id;
  /// Optional Field
  bool type_present;
  v2x_msgs__msg__RequestorType type;
  /// Optional Field
  bool position_present;
  v2x_msgs__msg__RequestorPositionVector position;
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  /// Optional Field
  bool route_name_present;
  v2x_msgs__msg__DescriptiveName route_name;
  /// Optional Field
  bool transit_status_present;
  v2x_msgs__msg__TransitVehicleStatus transit_status;
  /// Optional Field
  bool transit_occupancy_present;
  v2x_msgs__msg__TransitVehicleOccupancy transit_occupancy;
  /// Optional Field
  bool transit_schedule_present;
  v2x_msgs__msg__DeltaTime transit_schedule;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegRequestorDescription__Sequence regional;
} v2x_msgs__msg__RequestorDescription;

// Struct for a sequence of v2x_msgs__msg__RequestorDescription.
typedef struct v2x_msgs__msg__RequestorDescription__Sequence
{
  v2x_msgs__msg__RequestorDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RequestorDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_
