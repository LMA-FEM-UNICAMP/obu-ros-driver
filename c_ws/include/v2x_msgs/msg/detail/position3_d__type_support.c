// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/position3_d__functions.h"
#include "v2x_msgs/msg/detail/position3_d__struct.h"


// Include directives for member types
// Member `pos_lat`
#include "v2x_msgs/msg/latitude.h"
// Member `pos_lat`
#include "v2x_msgs/msg/detail/latitude__rosidl_typesupport_introspection_c.h"
// Member `pos_long`
#include "v2x_msgs/msg/longitude.h"
// Member `pos_long`
#include "v2x_msgs/msg/detail/longitude__rosidl_typesupport_introspection_c.h"
// Member `elevation`
#include "v2x_msgs/msg/elevation.h"
// Member `elevation`
#include "v2x_msgs/msg/detail/elevation__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_position3_d.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_position3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__Position3D__init(message_memory);
}

void v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_fini_function(void * message_memory)
{
  v2x_msgs__msg__Position3D__fini(message_memory);
}

size_t v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__size_function__Position3D__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegPosition3D__Sequence * member =
    (const v2x_msgs__msg__RegPosition3D__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_const_function__Position3D__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegPosition3D__Sequence * member =
    (const v2x_msgs__msg__RegPosition3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_function__Position3D__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegPosition3D__Sequence * member =
    (v2x_msgs__msg__RegPosition3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__fetch_function__Position3D__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegPosition3D * item =
    ((const v2x_msgs__msg__RegPosition3D *)
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_const_function__Position3D__regional(untyped_member, index));
  v2x_msgs__msg__RegPosition3D * value =
    (v2x_msgs__msg__RegPosition3D *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__assign_function__Position3D__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegPosition3D * item =
    ((v2x_msgs__msg__RegPosition3D *)
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_function__Position3D__regional(untyped_member, index));
  const v2x_msgs__msg__RegPosition3D * value =
    (const v2x_msgs__msg__RegPosition3D *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__resize_function__Position3D__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegPosition3D__Sequence * member =
    (v2x_msgs__msg__RegPosition3D__Sequence *)(untyped_member);
  v2x_msgs__msg__RegPosition3D__Sequence__fini(member);
  return v2x_msgs__msg__RegPosition3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array[6] = {
  {
    "pos_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Position3D, pos_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_long",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Position3D, pos_long),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Position3D, elevation_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Position3D, elevation),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__Position3D, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__Position3D, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__size_function__Position3D__regional,  // size() function pointer
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_const_function__Position3D__regional,  // get_const(index) function pointer
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__get_function__Position3D__regional,  // get(index) function pointer
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__fetch_function__Position3D__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__assign_function__Position3D__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__resize_function__Position3D__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_members = {
  "v2x_msgs__msg",  // message namespace
  "Position3D",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__Position3D),
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array,  // message members
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_type_support_handle = {
  0,
  &v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Position3D)() {
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Latitude)();
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Longitude)();
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Elevation)();
  v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegPosition3D)();
  if (!v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__Position3D__rosidl_typesupport_introspection_c__Position3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
