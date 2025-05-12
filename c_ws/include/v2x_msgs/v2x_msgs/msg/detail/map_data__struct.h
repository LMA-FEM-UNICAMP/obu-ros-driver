// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'msg_issue_revision'
#include "v2x_msgs/msg/detail/msg_count__struct.h"
// Member 'layer_type'
#include "v2x_msgs/msg/detail/layer_type__struct.h"
// Member 'layer_id'
#include "v2x_msgs/msg/detail/layer_id__struct.h"
// Member 'intersections'
#include "v2x_msgs/msg/detail/intersection_geometry_list__struct.h"
// Member 'road_segments'
#include "v2x_msgs/msg/detail/road_segment_list__struct.h"
// Member 'data_parameters'
#include "v2x_msgs/msg/detail/data_parameters__struct.h"
// Member 'restriction_list'
#include "v2x_msgs/msg/detail/restriction_class_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_map_data__struct.h"

/// Struct defined in msg/MapData in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MapData
{
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__MinuteOfTheYear time_stamp;
  v2x_msgs__msg__MsgCount msg_issue_revision;
  /// Optional Field
  bool layer_type_present;
  v2x_msgs__msg__LayerType layer_type;
  /// Optional Field
  bool layer_id_present;
  v2x_msgs__msg__LayerID layer_id;
  /// Optional Field
  bool intersections_present;
  v2x_msgs__msg__IntersectionGeometryList intersections;
  /// Optional Field
  bool road_segments_present;
  v2x_msgs__msg__RoadSegmentList road_segments;
  /// Optional Field
  bool data_parameters_present;
  v2x_msgs__msg__DataParameters data_parameters;
  /// Optional Field
  bool restriction_list_present;
  v2x_msgs__msg__RestrictionClassList restriction_list;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegMapData__Sequence regional;
} v2x_msgs__msg__MapData;

// Struct for a sequence of v2x_msgs__msg__MapData.
typedef struct v2x_msgs__msg__MapData__Sequence
{
  v2x_msgs__msg__MapData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MapData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_H_
