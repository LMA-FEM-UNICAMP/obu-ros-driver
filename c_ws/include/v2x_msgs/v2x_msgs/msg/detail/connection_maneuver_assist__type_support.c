// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/connection_maneuver_assist__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
#include "v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"


// Include directives for member types
// Member `connection_id`
#include "v2x_msgs/msg/lane_connection_id.h"
// Member `connection_id`
#include "v2x_msgs/msg/detail/lane_connection_id__rosidl_typesupport_introspection_c.h"
// Member `queue_length`
// Member `available_storage_length`
#include "v2x_msgs/msg/zone_length.h"
// Member `queue_length`
// Member `available_storage_length`
#include "v2x_msgs/msg/detail/zone_length__rosidl_typesupport_introspection_c.h"
// Member `wait_on_stop`
#include "v2x_msgs/msg/wait_on_stopline.h"
// Member `wait_on_stop`
#include "v2x_msgs/msg/detail/wait_on_stopline__rosidl_typesupport_introspection_c.h"
// Member `ped_bicycle_detect`
#include "v2x_msgs/msg/pedestrian_bicycle_detect.h"
// Member `ped_bicycle_detect`
#include "v2x_msgs/msg/detail/pedestrian_bicycle_detect__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/connection.h"
// Member `regional`
#include "v2x_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ConnectionManeuverAssist__init(message_memory);
}

void v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_fini_function(void * message_memory)
{
  v2x_msgs__msg__ConnectionManeuverAssist__fini(message_memory);
}

size_t v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__size_function__ConnectionManeuverAssist__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__Connection__Sequence * member =
    (const v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_const_function__ConnectionManeuverAssist__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__Connection__Sequence * member =
    (const v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_function__ConnectionManeuverAssist__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__Connection__Sequence * member =
    (v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__fetch_function__ConnectionManeuverAssist__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__Connection * item =
    ((const v2x_msgs__msg__Connection *)
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_const_function__ConnectionManeuverAssist__regional(untyped_member, index));
  v2x_msgs__msg__Connection * value =
    (v2x_msgs__msg__Connection *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__assign_function__ConnectionManeuverAssist__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__Connection * item =
    ((v2x_msgs__msg__Connection *)
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_function__ConnectionManeuverAssist__regional(untyped_member, index));
  const v2x_msgs__msg__Connection * value =
    (const v2x_msgs__msg__Connection *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__resize_function__ConnectionManeuverAssist__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__Connection__Sequence * member =
    (v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  v2x_msgs__msg__Connection__Sequence__fini(member);
  return v2x_msgs__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[11] = {
  {
    "connection_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, connection_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queue_length_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, queue_length_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queue_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, queue_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_storage_length_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, available_storage_length_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_storage_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, available_storage_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_on_stop_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, wait_on_stop_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_on_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, wait_on_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ped_bicycle_detect_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, ped_bicycle_detect_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ped_bicycle_detect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, ped_bicycle_detect),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ConnectionManeuverAssist, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__size_function__ConnectionManeuverAssist__regional,  // size() function pointer
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_const_function__ConnectionManeuverAssist__regional,  // get_const(index) function pointer
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__get_function__ConnectionManeuverAssist__regional,  // get(index) function pointer
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__fetch_function__ConnectionManeuverAssist__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__assign_function__ConnectionManeuverAssist__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__resize_function__ConnectionManeuverAssist__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ConnectionManeuverAssist",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__ConnectionManeuverAssist),
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array,  // message members
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ConnectionManeuverAssist)() {
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneConnectionID)();
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ZoneLength)();
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ZoneLength)();
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, WaitOnStopline)();
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PedestrianBicycleDetect)();
  v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Connection)();
  if (!v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ConnectionManeuverAssist__rosidl_typesupport_introspection_c__ConnectionManeuverAssist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
