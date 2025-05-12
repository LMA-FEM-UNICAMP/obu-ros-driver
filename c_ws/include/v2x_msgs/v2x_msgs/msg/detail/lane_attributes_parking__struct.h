// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneAttributesParking.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_ATTRIBUTESPARKING_PARKING_REVOCABLE_LANE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_PARKING_REVOCABLE_LANE = 0ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_PARALLEL_PARKING_IN_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_PARALLEL_PARKING_IN_USE = 1ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_HEAD_IN_PARKING_IN_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_HEAD_IN_PARKING_IN_USE = 2ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_DO_NOT_PARK_ZONE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_DO_NOT_PARK_ZONE = 3ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_PARKING_FOR_BUS_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_PARKING_FOR_BUS_USE = 4ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_PARKING_FOR_TAXI_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_PARKING_FOR_TAXI_USE = 5ll
};

/// Constant 'LANE_ATTRIBUTESPARKING_NO_PUBLIC_PARKING_USE'.
enum
{
  v2x_msgs__msg__LaneAttributesParking__LANE_ATTRIBUTESPARKING_NO_PUBLIC_PARKING_USE = 6ll
};

/// Struct defined in msg/LaneAttributesParking in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneAttributesParking
{
  int64_t lane_attributes_parking;
} v2x_msgs__msg__LaneAttributesParking;

// Struct for a sequence of v2x_msgs__msg__LaneAttributesParking.
typedef struct v2x_msgs__msg__LaneAttributesParking__Sequence
{
  v2x_msgs__msg__LaneAttributesParking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneAttributesParking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_PARKING__STRUCT_H_
