// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/EmergencyContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/emergency_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/emergency_container__functions.h"
#include "v2x_msgs/msg/detail/emergency_container__struct.h"


// Include directives for member types
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/light_bar_siren_in_use.h"
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__rosidl_typesupport_introspection_c.h"
// Member `incident_indication`
#include "v2x_msgs/msg/cause_code.h"
// Member `incident_indication`
#include "v2x_msgs/msg/detail/cause_code__rosidl_typesupport_introspection_c.h"
// Member `emergency_priority`
#include "v2x_msgs/msg/emergency_priority.h"
// Member `emergency_priority`
#include "v2x_msgs/msg/detail/emergency_priority__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__EmergencyContainer__init(message_memory);
}

void v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__EmergencyContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_member_array[5] = {
  {
    "light_bar_siren_in_use",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EmergencyContainer, light_bar_siren_in_use),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__EmergencyContainer, incident_indication_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__EmergencyContainer, incident_indication),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_priority_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EmergencyContainer, emergency_priority_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__EmergencyContainer, emergency_priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "EmergencyContainer",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__EmergencyContainer),
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_member_array,  // message members
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EmergencyContainer)() {
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LightBarSirenInUse)();
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CauseCode)();
  v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EmergencyPriority)();
  if (!v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__EmergencyContainer__rosidl_typesupport_introspection_c__EmergencyContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
