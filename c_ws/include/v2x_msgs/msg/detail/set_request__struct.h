// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SetRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SET_REQUEST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SET_REQUEST__STRUCT_H_

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
// Member 'access_credentials'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'attr_list'
#include "v2x_msgs/msg/detail/attribute_list__struct.h"

/// Struct defined in msg/SetRequest in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SetRequest
{
  int64_t fill;
  bool mode;
  v2x_msgs__msg__DsrcEID eid;
  /// Optional Field
  bool access_credentials_present;
  /// size(0..127)
  rosidl_runtime_c__int64__Sequence access_credentials;
  v2x_msgs__msg__AttributeList attr_list;
  /// Optional Field
  bool iid_present;
  v2x_msgs__msg__DsrcEID iid;
} v2x_msgs__msg__SetRequest;

// Struct for a sequence of v2x_msgs__msg__SetRequest.
typedef struct v2x_msgs__msg__SetRequest__Sequence
{
  v2x_msgs__msg__SetRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SetRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SET_REQUEST__STRUCT_H_
