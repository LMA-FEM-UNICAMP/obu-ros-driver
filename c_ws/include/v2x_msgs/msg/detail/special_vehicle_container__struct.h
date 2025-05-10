// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpecialVehicleContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPECIAL_VEHICLE_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_NOTHING = 0ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_PUBLIC_TRANSPORT_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_PUBLIC_TRANSPORT_CONTAINER = 1ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_SPECIAL_TRANSPORT_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_SPECIAL_TRANSPORT_CONTAINER = 2ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_DANGEROUS_GOODS_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_DANGEROUS_GOODS_CONTAINER = 3ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_ROAD_WORKS_CONTAINER_BASIC'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_ROAD_WORKS_CONTAINER_BASIC = 4ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_RESCUE_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_RESCUE_CONTAINER = 5ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_EMERGENCY_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_EMERGENCY_CONTAINER = 6ll
};

/// Constant 'SPECIAL_VEHICLE_CONTAINER_SAFETY_CAR_CONTAINER'.
enum
{
  v2x_msgs__msg__SpecialVehicleContainer__SPECIAL_VEHICLE_CONTAINER_SAFETY_CAR_CONTAINER = 7ll
};

// Include directives for member types
// Member 'public_transport_container'
#include "v2x_msgs/msg/detail/public_transport_container__struct.h"
// Member 'special_transport_container'
#include "v2x_msgs/msg/detail/special_transport_container__struct.h"
// Member 'dangerous_goods_container'
#include "v2x_msgs/msg/detail/dangerous_goods_container__struct.h"
// Member 'road_works_container_basic'
#include "v2x_msgs/msg/detail/road_works_container_basic__struct.h"
// Member 'rescue_container'
#include "v2x_msgs/msg/detail/rescue_container__struct.h"
// Member 'emergency_container'
#include "v2x_msgs/msg/detail/emergency_container__struct.h"
// Member 'safety_car_container'
#include "v2x_msgs/msg/detail/safety_car_container__struct.h"

/// Struct defined in msg/SpecialVehicleContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpecialVehicleContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t special_vehicle_container_container_select;
  /// container 1
  v2x_msgs__msg__PublicTransportContainer public_transport_container;
  /// container 2
  v2x_msgs__msg__SpecialTransportContainer special_transport_container;
  /// container 3
  v2x_msgs__msg__DangerousGoodsContainer dangerous_goods_container;
  /// container 4
  v2x_msgs__msg__RoadWorksContainerBasic road_works_container_basic;
  /// container 5
  v2x_msgs__msg__RescueContainer rescue_container;
  /// container 6
  v2x_msgs__msg__EmergencyContainer emergency_container;
  /// container 7
  v2x_msgs__msg__SafetyCarContainer safety_car_container;
} v2x_msgs__msg__SpecialVehicleContainer;

// Struct for a sequence of v2x_msgs__msg__SpecialVehicleContainer.
typedef struct v2x_msgs__msg__SpecialVehicleContainer__Sequence
{
  v2x_msgs__msg__SpecialVehicleContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpecialVehicleContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_CONTAINER__STRUCT_H_
