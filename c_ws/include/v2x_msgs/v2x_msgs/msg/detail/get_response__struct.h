// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GetResponse.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GET_RESPONSE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GET_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'eid'
// Member 'iid'
#include "v2x_msgs/msg/detail/dsrc_eid__struct.h"
// Member 'attributelist'
#include "v2x_msgs/msg/detail/attribute_list__struct.h"
// Member 'ret'
#include "v2x_msgs/msg/detail/return_status__struct.h"

/// Struct defined in msg/GetResponse in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GetResponse
{
  int64_t fill;
  v2x_msgs__msg__DsrcEID eid;
  /// Optional Field
  bool iid_present;
  v2x_msgs__msg__DsrcEID iid;
  /// Optional Field
  bool attributelist_present;
  v2x_msgs__msg__AttributeList attributelist;
  /// Optional Field
  bool ret_present;
  v2x_msgs__msg__ReturnStatus ret;
} v2x_msgs__msg__GetResponse;

// Struct for a sequence of v2x_msgs__msg__GetResponse.
typedef struct v2x_msgs__msg__GetResponse__Sequence
{
  v2x_msgs__msg__GetResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GetResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GET_RESPONSE__STRUCT_H_
