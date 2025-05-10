// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TxSecurity.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TX_SECURITY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TX_SECURITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "v2x_msgs/msg/detail/encap_type__struct.h"
// Member 'its_aid'
#include "v2x_msgs/msg/detail/its_aid__struct.h"
// Member 'ssp_len'
#include "v2x_msgs/msg/detail/ssp_len__struct.h"
// Member 'ssp'
#include "v2x_msgs/msg/detail/ssp__struct.h"

/// Struct defined in msg/TxSecurity in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TxSecurity
{
  v2x_msgs__msg__EncapType type;
  v2x_msgs__msg__ItsAID its_aid;
  v2x_msgs__msg__SSPLen ssp_len;
  v2x_msgs__msg__SSP ssp;
} v2x_msgs__msg__TxSecurity;

// Struct for a sequence of v2x_msgs__msg__TxSecurity.
typedef struct v2x_msgs__msg__TxSecurity__Sequence
{
  v2x_msgs__msg__TxSecurity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TxSecurity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TX_SECURITY__STRUCT_H_
