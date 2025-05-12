// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_

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
// Member 'ret'
#include "v2x_msgs/msg/detail/return_status__struct.h"

/// Struct defined in msg/ActionResponse in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ActionResponse
{
  int64_t fill;
  v2x_msgs__msg__DsrcEID eid;
  /// Optional Field
  bool iid_present;
  v2x_msgs__msg__DsrcEID iid;
  /// container-reference not parsed
  /// Optional Field
  bool response_parameter_present;
  int64_t response_parameter;
  /// Optional Field
  bool ret_present;
  v2x_msgs__msg__ReturnStatus ret;
} v2x_msgs__msg__ActionResponse;

// Struct for a sequence of v2x_msgs__msg__ActionResponse.
typedef struct v2x_msgs__msg__ActionResponse__Sequence
{
  v2x_msgs__msg__ActionResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ActionResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_
