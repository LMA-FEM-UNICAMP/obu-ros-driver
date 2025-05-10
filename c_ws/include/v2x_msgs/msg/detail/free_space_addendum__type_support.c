// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/FreeSpaceAddendum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/free_space_addendum__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/free_space_addendum__functions.h"
#include "v2x_msgs/msg/detail/free_space_addendum__struct.h"


// Include directives for member types
// Member `free_space_confidence`
#include "v2x_msgs/msg/free_space_confidence.h"
// Member `free_space_confidence`
#include "v2x_msgs/msg/detail/free_space_confidence__rosidl_typesupport_introspection_c.h"
// Member `free_space_area`
#include "v2x_msgs/msg/free_space_area.h"
// Member `free_space_area`
#include "v2x_msgs/msg/detail/free_space_area__rosidl_typesupport_introspection_c.h"
// Member `sensor_idlist`
#include "v2x_msgs/msg/sensor_id_list.h"
// Member `sensor_idlist`
#include "v2x_msgs/msg/detail/sensor_id_list__rosidl_typesupport_introspection_c.h"
// Member `shadowing_applies`
#include "v2x_msgs/msg/shadowing_applies.h"
// Member `shadowing_applies`
#include "v2x_msgs/msg/detail/shadowing_applies__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__FreeSpaceAddendum__init(message_memory);
}

void v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_fini_function(void * message_memory)
{
  v2x_msgs__msg__FreeSpaceAddendum__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array[6] = {
  {
    "free_space_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, free_space_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, free_space_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_idlist_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, sensor_idlist_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_idlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, sensor_idlist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shadowing_applies_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, shadowing_applies_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shadowing_applies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceAddendum, shadowing_applies),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_members = {
  "v2x_msgs__msg",  // message namespace
  "FreeSpaceAddendum",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__FreeSpaceAddendum),
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array,  // message members
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_type_support_handle = {
  0,
  &v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceAddendum)() {
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceConfidence)();
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceArea)();
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SensorIdList)();
  v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ShadowingApplies)();
  if (!v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__FreeSpaceAddendum__rosidl_typesupport_introspection_c__FreeSpaceAddendum_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
