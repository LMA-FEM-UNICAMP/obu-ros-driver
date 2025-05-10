// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ISO14823Attribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ISO14823_ATTRIBUTE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ISO14823_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ISO14823ATTRIBUTE_NOTHING'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_NOTHING = 0ll
};

/// Constant 'ISO14823ATTRIBUTE_DTM'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_DTM = 1ll
};

/// Constant 'ISO14823ATTRIBUTE_EDT'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_EDT = 2ll
};

/// Constant 'ISO14823ATTRIBUTE_DFL'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_DFL = 3ll
};

/// Constant 'ISO14823ATTRIBUTE_VED'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_VED = 4ll
};

/// Constant 'ISO14823ATTRIBUTE_SPE'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_SPE = 5ll
};

/// Constant 'ISO14823ATTRIBUTE_ROI'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_ROI = 6ll
};

/// Constant 'ISO14823ATTRIBUTE_DBV'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_DBV = 7ll
};

/// Constant 'ISO14823ATTRIBUTE_DDD'.
enum
{
  v2x_msgs__msg__ISO14823Attribute__ISO14823ATTRIBUTE_DDD = 8ll
};

// Include directives for member types
// Member 'dtm'
#include "v2x_msgs/msg/detail/international_sign_applicable_period__struct.h"
// Member 'edt'
#include "v2x_msgs/msg/detail/international_sign_exempted_applicable_period__struct.h"
// Member 'dfl'
#include "v2x_msgs/msg/detail/international_sign_directional_flow_of_lane__struct.h"
// Member 'ved'
#include "v2x_msgs/msg/detail/international_sign_applicable_vehicle_dimensions__struct.h"
// Member 'spe'
#include "v2x_msgs/msg/detail/international_sign_speed_limits__struct.h"
// Member 'roi'
#include "v2x_msgs/msg/detail/international_sign_rate_of_incline__struct.h"
// Member 'dbv'
#include "v2x_msgs/msg/detail/international_sign_distance_between_vehicles__struct.h"
// Member 'ddd'
#include "v2x_msgs/msg/detail/international_sign_destination_information__struct.h"

/// Struct defined in msg/ISO14823Attribute in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ISO14823Attribute
{
  /// CHOICE! - Choose exactly of the containers
  int64_t iso14823attribute_container_select;
  /// container 1
  v2x_msgs__msg__InternationalSignApplicablePeriod dtm;
  /// container 2
  v2x_msgs__msg__InternationalSignExemptedApplicablePeriod edt;
  /// container 3
  v2x_msgs__msg__InternationalSignDirectionalFlowOfLane dfl;
  /// container 4
  v2x_msgs__msg__InternationalSignApplicableVehicleDimensions ved;
  /// container 5
  v2x_msgs__msg__InternationalSignSpeedLimits spe;
  /// container 6
  v2x_msgs__msg__InternationalSignRateOfIncline roi;
  /// container 7
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles dbv;
  /// container 8
  v2x_msgs__msg__InternationalSignDestinationInformation ddd;
} v2x_msgs__msg__ISO14823Attribute;

// Struct for a sequence of v2x_msgs__msg__ISO14823Attribute.
typedef struct v2x_msgs__msg__ISO14823Attribute__Sequence
{
  v2x_msgs__msg__ISO14823Attribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ISO14823Attribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ISO14823_ATTRIBUTE__STRUCT_H_
