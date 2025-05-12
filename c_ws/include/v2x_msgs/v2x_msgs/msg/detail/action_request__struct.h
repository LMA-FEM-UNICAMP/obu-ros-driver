// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ActionRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_

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
// Member 'action_type'
#include "v2x_msgs/msg/detail/action_type__struct.h"
// Member 'access_credentials'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActionRequest in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ActionRequest
{
  bool mode;
  v2x_msgs__msg__DsrcEID eid;
  v2x_msgs__msg__ActionType action_type;
  /// Optional Field
  bool access_credentials_present;
  /// size(0..127)
  rosidl_runtime_c__int64__Sequence access_credentials;
  /// container-reference not parsed
  /// Optional Field
  bool action_parameter_present;
  int64_t action_parameter;
  /// Optional Field
  bool iid_present;
  v2x_msgs__msg__DsrcEID iid;
} v2x_msgs__msg__ActionRequest;

// Struct for a sequence of v2x_msgs__msg__ActionRequest.
typedef struct v2x_msgs__msg__ActionRequest__Sequence
{
  v2x_msgs__msg__ActionRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ActionRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_
