// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GddAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GDD_ATTRIBUTE_NOTHING'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_NOTHING = 0ll
};

/// Constant 'GDD_ATTRIBUTE_DTM'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_DTM = 1ll
};

/// Constant 'GDD_ATTRIBUTE_EDT'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_EDT = 2ll
};

/// Constant 'GDD_ATTRIBUTE_DFL'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_DFL = 3ll
};

/// Constant 'GDD_ATTRIBUTE_VED'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_VED = 4ll
};

/// Constant 'GDD_ATTRIBUTE_SPE'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_SPE = 5ll
};

/// Constant 'GDD_ATTRIBUTE_ROI'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_ROI = 6ll
};

/// Constant 'GDD_ATTRIBUTE_DBV'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_DBV = 7ll
};

/// Constant 'GDD_ATTRIBUTE_DDD'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_DDD = 8ll
};

/// Constant 'GDD_ATTRIBUTE_SET'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_SET = 9ll
};

/// Constant 'GDD_ATTRIBUTE_NOL'.
enum
{
  v2x_msgs__msg__GddAttribute__GDD_ATTRIBUTE_NOL = 10ll
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
// Member 'set'
#include "v2x_msgs/msg/detail/international_sign_section__struct.h"
// Member 'nol'
#include "v2x_msgs/msg/detail/international_sign_number_of_lane__struct.h"

/// Struct defined in msg/GddAttribute in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GddAttribute
{
  /// CHOICE! - Choose exactly of the containers
  int64_t gdd_attribute_container_select;
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
  /// container 9
  v2x_msgs__msg__InternationalSignSection set;
  /// container 10
  v2x_msgs__msg__InternationalSignNumberOfLane nol;
} v2x_msgs__msg__GddAttribute;

// Struct for a sequence of v2x_msgs__msg__GddAttribute.
typedef struct v2x_msgs__msg__GddAttribute__Sequence
{
  v2x_msgs__msg__GddAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GddAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTE__STRUCT_H_
