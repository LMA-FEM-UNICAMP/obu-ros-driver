// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/LaneCharacteristics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/lane_characteristics__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/lane_characteristics__functions.h"
#include "v2x_msgs/msg/detail/lane_characteristics__struct.h"


// Include directives for member types
// Member `zone_definition_accuracy`
#include "v2x_msgs/msg/definition_accuracy.h"
// Member `zone_definition_accuracy`
#include "v2x_msgs/msg/detail/definition_accuracy__rosidl_typesupport_introspection_c.h"
// Member `existinglane_marking_status`
#include "v2x_msgs/msg/lane_marking_status.h"
// Member `existinglane_marking_status`
#include "v2x_msgs/msg/detail/lane_marking_status__rosidl_typesupport_introspection_c.h"
// Member `newlane_marking_colour`
#include "v2x_msgs/msg/marking_colour.h"
// Member `newlane_marking_colour`
#include "v2x_msgs/msg/detail/marking_colour__rosidl_typesupport_introspection_c.h"
// Member `lane_delimitation_left`
// Member `lane_delimitation_right`
#include "v2x_msgs/msg/lane_delimitation.h"
// Member `lane_delimitation_left`
// Member `lane_delimitation_right`
#include "v2x_msgs/msg/detail/lane_delimitation__rosidl_typesupport_introspection_c.h"
// Member `merging_with`
#include "v2x_msgs/msg/zid.h"
// Member `merging_with`
#include "v2x_msgs/msg/detail/zid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__LaneCharacteristics__init(message_memory);
}

void v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_fini_function(void * message_memory)
{
  v2x_msgs__msg__LaneCharacteristics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[6] = {
  {
    "zone_definition_accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, zone_definition_accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "existinglane_marking_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, existinglane_marking_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "newlane_marking_colour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, newlane_marking_colour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_delimitation_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, lane_delimitation_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_delimitation_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, lane_delimitation_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "merging_with",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__LaneCharacteristics, merging_with),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_members = {
  "v2x_msgs__msg",  // message namespace
  "LaneCharacteristics",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__LaneCharacteristics),
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array,  // message members
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_type_support_handle = {
  0,
  &v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneCharacteristics)() {
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DefinitionAccuracy)();
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneMarkingStatus)();
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MarkingColour)();
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneDelimitation)();
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneDelimitation)();
  v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Zid)();
  if (!v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__LaneCharacteristics__rosidl_typesupport_introspection_c__LaneCharacteristics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
