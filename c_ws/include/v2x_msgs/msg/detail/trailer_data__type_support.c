// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/trailer_data__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/trailer_data__functions.h"
#include "v2x_msgs/msg/detail/trailer_data__struct.h"


// Include directives for member types
// Member `ref_point_id`
#include "v2x_msgs/msg/ref_point_id.h"
// Member `ref_point_id`
#include "v2x_msgs/msg/detail/ref_point_id__rosidl_typesupport_introspection_c.h"
// Member `hitch_point_offset`
#include "v2x_msgs/msg/hitch_point_offset.h"
// Member `hitch_point_offset`
#include "v2x_msgs/msg/detail/hitch_point_offset__rosidl_typesupport_introspection_c.h"
// Member `front_overhang`
#include "v2x_msgs/msg/front_overhang.h"
// Member `front_overhang`
#include "v2x_msgs/msg/detail/front_overhang__rosidl_typesupport_introspection_c.h"
// Member `rear_overhang`
#include "v2x_msgs/msg/rear_overhang.h"
// Member `rear_overhang`
#include "v2x_msgs/msg/detail/rear_overhang__rosidl_typesupport_introspection_c.h"
// Member `trailer_width`
#include "v2x_msgs/msg/vehicle_width.h"
// Member `trailer_width`
#include "v2x_msgs/msg/detail/vehicle_width__rosidl_typesupport_introspection_c.h"
// Member `hitch_angle`
#include "v2x_msgs/msg/cartesian_angle.h"
// Member `hitch_angle`
#include "v2x_msgs/msg/detail/cartesian_angle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__TrailerData__init(message_memory);
}

void v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_fini_function(void * message_memory)
{
  v2x_msgs__msg__TrailerData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[8] = {
  {
    "ref_point_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, ref_point_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hitch_point_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, hitch_point_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_overhang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, front_overhang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_overhang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, rear_overhang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trailer_width_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, trailer_width_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trailer_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, trailer_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hitch_angle_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, hitch_angle_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hitch_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TrailerData, hitch_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_members = {
  "v2x_msgs__msg",  // message namespace
  "TrailerData",  // message name
  8,  // number of fields
  sizeof(v2x_msgs__msg__TrailerData),
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array,  // message members
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_type_support_handle = {
  0,
  &v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TrailerData)() {
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RefPointId)();
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HitchPointOffset)();
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FrontOverhang)();
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RearOverhang)();
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleWidth)();
  v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CartesianAngle)();
  if (!v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__TrailerData__rosidl_typesupport_introspection_c__TrailerData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
