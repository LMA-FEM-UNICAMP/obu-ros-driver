// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/node_attribute_set_xy__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
#include "v2x_msgs/msg/detail/node_attribute_set_xy__struct.h"


// Include directives for member types
// Member `local_node`
#include "v2x_msgs/msg/node_attribute_xy_list.h"
// Member `local_node`
#include "v2x_msgs/msg/detail/node_attribute_xy_list__rosidl_typesupport_introspection_c.h"
// Member `disabled`
// Member `enabled`
#include "v2x_msgs/msg/segment_attribute_xy_list.h"
// Member `disabled`
// Member `enabled`
#include "v2x_msgs/msg/detail/segment_attribute_xy_list__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "v2x_msgs/msg/lane_data_attribute_list.h"
// Member `data`
#include "v2x_msgs/msg/detail/lane_data_attribute_list__rosidl_typesupport_introspection_c.h"
// Member `d_width`
// Member `d_elevation`
#include "v2x_msgs/msg/offset_b10.h"
// Member `d_width`
// Member `d_elevation`
#include "v2x_msgs/msg/detail/offset_b10__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_node_attribute_set_xy.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_node_attribute_set_xy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__NodeAttributeSetXY__init(message_memory);
}

void v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function(void * message_memory)
{
  v2x_msgs__msg__NodeAttributeSetXY__fini(message_memory);
}

size_t v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__NodeAttributeSetXY__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegNodeAttributeSetXY__Sequence * member =
    (const v2x_msgs__msg__RegNodeAttributeSetXY__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeAttributeSetXY__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegNodeAttributeSetXY__Sequence * member =
    (const v2x_msgs__msg__RegNodeAttributeSetXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__NodeAttributeSetXY__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegNodeAttributeSetXY__Sequence * member =
    (v2x_msgs__msg__RegNodeAttributeSetXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__fetch_function__NodeAttributeSetXY__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegNodeAttributeSetXY * item =
    ((const v2x_msgs__msg__RegNodeAttributeSetXY *)
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeAttributeSetXY__regional(untyped_member, index));
  v2x_msgs__msg__RegNodeAttributeSetXY * value =
    (v2x_msgs__msg__RegNodeAttributeSetXY *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__assign_function__NodeAttributeSetXY__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegNodeAttributeSetXY * item =
    ((v2x_msgs__msg__RegNodeAttributeSetXY *)
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__NodeAttributeSetXY__regional(untyped_member, index));
  const v2x_msgs__msg__RegNodeAttributeSetXY * value =
    (const v2x_msgs__msg__RegNodeAttributeSetXY *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeAttributeSetXY__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegNodeAttributeSetXY__Sequence * member =
    (v2x_msgs__msg__RegNodeAttributeSetXY__Sequence *)(untyped_member);
  v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__fini(member);
  return v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[14] = {
  {
    "local_node_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, local_node_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, local_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, disabled_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, disabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, enabled_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, data_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, d_width_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, d_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, d_elevation_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d_elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, d_elevation),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__NodeAttributeSetXY, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__size_function__NodeAttributeSetXY__regional,  // size() function pointer
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_const_function__NodeAttributeSetXY__regional,  // get_const(index) function pointer
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__get_function__NodeAttributeSetXY__regional,  // get(index) function pointer
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__fetch_function__NodeAttributeSetXY__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__assign_function__NodeAttributeSetXY__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__resize_function__NodeAttributeSetXY__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members = {
  "v2x_msgs__msg",  // message namespace
  "NodeAttributeSetXY",  // message name
  14,  // number of fields
  sizeof(v2x_msgs__msg__NodeAttributeSetXY),
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array,  // message members
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle = {
  0,
  &v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeAttributeSetXY)() {
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeAttributeXYList)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SegmentAttributeXYList)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SegmentAttributeXYList)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneDataAttributeList)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB10)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetB10)();
  v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegNodeAttributeSetXY)();
  if (!v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__NodeAttributeSetXY__rosidl_typesupport_introspection_c__NodeAttributeSetXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
