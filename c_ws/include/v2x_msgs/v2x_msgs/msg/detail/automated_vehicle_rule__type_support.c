// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/AutomatedVehicleRule.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/automated_vehicle_rule__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/automated_vehicle_rule__functions.h"
#include "v2x_msgs/msg/detail/automated_vehicle_rule__struct.h"


// Include directives for member types
// Member `priority`
#include "v2x_msgs/msg/priority_level.h"
// Member `priority`
#include "v2x_msgs/msg/detail/priority_level__rosidl_typesupport_introspection_c.h"
// Member `allowed_sae_automation_levels`
#include "v2x_msgs/msg/sae_automation_levels.h"
// Member `allowed_sae_automation_levels`
#include "v2x_msgs/msg/detail/sae_automation_levels__rosidl_typesupport_introspection_c.h"
// Member `min_gap_between_vehicles`
// Member `rec_gap_between_vehicles`
#include "v2x_msgs/msg/gap_between_vehicles.h"
// Member `min_gap_between_vehicles`
// Member `rec_gap_between_vehicles`
#include "v2x_msgs/msg/detail/gap_between_vehicles__rosidl_typesupport_introspection_c.h"
// Member `automated_vehicle_max_speed_limit`
// Member `automated_vehicle_min_speed_limit`
// Member `automated_vehicle_speed_recommendation`
#include "v2x_msgs/msg/speed_value.h"
// Member `automated_vehicle_max_speed_limit`
// Member `automated_vehicle_min_speed_limit`
// Member `automated_vehicle_speed_recommendation`
#include "v2x_msgs/msg/detail/speed_value__rosidl_typesupport_introspection_c.h"
// Member `road_sign_codes`
#include "v2x_msgs/msg/road_sign_codes.h"
// Member `road_sign_codes`
#include "v2x_msgs/msg/detail/road_sign_codes__rosidl_typesupport_introspection_c.h"
// Member `extra_text`
#include "v2x_msgs/msg/constraint_text_lines2.h"
// Member `extra_text`
#include "v2x_msgs/msg/detail/constraint_text_lines2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__AutomatedVehicleRule__init(message_memory);
}

void v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_fini_function(void * message_memory)
{
  v2x_msgs__msg__AutomatedVehicleRule__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[16] = {
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_sae_automation_levels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, allowed_sae_automation_levels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_gap_between_vehicles_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, min_gap_between_vehicles_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_gap_between_vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, min_gap_between_vehicles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rec_gap_between_vehicles_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, rec_gap_between_vehicles_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rec_gap_between_vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, rec_gap_between_vehicles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_max_speed_limit_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_max_speed_limit_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_max_speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_max_speed_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_min_speed_limit_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_min_speed_limit_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_min_speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_min_speed_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_speed_recommendation_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_speed_recommendation_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "automated_vehicle_speed_recommendation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, automated_vehicle_speed_recommendation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_sign_codes_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, road_sign_codes_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_sign_codes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, road_sign_codes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extra_text_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, extra_text_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extra_text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AutomatedVehicleRule, extra_text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_members = {
  "v2x_msgs__msg",  // message namespace
  "AutomatedVehicleRule",  // message name
  16,  // number of fields
  sizeof(v2x_msgs__msg__AutomatedVehicleRule),
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array,  // message members
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_type_support_handle = {
  0,
  &v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AutomatedVehicleRule)() {
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PriorityLevel)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SaeAutomationLevels)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GapBetweenVehicles)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GapBetweenVehicles)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedValue)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedValue)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedValue)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadSignCodes)();
  v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ConstraintTextLines2)();
  if (!v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__AutomatedVehicleRule__rosidl_typesupport_introspection_c__AutomatedVehicleRule_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
