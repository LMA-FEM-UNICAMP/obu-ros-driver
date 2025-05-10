// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesVehicle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESVEHICLE_IS_VEHICLE_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_IS_VEHICLE_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_IS_VEHICLE_FLY_OVER_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_IS_VEHICLE_FLY_OVER_LANE = 1ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_HOV_LANE_USE_ONLY'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_HOV_LANE_USE_ONLY = 2ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_RESTRICTED_TO_BUS_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_RESTRICTED_TO_BUS_USE = 3ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_RESTRICTED_TO_TAXI_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_RESTRICTED_TO_TAXI_USE = 4ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_RESTRICTED_FROM_PUBLIC_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_RESTRICTED_FROM_PUBLIC_USE = 5ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_HAS_IRBEACON_COVERAGE'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_HAS_IRBEACON_COVERAGE = 6ll
};

/// Constant 'LANE_ATTRIBUTESVEHICLE_PERMISSION_ON_REQUEST'.
enum
{
  v2x_msgs__msg__LaneAttributesVehicle__LANE_ATTRIBUTESVEHICLE_PERMISSION_ON_REQUEST = 7ll
};

/// Struct defined in msg/LaneAttributesVehicle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesVehicle
{
  int64_t lane_attributes_vehicle;
} v2x_msgs__msg__LaneAttributesVehicle;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesVehicle.
typedef struct v2x_msgs__msg__LaneAttributesVehicle__Sequence
{
  v2x_msgs__msg__LaneAttributesVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_
