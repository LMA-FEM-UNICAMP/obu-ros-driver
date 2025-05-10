// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GetRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GET_REQUEST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GET_REQUEST__STRUCT_H_

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
// Member 'attr_id_list'
#include "v2x_msgs/msg/detail/attribute_id_list__struct.h"

/// Struct defined in msg/GetRequest in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GetRequest
{
  int64_t fill;
  v2x_msgs__msg__DsrcEID eid;
  /// Optional Field
  bool access_credentials_present;
  /// size(0..127)
  rosidl_runtime_c__int64__Sequence access_credentials;
  /// Optional Field
  bool iid_present;
  v2x_msgs__msg__DsrcEID iid;
  /// Optional Field
  bool attr_id_list_present;
  v2x_msgs__msg__AttributeIdList attr_id_list;
} v2x_msgs__msg__GetRequest;

// Struct for a sequence of v2x_msgs__msg__GetRequest.
typedef struct v2x_msgs__msg__GetRequest__Sequence
{
  v2x_msgs__msg__GetRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GetRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GET_REQUEST__STRUCT_H_
