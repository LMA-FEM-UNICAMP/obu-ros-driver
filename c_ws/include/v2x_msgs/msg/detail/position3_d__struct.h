// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos_lat'
#include "v2x_msgs/msg/detail/latitude__struct.h"
// Member 'pos_long'
#include "v2x_msgs/msg/detail/longitude__struct.h"
// Member 'elevation'
#include "v2x_msgs/msg/detail/elevation__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_position3_d__struct.h"

/// Struct defined in msg/Position3D in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__Position3D
{
  /// Added pos in front of long & lat
  v2x_msgs__msg__Latitude pos_lat;
  v2x_msgs__msg__Longitude pos_long;
  /// Optional Field
  bool elevation_present;
  v2x_msgs__msg__Elevation elevation;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegPosition3D__Sequence regional;
} v2x_msgs__msg__Position3D;

// Struct for a sequence of v2x_msgs__msg__Position3D.
typedef struct v2x_msgs__msg__Position3D__Sequence
{
  v2x_msgs__msg__Position3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Position3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
