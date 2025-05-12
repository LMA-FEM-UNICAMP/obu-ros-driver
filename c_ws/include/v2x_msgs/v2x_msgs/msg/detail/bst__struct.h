// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BST.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rsu'
#include "v2x_msgs/msg/detail/beacon_id__struct.h"
// Member 'time'
#include "v2x_msgs/msg/detail/time__struct.h"
// Member 'profile'
// Member 'list'
#include "v2x_msgs/msg/detail/profile__struct.h"
// Member 'mand_applications'
// Member 'nonmand_applications'
#include "v2x_msgs/msg/detail/application_list__struct.h"

/// Struct defined in msg/BST in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BST
{
  v2x_msgs__msg__BeaconID rsu;
  v2x_msgs__msg__Time time;
  v2x_msgs__msg__Profile profile;
  v2x_msgs__msg__ApplicationList mand_applications;
  /// Optional Field
  bool nonmand_applications_present;
  v2x_msgs__msg__ApplicationList nonmand_applications;
  /// size(0..127)
  v2x_msgs__msg__Profile__Sequence list;
} v2x_msgs__msg__BST;

// Struct for a sequence of v2x_msgs__msg__BST.
typedef struct v2x_msgs__msg__BST__Sequence
{
  v2x_msgs__msg__BST * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BST__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BST__STRUCT_H_
