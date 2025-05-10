// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CS3.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CS3__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CS3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
#include "v2x_msgs/msg/detail/start_time__struct.h"
// Member 'stop_time'
#include "v2x_msgs/msg/detail/stop_time__struct.h"
// Member 'geograph_limit'
#include "v2x_msgs/msg/detail/geo_graphical_limit__struct.h"
// Member 'service_app_limit'
#include "v2x_msgs/msg/detail/service_application_limit__struct.h"

/// Struct defined in msg/CS3 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CS3
{
  v2x_msgs__msg__StartTime start_time;
  v2x_msgs__msg__StopTime stop_time;
  v2x_msgs__msg__GeoGraphicalLimit geograph_limit;
  v2x_msgs__msg__ServiceApplicationLimit service_app_limit;
} v2x_msgs__msg__CS3;

// Struct for a sequence of v2x_msgs__msg__CS3.
typedef struct v2x_msgs__msg__CS3__Sequence
{
  v2x_msgs__msg__CS3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CS3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CS3__STRUCT_H_
