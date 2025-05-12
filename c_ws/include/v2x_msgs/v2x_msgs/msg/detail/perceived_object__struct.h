// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
#include "v2x_msgs/msg/detail/identifier__struct.h"
// Member 'sensor_idlist'
#include "v2x_msgs/msg/detail/sensor_id_list__struct.h"
// Member 'time_of_measurement'
#include "v2x_msgs/msg/detail/time_of_measurement__struct.h"
// Member 'object_age'
#include "v2x_msgs/msg/detail/object_age__struct.h"
// Member 'object_confidence'
#include "v2x_msgs/msg/detail/object_confidence__struct.h"
// Member 'x_distance'
// Member 'y_distance'
// Member 'z_distance'
#include "v2x_msgs/msg/detail/object_distance_with_confidence__struct.h"
// Member 'x_speed'
// Member 'y_speed'
// Member 'z_speed'
#include "v2x_msgs/msg/detail/speed_extended__struct.h"
// Member 'x_acceleration'
#include "v2x_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'y_acceleration'
#include "v2x_msgs/msg/detail/lateral_acceleration__struct.h"
// Member 'z_acceleration'
#include "v2x_msgs/msg/detail/vertical_acceleration__struct.h"
// Member 'yaw_angle'
#include "v2x_msgs/msg/detail/cartesian_angle__struct.h"
// Member 'planar_object_dimension1'
// Member 'planar_object_dimension2'
// Member 'vertical_object_dimension'
#include "v2x_msgs/msg/detail/object_dimension__struct.h"
// Member 'object_ref_point'
#include "v2x_msgs/msg/detail/object_ref_point__struct.h"
// Member 'dynamic_status'
#include "v2x_msgs/msg/detail/dynamic_status__struct.h"
// Member 'classification'
#include "v2x_msgs/msg/detail/object_class_description__struct.h"
// Member 'matched_position'
#include "v2x_msgs/msg/detail/matched_position__struct.h"

/// Struct defined in msg/PerceivedObject in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PerceivedObject
{
  v2x_msgs__msg__Identifier object_id;
  /// Optional Field
  bool sensor_idlist_present;
  v2x_msgs__msg__SensorIdList sensor_idlist;
  v2x_msgs__msg__TimeOfMeasurement time_of_measurement;
  /// Optional Field
  bool object_age_present;
  v2x_msgs__msg__ObjectAge object_age;
  /// Optional Field
  bool object_confidence_present;
  v2x_msgs__msg__ObjectConfidence object_confidence;
  v2x_msgs__msg__ObjectDistanceWithConfidence x_distance;
  v2x_msgs__msg__ObjectDistanceWithConfidence y_distance;
  /// Optional Field
  bool z_distance_present;
  v2x_msgs__msg__ObjectDistanceWithConfidence z_distance;
  v2x_msgs__msg__SpeedExtended x_speed;
  v2x_msgs__msg__SpeedExtended y_speed;
  /// Optional Field
  bool z_speed_present;
  v2x_msgs__msg__SpeedExtended z_speed;
  /// Optional Field
  bool x_acceleration_present;
  v2x_msgs__msg__LongitudinalAcceleration x_acceleration;
  /// Optional Field
  bool y_acceleration_present;
  v2x_msgs__msg__LateralAcceleration y_acceleration;
  /// Optional Field
  bool z_acceleration_present;
  v2x_msgs__msg__VerticalAcceleration z_acceleration;
  /// Optional Field
  bool yaw_angle_present;
  v2x_msgs__msg__CartesianAngle yaw_angle;
  /// Optional Field
  bool planar_object_dimension1_present;
  v2x_msgs__msg__ObjectDimension planar_object_dimension1;
  /// Optional Field
  bool planar_object_dimension2_present;
  v2x_msgs__msg__ObjectDimension planar_object_dimension2;
  /// Optional Field
  bool vertical_object_dimension_present;
  v2x_msgs__msg__ObjectDimension vertical_object_dimension;
  /// Optional Field
  bool object_ref_point_present;
  v2x_msgs__msg__ObjectRefPoint object_ref_point;
  /// Optional Field
  bool dynamic_status_present;
  v2x_msgs__msg__DynamicStatus dynamic_status;
  /// Optional Field
  bool classification_present;
  v2x_msgs__msg__ObjectClassDescription classification;
  /// Optional Field
  bool matched_position_present;
  v2x_msgs__msg__MatchedPosition matched_position;
} v2x_msgs__msg__PerceivedObject;

// Struct for a sequence of v2x_msgs__msg__PerceivedObject.
typedef struct v2x_msgs__msg__PerceivedObject__Sequence
{
  v2x_msgs__msg__PerceivedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PerceivedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_H_
