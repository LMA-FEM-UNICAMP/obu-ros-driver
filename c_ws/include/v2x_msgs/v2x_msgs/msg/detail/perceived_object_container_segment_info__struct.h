// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PerceivedObjectContainerSegmentInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT_CONTAINER_SEGMENT_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT_CONTAINER_SEGMENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'total_msg_segments'
// Member 'this_segment_num'
#include "v2x_msgs/msg/detail/segment_count__struct.h"

/// Struct defined in msg/PerceivedObjectContainerSegmentInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PerceivedObjectContainerSegmentInfo
{
  v2x_msgs__msg__SegmentCount total_msg_segments;
  v2x_msgs__msg__SegmentCount this_segment_num;
} v2x_msgs__msg__PerceivedObjectContainerSegmentInfo;

// Struct for a sequence of v2x_msgs__msg__PerceivedObjectContainerSegmentInfo.
typedef struct v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence
{
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT_CONTAINER_SEGMENT_INFO__STRUCT_H_
