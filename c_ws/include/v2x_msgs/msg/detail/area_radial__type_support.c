// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/AreaRadial.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/area_radial__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/area_radial__functions.h"
#include "v2x_msgs/msg/detail/area_radial__struct.h"


// Include directives for member types
// Member `range`
#include "v2x_msgs/msg/range.h"
// Member `range`
#include "v2x_msgs/msg/detail/range__rosidl_typesupport_introspection_c.h"
// Member `stationary_horizontal_opening_angle_start`
// Member `stationary_horizontal_opening_angle_end`
#include "v2x_msgs/msg/wgs84_angle_value.h"
// Member `stationary_horizontal_opening_angle_start`
// Member `stationary_horizontal_opening_angle_end`
#include "v2x_msgs/msg/detail/wgs84_angle_value__rosidl_typesupport_introspection_c.h"
// Member `vertical_opening_angle_start`
// Member `vertical_opening_angle_end`
#include "v2x_msgs/msg/cartesian_angle_value.h"
// Member `vertical_opening_angle_start`
// Member `vertical_opening_angle_end`
#include "v2x_msgs/msg/detail/cartesian_angle_value__rosidl_typesupport_introspection_c.h"
// Member `sensor_position_offset`
#include "v2x_msgs/msg/offset_point.h"
// Member `sensor_position_offset`
#include "v2x_msgs/msg/detail/offset_point__rosidl_typesupport_introspection_c.h"
// Member `sensor_height`
#include "v2x_msgs/msg/sensor_height.h"
// Member `sensor_height`
#include "v2x_msgs/msg/detail/sensor_height__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__AreaRadial__init(message_memory);
}

void v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_fini_function(void * message_memory)
{
  v2x_msgs__msg__AreaRadial__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[11] = {
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_horizontal_opening_angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, stationary_horizontal_opening_angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stationary_horizontal_opening_angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, stationary_horizontal_opening_angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_start_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, vertical_opening_angle_start_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, vertical_opening_angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_end_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, vertical_opening_angle_end_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, vertical_opening_angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_position_offset_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, sensor_position_offset_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_position_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, sensor_position_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_height_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, sensor_height_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AreaRadial, sensor_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_members = {
  "v2x_msgs__msg",  // message namespace
  "AreaRadial",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__AreaRadial),
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array,  // message members
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_type_support_handle = {
  0,
  &v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AreaRadial)() {
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Range)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, WGS84AngleValue)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, WGS84AngleValue)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CartesianAngleValue)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CartesianAngleValue)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, OffsetPoint)();
  v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SensorHeight)();
  if (!v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__AreaRadial__rosidl_typesupport_introspection_c__AreaRadial_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
