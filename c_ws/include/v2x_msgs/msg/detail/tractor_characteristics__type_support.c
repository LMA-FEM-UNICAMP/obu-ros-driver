// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/TractorCharacteristics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/tractor_characteristics__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/tractor_characteristics__functions.h"
#include "v2x_msgs/msg/detail/tractor_characteristics__struct.h"


// Include directives for member types
// Member `equal_to`
// Member `not_equal_to`
#include "v2x_msgs/msg/vehicle_characteristics_fix_values_list.h"
// Member `equal_to`
// Member `not_equal_to`
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values_list__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "v2x_msgs/msg/vehicle_characteristics_ranges_list.h"
// Member `ranges`
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__TractorCharacteristics__init(message_memory);
}

void v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_fini_function(void * message_memory)
{
  v2x_msgs__msg__TractorCharacteristics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_member_array[6] = {
  {
    "equal_to_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, equal_to_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equal_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, equal_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "not_equal_to_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, not_equal_to_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "not_equal_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, not_equal_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, ranges_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TractorCharacteristics, ranges),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_members = {
  "v2x_msgs__msg",  // message namespace
  "TractorCharacteristics",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__TractorCharacteristics),
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_member_array,  // message members
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_type_support_handle = {
  0,
  &v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TractorCharacteristics)() {
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleCharacteristicsFixValuesList)();
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleCharacteristicsFixValuesList)();
  v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleCharacteristicsRangesList)();
  if (!v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__TractorCharacteristics__rosidl_typesupport_introspection_c__TractorCharacteristics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
