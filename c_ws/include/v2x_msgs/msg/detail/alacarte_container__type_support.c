// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/AlacarteContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/alacarte_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/alacarte_container__functions.h"
#include "v2x_msgs/msg/detail/alacarte_container__struct.h"


// Include directives for member types
// Member `lane_position`
#include "v2x_msgs/msg/lane_position.h"
// Member `lane_position`
#include "v2x_msgs/msg/detail/lane_position__rosidl_typesupport_introspection_c.h"
// Member `impact_reduction`
#include "v2x_msgs/msg/impact_reduction_container.h"
// Member `impact_reduction`
#include "v2x_msgs/msg/detail/impact_reduction_container__rosidl_typesupport_introspection_c.h"
// Member `external_temperature`
#include "v2x_msgs/msg/temperature.h"
// Member `external_temperature`
#include "v2x_msgs/msg/detail/temperature__rosidl_typesupport_introspection_c.h"
// Member `road_works`
#include "v2x_msgs/msg/road_works_container_extended.h"
// Member `road_works`
#include "v2x_msgs/msg/detail/road_works_container_extended__rosidl_typesupport_introspection_c.h"
// Member `positioning_solution`
#include "v2x_msgs/msg/positioning_solution_type.h"
// Member `positioning_solution`
#include "v2x_msgs/msg/detail/positioning_solution_type__rosidl_typesupport_introspection_c.h"
// Member `stationary_vehicle`
#include "v2x_msgs/msg/stationary_vehicle_container.h"
// Member `stationary_vehicle`
#include "v2x_msgs/msg/detail/stationary_vehicle_container__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__AlacarteContainer__init(message_memory);
}

void v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__AlacarteContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[12] = {
  {
    "lane_position_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, lane_position_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, lane_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "impact_reduction_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, impact_reduction_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "impact_reduction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, impact_reduction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "external_temperature_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, external_temperature_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "external_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, external_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_works_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, road_works_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_works",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, road_works),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positioning_solution_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, positioning_solution_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positioning_solution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, positioning_solution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_vehicle_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, stationary_vehicle_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AlacarteContainer, stationary_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "AlacarteContainer",  // message name
  12,  // number of fields
  sizeof(v2x_msgs__msg__AlacarteContainer),
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array,  // message members
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AlacarteContainer)() {
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LanePosition)();
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ImpactReductionContainer)();
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Temperature)();
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadWorksContainerExtended)();
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PositioningSolutionType)();
  v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationaryVehicleContainer)();
  if (!v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__AlacarteContainer__rosidl_typesupport_introspection_c__AlacarteContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
