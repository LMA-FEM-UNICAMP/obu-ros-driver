// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GicPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GIC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GIC_PART__STRUCT_H_

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
  v2x_msgs__msg__GicPart__MINIMUM_AWARENESS_TIME_RANGE_MIN = 0ll
};

/// Constant 'MINIMUM_AWARENESS_TIME_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GicPart__MINIMUM_AWARENESS_TIME_RANGE_MAX = 255ll
};

/// Constant 'LAYOUT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__GicPart__LAYOUT_ID_RANGE_MIN = 1ll
};

/// Constant 'LAYOUT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GicPart__LAYOUT_ID_RANGE_MAX = 4ll
};

/// Constant 'PRE_STOREDLAYOUT_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__GicPart__PRE_STOREDLAYOUT_ID_RANGE_MIN = 1ll
};

/// Constant 'PRE_STOREDLAYOUT_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__GicPart__PRE_STOREDLAYOUT_ID_RANGE_MAX = 64ll
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
// Member 'ivi_type'
#include "v2x_msgs/msg/detail/ivi_type__struct.h"
// Member 'ivi_purpose'
#include "v2x_msgs/msg/detail/ivi_purpose__struct.h"
// Member 'lane_status'
#include "v2x_msgs/msg/detail/lane_status__struct.h"
// Member 'vehicle_characteristics'
#include "v2x_msgs/msg/detail/vehicle_characteristics_list__struct.h"
// Member 'driver_characteristics'
#include "v2x_msgs/msg/detail/driver_characteristics__struct.h"
// Member 'road_sign_codes'
#include "v2x_msgs/msg/detail/road_sign_codes__struct.h"
// Member 'extra_text'
#include "v2x_msgs/msg/detail/constraint_text_lines1__struct.h"

/// Struct defined in msg/GicPart in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__GicPart
{
  /// Added SEQUENCE OF adaptation
  /// Optional Field
  bool detection_zone_ids_present;
  v2x_msgs__msg__ZoneIds detection_zone_ids;
  /// Optional Field
  bool relevance_zone_ids_present;
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
  v2x_msgs__msg__IviType ivi_type;
  /// Optional Field
  bool ivi_purpose_present;
  v2x_msgs__msg__IviPurpose ivi_purpose;
  /// Optional Field
  bool lane_status_present;
  v2x_msgs__msg__LaneStatus lane_status;
  /// Optional Field
  bool vehicle_characteristics_present;
  v2x_msgs__msg__VehicleCharacteristicsList vehicle_characteristics;
  /// Optional Field
  bool driver_characteristics_present;
  v2x_msgs__msg__DriverCharacteristics driver_characteristics;
  /// Optional Field
  bool layout_id_present;
  int64_t layout_id;
  /// Optional Field
  bool pre_storedlayout_id_present;
  int64_t pre_storedlayout_id;
  v2x_msgs__msg__RoadSignCodes road_sign_codes;
  /// Optional Field
  bool extra_text_present;
  v2x_msgs__msg__ConstraintTextLines1 extra_text;
} v2x_msgs__msg__GicPart;

// Struct for a sequence of v2x_msgs__msg__GicPart.
typedef struct v2x_msgs__msg__GicPart__Sequence
{
  v2x_msgs__msg__GicPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GicPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GIC_PART__STRUCT_H_
