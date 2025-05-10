// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/intersection_state__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/intersection_state__functions.h"
#include "v2x_msgs/msg/detail/intersection_state__struct.h"


// Include directives for member types
// Member `name`
#include "v2x_msgs/msg/descriptive_name.h"
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "v2x_msgs/msg/intersection_reference_id.h"
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `revision`
#include "v2x_msgs/msg/msg_count.h"
// Member `revision`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "v2x_msgs/msg/intersection_status_object.h"
// Member `status`
#include "v2x_msgs/msg/detail/intersection_status_object__rosidl_typesupport_introspection_c.h"
// Member `moy`
#include "v2x_msgs/msg/minute_of_the_year.h"
// Member `moy`
#include "v2x_msgs/msg/detail/minute_of_the_year__rosidl_typesupport_introspection_c.h"
// Member `time_stamp`
#include "v2x_msgs/msg/d_second.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/d_second__rosidl_typesupport_introspection_c.h"
// Member `enabled_lanes`
#include "v2x_msgs/msg/enabled_lane_list.h"
// Member `enabled_lanes`
#include "v2x_msgs/msg/detail/enabled_lane_list__rosidl_typesupport_introspection_c.h"
// Member `states`
#include "v2x_msgs/msg/movement_list.h"
// Member `states`
#include "v2x_msgs/msg/detail/movement_list__rosidl_typesupport_introspection_c.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/maneuver_assist_list.h"
// Member `maneuver_assist_list`
#include "v2x_msgs/msg/detail/maneuver_assist_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_intersection_state.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_intersection_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__IntersectionState__init(message_memory);
}

void v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function(void * message_memory)
{
  v2x_msgs__msg__IntersectionState__fini(message_memory);
}

size_t v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegIntersectionState__Sequence * member =
    (const v2x_msgs__msg__RegIntersectionState__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegIntersectionState__Sequence * member =
    (const v2x_msgs__msg__RegIntersectionState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegIntersectionState__Sequence * member =
    (v2x_msgs__msg__RegIntersectionState__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegIntersectionState * item =
    ((const v2x_msgs__msg__RegIntersectionState *)
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__regional(untyped_member, index));
  v2x_msgs__msg__RegIntersectionState * value =
    (v2x_msgs__msg__RegIntersectionState *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegIntersectionState * item =
    ((v2x_msgs__msg__RegIntersectionState *)
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__regional(untyped_member, index));
  const v2x_msgs__msg__RegIntersectionState * value =
    (const v2x_msgs__msg__RegIntersectionState *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegIntersectionState__Sequence * member =
    (v2x_msgs__msg__RegIntersectionState__Sequence *)(untyped_member);
  v2x_msgs__msg__RegIntersectionState__Sequence__fini(member);
  return v2x_msgs__msg__RegIntersectionState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[16] = {
  {
    "name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, name_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moy_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, moy_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, moy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, time_stamp_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled_lanes_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, enabled_lanes_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, enabled_lanes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionState, states),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionState, maneuver_assist_list_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionState, maneuver_assist_list),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionState, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionState, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__regional,  // size() function pointer
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__regional,  // get_const(index) function pointer
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__regional,  // get(index) function pointer
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members = {
  "v2x_msgs__msg",  // message namespace
  "IntersectionState",  // message name
  16,  // number of fields
  sizeof(v2x_msgs__msg__IntersectionState),
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array,  // message members
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle = {
  0,
  &v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionState)() {
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionReferenceID)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionStatusObject)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EnabledLaneList)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MovementList)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ManeuverAssistList)();
  v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegIntersectionState)();
  if (!v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
