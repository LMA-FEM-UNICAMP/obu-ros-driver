// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_TYPE_ATTRIBUTES_NOTHING'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_NOTHING = 0ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_VEHICLE'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_VEHICLE = 1ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_CROSSWALK'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_CROSSWALK = 2ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_BIKE_LANE'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_BIKE_LANE = 3ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_SIDEWALK'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_SIDEWALK = 4ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_MEDIAN'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_MEDIAN = 5ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_STRIPING'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_STRIPING = 6ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_TRACKED_VEHICLE'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_TRACKED_VEHICLE = 7ll
};

/// Constant 'LANE_TYPE_ATTRIBUTES_PARKING'.
enum
{
  v2x_msgs__msg__LaneTypeAttributes__LANE_TYPE_ATTRIBUTES_PARKING = 8ll
};

// Include directives for member types
// Member 'vehicle'
#include "v2x_msgs/msg/detail/lane_attributes_vehicle__struct.h"
// Member 'crosswalk'
#include "v2x_msgs/msg/detail/lane_attributes_crosswalk__struct.h"
// Member 'bike_lane'
#include "v2x_msgs/msg/detail/lane_attributes_bike__struct.h"
// Member 'sidewalk'
#include "v2x_msgs/msg/detail/lane_attributes_sidewalk__struct.h"
// Member 'median'
#include "v2x_msgs/msg/detail/lane_attributes_barrier__struct.h"
// Member 'striping'
#include "v2x_msgs/msg/detail/lane_attributes_striping__struct.h"
// Member 'tracked_vehicle'
#include "v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__struct.h"
// Member 'parking'
#include "v2x_msgs/msg/detail/lane_attributes_parking__struct.h"

/// Struct defined in msg/LaneTypeAttributes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneTypeAttributes
{
  /// CHOICE! - Choose exactly of the containers
  int64_t lane_type_attributes_container_select;
  /// container 1
  v2x_msgs__msg__LaneAttributesVehicle vehicle;
  /// container 2
  v2x_msgs__msg__LaneAttributesCrosswalk crosswalk;
  /// container 3
  v2x_msgs__msg__LaneAttributesBike bike_lane;
  /// container 4
  v2x_msgs__msg__LaneAttributesSidewalk sidewalk;
  /// container 5
  v2x_msgs__msg__LaneAttributesBarrier median;
  /// container 6
  v2x_msgs__msg__LaneAttributesStriping striping;
  /// container 7
  v2x_msgs__msg__LaneAttributesTrackedVehicle tracked_vehicle;
  /// container 8
  v2x_msgs__msg__LaneAttributesParking parking;
} v2x_msgs__msg__LaneTypeAttributes;

// Struct for a sequence of v2x_msgs__msg__LaneTypeAttributes.
typedef struct v2x_msgs__msg__LaneTypeAttributes__Sequence
{
  v2x_msgs__msg__LaneTypeAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneTypeAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__STRUCT_H_
