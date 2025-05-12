// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/RoadWorksContainerExtended.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/road_works_container_extended__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/road_works_container_extended__functions.h"
#include "v2x_msgs/msg/detail/road_works_container_extended__struct.h"


// Include directives for member types
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/light_bar_siren_in_use.h"
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__rosidl_typesupport_introspection_c.h"
// Member `closed_lanes`
#include "v2x_msgs/msg/closed_lanes.h"
// Member `closed_lanes`
#include "v2x_msgs/msg/detail/closed_lanes__rosidl_typesupport_introspection_c.h"
// Member `restriction`
#include "v2x_msgs/msg/restricted_types.h"
// Member `restriction`
#include "v2x_msgs/msg/detail/restricted_types__rosidl_typesupport_introspection_c.h"
// Member `speed_limit`
#include "v2x_msgs/msg/speed_limit.h"
// Member `speed_limit`
#include "v2x_msgs/msg/detail/speed_limit__rosidl_typesupport_introspection_c.h"
// Member `incident_indication`
#include "v2x_msgs/msg/cause_code.h"
// Member `incident_indication`
#include "v2x_msgs/msg/detail/cause_code__rosidl_typesupport_introspection_c.h"
// Member `recommended_path`
#include "v2x_msgs/msg/itinerary_path.h"
// Member `recommended_path`
#include "v2x_msgs/msg/detail/itinerary_path__rosidl_typesupport_introspection_c.h"
// Member `starting_point_speed_limit`
#include "v2x_msgs/msg/delta_reference_position.h"
// Member `starting_point_speed_limit`
#include "v2x_msgs/msg/detail/delta_reference_position__rosidl_typesupport_introspection_c.h"
// Member `traffic_flow_rule`
#include "v2x_msgs/msg/traffic_rule.h"
// Member `traffic_flow_rule`
#include "v2x_msgs/msg/detail/traffic_rule__rosidl_typesupport_introspection_c.h"
// Member `reference_denms`
#include "v2x_msgs/msg/reference_denms.h"
// Member `reference_denms`
#include "v2x_msgs/msg/detail/reference_denms__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__RoadWorksContainerExtended__init(message_memory);
}

void v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_fini_function(void * message_memory)
{
  v2x_msgs__msg__RoadWorksContainerExtended__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[18] = {
  {
    "light_bar_siren_in_use_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, light_bar_siren_in_use_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_bar_siren_in_use",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, light_bar_siren_in_use),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closed_lanes_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, closed_lanes_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closed_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, closed_lanes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, restriction_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, restriction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, speed_limit_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, speed_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "incident_indication_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, incident_indication_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "incident_indication",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, incident_indication),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recommended_path_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, recommended_path_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recommended_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, recommended_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "starting_point_speed_limit_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, starting_point_speed_limit_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "starting_point_speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, starting_point_speed_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_flow_rule_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, traffic_flow_rule_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_flow_rule",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, traffic_flow_rule),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_denms_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, reference_denms_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_denms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RoadWorksContainerExtended, reference_denms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_members = {
  "v2x_msgs__msg",  // message namespace
  "RoadWorksContainerExtended",  // message name
  18,  // number of fields
  sizeof(v2x_msgs__msg__RoadWorksContainerExtended),
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array,  // message members
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_type_support_handle = {
  0,
  &v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadWorksContainerExtended)() {
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LightBarSirenInUse)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ClosedLanes)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RestrictedTypes)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedLimit)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CauseCode)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ItineraryPath)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaReferencePosition)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TrafficRule)();
  v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ReferenceDenms)();
  if (!v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__RoadWorksContainerExtended__rosidl_typesupport_introspection_c__RoadWorksContainerExtended_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
