// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/movement_state__functions.h"
#include "v2x_msgs/msg/detail/movement_state__struct.h"


// Include directives for member types
// Member `movement_name`
#include "v2x_msgs/msg/descriptive_name.h"
// Member `movement_name`
#include "v2x_msgs/msg/detail/descriptive_name__rosidl_typesupport_introspection_c.h"
// Member `signal_group`
#include "v2x_msgs/msg/signal_group_id.h"
// Member `signal_group`
#include "v2x_msgs/msg/detail/signal_group_id__rosidl_typesupport_introspection_c.h"
// Member `state_time_speed`
#include "v2x_msgs/msg/movement_event_list.h"
// Member `state_time_speed`
#include "v2x_msgs/msg/detail/movement_event_list__rosidl_typesupport_introspection_c.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/maneuver_assist_list.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/detail/maneuver_assist_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_movement_state.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_movement_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__MovementState__init(message_memory);
}

void v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function(void * message_memory)
{
  v2x_msgs__msg__MovementState__fini(message_memory);
}

size_t v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__size_function__MovementState__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegMovementState__Sequence * member =
    (const v2x_msgs__msg__RegMovementState__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementState__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegMovementState__Sequence * member =
    (const v2x_msgs__msg__RegMovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_function__MovementState__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegMovementState__Sequence * member =
    (v2x_msgs__msg__RegMovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__fetch_function__MovementState__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegMovementState * item =
    ((const v2x_msgs__msg__RegMovementState *)
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementState__regional(untyped_member, index));
  v2x_msgs__msg__RegMovementState * value =
    (v2x_msgs__msg__RegMovementState *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__assign_function__MovementState__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegMovementState * item =
    ((v2x_msgs__msg__RegMovementState *)
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_function__MovementState__regional(untyped_member, index));
  const v2x_msgs__msg__RegMovementState * value =
    (const v2x_msgs__msg__RegMovementState *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__resize_function__MovementState__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegMovementState__Sequence * member =
    (v2x_msgs__msg__RegMovementState__Sequence *)(untyped_member);
  v2x_msgs__msg__RegMovementState__Sequence__fini(member);
  return v2x_msgs__msg__RegMovementState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[8] = {
  {
    "movement_name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, movement_name_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movement_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, movement_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, signal_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_time_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, state_time_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_assist_list_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, maneuver_assist_list_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_assist_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, maneuver_assist_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, regional_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MovementState, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__size_function__MovementState__regional,  // size() function pointer
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_const_function__MovementState__regional,  // get_const(index) function pointer
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__get_function__MovementState__regional,  // get(index) function pointer
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__fetch_function__MovementState__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__assign_function__MovementState__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__resize_function__MovementState__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_members = {
  "v2x_msgs__msg",  // message namespace
  "MovementState",  // message name
  8,  // number of fields
  sizeof(v2x_msgs__msg__MovementState),
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array,  // message members
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle = {
  0,
  &v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MovementState)() {
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalGroupID)();
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MovementEventList)();
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ManeuverAssistList)();
  v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegMovementState)();
  if (!v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__MovementState__rosidl_typesupport_introspection_c__MovementState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
