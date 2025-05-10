// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ApplicationList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__APPLICATION_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__APPLICATION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'aid'
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__struct.h"
// Member 'eid'
#include "v2x_msgs/msg/detail/dsrc_eid__struct.h"
// Member 'parameter'
#include "v2x_msgs/msg/detail/application_context_mark__struct.h"

/// Struct defined in msg/ApplicationList in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ApplicationList
{
  /// Parser cannot parse SEQUENCE OF Sequence at the moment
  v2x_msgs__msg__DSRCApplicationEntityID aid;
  /// Optional Field
  bool eid_present;
  v2x_msgs__msg__DsrcEID eid;
  /// Optional Field
  bool parameter_present;
  v2x_msgs__msg__ApplicationContextMark parameter;
} v2x_msgs__msg__ApplicationList;

// Struct for a sequence of v2x_msgs__msg__ApplicationList.
typedef struct v2x_msgs__msg__ApplicationList__Sequence
{
  v2x_msgs__msg__ApplicationList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ApplicationList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__APPLICATION_LIST__STRUCT_H_
