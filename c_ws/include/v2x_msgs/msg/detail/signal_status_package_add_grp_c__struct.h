// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalStatusPackageAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'synch_to_schedule'
#include "v2x_msgs/msg/detail/delta_time__struct.h"
// Member 'rejected_reason'
#include "v2x_msgs/msg/detail/rejected_reason__struct.h"

/// Struct defined in msg/SignalStatusPackageAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalStatusPackageAddGrpC
{
  /// Optional Field
  bool synch_to_schedule_present;
  v2x_msgs__msg__DeltaTime synch_to_schedule;
  /// Optional Field
  bool rejected_reason_present;
  v2x_msgs__msg__RejectedReason rejected_reason;
} v2x_msgs__msg__SignalStatusPackageAddGrpC;

// Struct for a sequence of v2x_msgs__msg__SignalStatusPackageAddGrpC.
typedef struct v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence
{
  v2x_msgs__msg__SignalStatusPackageAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_STATUS_PACKAGE_ADD_GRP_C__STRUCT_H_
