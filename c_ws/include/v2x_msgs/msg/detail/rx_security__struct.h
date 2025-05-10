// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RxSecurity.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RX_SECURITY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RX_SECURITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "v2x_msgs/msg/detail/decap_status__struct.h"
// Member 'its_aid'
#include "v2x_msgs/msg/detail/its_aid__struct.h"
// Member 'ssp_len'
#include "v2x_msgs/msg/detail/ssp_len__struct.h"
// Member 'ssp'
#include "v2x_msgs/msg/detail/ssp__struct.h"

/// Struct defined in msg/RxSecurity in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RxSecurity
{
  v2x_msgs__msg__DecapStatus status;
  v2x_msgs__msg__ItsAID its_aid;
  v2x_msgs__msg__SSPLen ssp_len;
  v2x_msgs__msg__SSP ssp;
} v2x_msgs__msg__RxSecurity;

// Struct for a sequence of v2x_msgs__msg__RxSecurity.
typedef struct v2x_msgs__msg__RxSecurity__Sequence
{
  v2x_msgs__msg__RxSecurity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RxSecurity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RX_SECURITY__STRUCT_H_
