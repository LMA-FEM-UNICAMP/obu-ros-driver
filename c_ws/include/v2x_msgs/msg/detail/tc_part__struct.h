// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TcPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MINIMUM_AWARENESS_TIME_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TcPart__MINIMUM_AWARENESS_TIME_RANGE_MIN = 0ll
};

/// Constant 'MINIMUM_AWARENESS_TIME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TcPart__MINIMUM_AWARENESS_TIME_RANGE_MAX = 255ll
};

/// Constant 'LAYOUT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TcPart__LAYOUT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TcPart__LAYOUT_ID_RANGE_MAX = 4ll
};

/// Constant 'PRE_STOREDLAYOUT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TcPart__PRE_STOREDLAYOUT_ID_RANGE_MIN = 1ll
};

/// Constant 'PRE_STOREDLAYOUT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TcPart__PRE_STOREDLAYOUT_ID_RANGE_MAX = 64ll
};

// Include directives for member types
// Member 'detection_zone_ids'
// Member 'relevance_zone_ids'
// Member 'driver_awareness_zone_ids'
#include "v2x_msgs/msg/detail/zone_ids__struct.h"
// Member 'direction'
#include "v2x_msgs/msg/detail/direction__struct.h"
// Member 'applicable_lanes'
#include "v2x_msgs/msg/detail/lane_positions__struct.h"
// Member 'text'
#include "v2x_msgs/msg/detail/text_lines__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'ivi_type'
#include "v2x_msgs/msg/detail/ivi_type__struct.h"
// Member 'lane_status'
#include "v2x_msgs/msg/detail/lane_status__struct.h"
// Member 'vehicle_characteristics'
#include "v2x_msgs/msg/detail/vehicle_characteristics_list__struct.h"

/// Struct defined in msg/TcPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TcPart
{
  /// Optional Field
  bool detection_zone_ids_present;
  v2x_msgs__msg__ZoneIds detection_zone_ids;
  v2x_msgs__msg__ZoneIds relevance_zone_ids;
  /// Optional Field
  bool direction_present;
  v2x_msgs__msg__Direction direction;
  /// Optional Field
  bool driver_awareness_zone_ids_present;
  v2x_msgs__msg__ZoneIds driver_awareness_zone_ids;
  /// Optional Field
  bool minimum_awareness_time_present;
  int64_t minimum_awareness_time;
  /// Optional Field
  bool applicable_lanes_present;
  v2x_msgs__msg__LanePositions applicable_lanes;
  /// Optional Field
  bool layout_id_present;
  int64_t layout_id;
  /// Optional Field
  bool pre_storedlayout_id_present;
  int64_t pre_storedlayout_id;
  /// Optional Field
  bool text_present;
  v2x_msgs__msg__TextLines text;
  rosidl_runtime_c__int64__Sequence data;
  v2x_msgs__msg__IviType ivi_type;
  /// Optional Field
  bool lane_status_present;
  v2x_msgs__msg__LaneStatus lane_status;
  /// Optional Field
  bool vehicle_characteristics_present;
  v2x_msgs__msg__VehicleCharacteristicsList vehicle_characteristics;
} v2x_msgs__msg__TcPart;

// Struct for a sequence of v2x_msgs__msg__TcPart.
typedef struct v2x_msgs__msg__TcPart__Sequence
{
  v2x_msgs__msg__TcPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TcPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TC_PART__STRUCT_H_
