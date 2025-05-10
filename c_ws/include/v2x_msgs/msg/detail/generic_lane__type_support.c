// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/generic_lane__functions.h"
#include "v2x_msgs/msg/detail/generic_lane__struct.h"


// Include directives for member types
// Member `lane_id`
#include "v2x_msgs/msg/lane_id.h"
// Member `lane_id`
#include "v2x_msgs/msg/detail/lane_id__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "v2x_msgs/msg/descriptive_name.h"
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__rosidl_typesupport_introspection_c.h"
// Member `ingress_approach`
// Member `egress_approach`
#include "v2x_msgs/msg/approach_id.h"
// Member `ingress_approach`
// Member `egress_approach`
#include "v2x_msgs/msg/detail/approach_id__rosidl_typesupport_introspection_c.h"
// Member `lane_attributes`
#include "v2x_msgs/msg/lane_attributes.h"
// Member `lane_attributes`
#include "v2x_msgs/msg/detail/lane_attributes__rosidl_typesupport_introspection_c.h"
// Member `maneuvers`
#include "v2x_msgs/msg/allowed_maneuvers.h"
// Member `maneuvers`
#include "v2x_msgs/msg/detail/allowed_maneuvers__rosidl_typesupport_introspection_c.h"
// Member `node_list`
#include "v2x_msgs/msg/node_list_xy.h"
// Member `node_list`
#include "v2x_msgs/msg/detail/node_list_xy__rosidl_typesupport_introspection_c.h"
// Member `connects_to`
#include "v2x_msgs/msg/connects_to_list.h"
// Member `connects_to`
#include "v2x_msgs/msg/detail/connects_to_list__rosidl_typesupport_introspection_c.h"
// Member `overlays`
#include "v2x_msgs/msg/overlay_lane_list.h"
// Member `overlays`
#include "v2x_msgs/msg/detail/overlay_lane_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_generic_lane.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_generic_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__GenericLane__init(message_memory);
}

void v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function(void * message_memory)
{
  v2x_msgs__msg__GenericLane__fini(message_memory);
}

size_t v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegGenericLane__Sequence * member =
    (const v2x_msgs__msg__RegGenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegGenericLane__Sequence * member =
    (const v2x_msgs__msg__RegGenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegGenericLane__Sequence * member =
    (v2x_msgs__msg__RegGenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegGenericLane * item =
    ((const v2x_msgs__msg__RegGenericLane *)
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__regional(untyped_member, index));
  v2x_msgs__msg__RegGenericLane * value =
    (v2x_msgs__msg__RegGenericLane *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegGenericLane * item =
    ((v2x_msgs__msg__RegGenericLane *)
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__regional(untyped_member, index));
  const v2x_msgs__msg__RegGenericLane * value =
    (const v2x_msgs__msg__RegGenericLane *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegGenericLane__Sequence * member =
    (v2x_msgs__msg__RegGenericLane__Sequence *)(untyped_member);
  v2x_msgs__msg__RegGenericLane__Sequence__fini(member);
  return v2x_msgs__msg__RegGenericLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[17] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, name_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__GenericLane, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingress_approach_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, ingress_approach_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, ingress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egress_approach_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, egress_approach_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, egress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, lane_attributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, maneuvers_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, maneuvers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, node_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connects_to_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, connects_to_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connects_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, connects_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overlays_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, overlays_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overlays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GenericLane, overlays),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__GenericLane, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__GenericLane, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__regional,  // size() function pointer
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__regional,  // get_const(index) function pointer
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__regional,  // get(index) function pointer
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members = {
  "v2x_msgs__msg",  // message namespace
  "GenericLane",  // message name
  17,  // number of fields
  sizeof(v2x_msgs__msg__GenericLane),
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array,  // message members
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle = {
  0,
  &v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GenericLane)() {
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneID)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApproachID)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApproachID)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneAttributes)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AllowedManeuvers)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeListXY)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ConnectsToList)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OverlayLaneList)();
  v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegGenericLane)();
  if (!v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
