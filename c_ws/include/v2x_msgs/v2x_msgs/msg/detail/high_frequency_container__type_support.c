// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/HighFrequencyContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/high_frequency_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/high_frequency_container__functions.h"
#include "v2x_msgs/msg/detail/high_frequency_container__struct.h"


// Include directives for member types
// Member `basic_vehicle_container_high_frequency`
#include "v2x_msgs/msg/basic_vehicle_container_high_frequency.h"
// Member `basic_vehicle_container_high_frequency`
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__rosidl_typesupport_introspection_c.h"
// Member `rsu_container_high_frequency`
#include "v2x_msgs/msg/rsu_container_high_frequency.h"
// Member `rsu_container_high_frequency`
#include "v2x_msgs/msg/detail/rsu_container_high_frequency__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__HighFrequencyContainer__init(message_memory);
}

void v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__HighFrequencyContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_member_array[3] = {
  {
    "high_frequency_container_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__HighFrequencyContainer, high_frequency_container_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basic_vehicle_container_high_frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__HighFrequencyContainer, basic_vehicle_container_high_frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rsu_container_high_frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__HighFrequencyContainer, rsu_container_high_frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "HighFrequencyContainer",  // message name
  3,  // number of fields
  sizeof(v2x_msgs__msg__HighFrequencyContainer),
  v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_member_array,  // message members
  v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HighFrequencyContainer)() {
  v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BasicVehicleContainerHighFrequency)();
  v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RSUContainerHighFrequency)();
  if (!v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__HighFrequencyContainer__rosidl_typesupport_introspection_c__HighFrequencyContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
