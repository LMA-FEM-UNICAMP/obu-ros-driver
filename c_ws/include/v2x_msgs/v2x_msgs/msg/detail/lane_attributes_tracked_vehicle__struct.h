// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesTrackedVehicle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle__LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_COMMUTER_RAIL_ROAD_TRACK'.
enum
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle__LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_COMMUTER_RAIL_ROAD_TRACK = 1ll
};

/// Constant 'LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_LIGHT_RAIL_ROAD_TRACK'.
enum
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle__LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_LIGHT_RAIL_ROAD_TRACK = 2ll
};

/// Constant 'LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_HEAVY_RAIL_ROAD_TRACK'.
enum
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle__LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_HEAVY_RAIL_ROAD_TRACK = 3ll
};

/// Constant 'LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_OTHER_RAIL_TYPE'.
enum
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle__LANE_ATTRIBUTESTRACKED_VEHICLE_SPEC_OTHER_RAIL_TYPE = 4ll
};

/// Struct defined in msg/LaneAttributesTrackedVehicle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesTrackedVehicle
{
  int64_t lane_attributes_tracked_vehicle;
} v2x_msgs__msg__LaneAttributesTrackedVehicle;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesTrackedVehicle.
typedef struct v2x_msgs__msg__LaneAttributesTrackedVehicle__Sequence
{
  v2x_msgs__msg__LaneAttributesTrackedVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesTrackedVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_TRACKED_VEHICLE__STRUCT_H_
