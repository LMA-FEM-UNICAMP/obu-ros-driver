// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/lane_data_attribute__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/lane_data_attribute__functions.h"
#include "v2x_msgs/msg/detail/lane_data_attribute__struct.h"


// Include directives for member types
// Member `path_end_point_angle`
#include "v2x_msgs/msg/delta_angle.h"
// Member `path_end_point_angle`
#include "v2x_msgs/msg/detail/delta_angle__rosidl_typesupport_introspection_c.h"
// Member `lane_crown_point_center`
// Member `lane_crown_point_left`
// Member `lane_crown_point_right`
#include "v2x_msgs/msg/roadway_crown_angle.h"
// Member `lane_crown_point_center`
// Member `lane_crown_point_left`
// Member `lane_crown_point_right`
#include "v2x_msgs/msg/detail/roadway_crown_angle__rosidl_typesupport_introspection_c.h"
// Member `lane_angle`
#include "v2x_msgs/msg/merge_diverge_node_angle.h"
// Member `lane_angle`
#include "v2x_msgs/msg/detail/merge_diverge_node_angle__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "v2x_msgs/msg/speed_limit_list.h"
// Member `speed_limits`
#include "v2x_msgs/msg/detail/speed_limit_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_lane_attributes.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_lane_attributes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__LaneDataAttribute__init(message_memory);
}

void v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function(void * message_memory)
{
  v2x_msgs__msg__LaneDataAttribute__fini(message_memory);
}

size_t v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegLaneAttributes__Sequence * member =
    (const v2x_msgs__msg__RegLaneAttributes__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegLaneAttributes__Sequence * member =
    (const v2x_msgs__msg__RegLaneAttributes__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegLaneAttributes__Sequence * member =
    (v2x_msgs__msg__RegLaneAttributes__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__fetch_function__LaneDataAttribute__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegLaneAttributes * item =
    ((const v2x_msgs__msg__RegLaneAttributes *)
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__regional(untyped_member, index));
  v2x_msgs__msg__RegLaneAttributes * value =
    (v2x_msgs__msg__RegLaneAttributes *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__assign_function__LaneDataAttribute__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegLaneAttributes * item =
    ((v2x_msgs__msg__RegLaneAttributes *)
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__regional(untyped_member, index));
  const v2x_msgs__msg__RegLaneAttributes * value =
    (const v2x_msgs__msg__RegLaneAttributes *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegLaneAttributes__Sequence * member =
    (v2x_msgs__msg__RegLaneAttributes__Sequence *)(untyped_member);
  v2x_msgs__msg__RegLaneAttributes__Sequence__fini(member);
  return v2x_msgs__msg__RegLaneAttributes__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[8] = {
  {
    "lane_data_attribute_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, lane_data_attribute_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_end_point_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, path_end_point_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, lane_crown_point_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, lane_crown_point_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_crown_point_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, lane_crown_point_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, lane_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneDataAttribute, speed_limits),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__LaneDataAttribute, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__regional,  // size() function pointer
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__regional,  // get_const(index) function pointer
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__regional,  // get(index) function pointer
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__fetch_function__LaneDataAttribute__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__assign_function__LaneDataAttribute__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members = {
  "v2x_msgs__msg",  // message namespace
  "LaneDataAttribute",  // message name
  8,  // number of fields
  sizeof(v2x_msgs__msg__LaneDataAttribute),
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array,  // message members
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle = {
  0,
  &v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneDataAttribute)() {
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaAngle)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadwayCrownAngle)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadwayCrownAngle)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadwayCrownAngle)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MergeDivergeNodeAngle)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedLimitList)();
  v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegLaneAttributes)();
  if (!v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__LaneDataAttribute__rosidl_typesupport_introspection_c__LaneDataAttribute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
