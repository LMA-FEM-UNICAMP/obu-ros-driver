// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/MapDataAddGrpC.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/map_data_add_grp_c__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/map_data_add_grp_c__functions.h"
#include "v2x_msgs/msg/detail/map_data_add_grp_c__struct.h"


// Include directives for member types
// Member `signal_head_locations`
#include "v2x_msgs/msg/signal_head_location_list.h"
// Member `signal_head_locations`
#include "v2x_msgs/msg/detail/signal_head_location_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__MapDataAddGrpC__init(message_memory);
}

void v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_fini_function(void * message_memory)
{
  v2x_msgs__msg__MapDataAddGrpC__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_member_array[2] = {
  {
    "signal_head_locations_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapDataAddGrpC, signal_head_locations_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_head_locations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapDataAddGrpC, signal_head_locations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_members = {
  "v2x_msgs__msg",  // message namespace
  "MapDataAddGrpC",  // message name
  2,  // number of fields
  sizeof(v2x_msgs__msg__MapDataAddGrpC),
  v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_member_array,  // message members
  v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_type_support_handle = {
  0,
  &v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MapDataAddGrpC)() {
  v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalHeadLocationList)();
  if (!v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__MapDataAddGrpC__rosidl_typesupport_introspection_c__MapDataAddGrpC_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
