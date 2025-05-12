// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.h"


// Include directives for member types
// Member `heading`
#include "v2x_msgs/msg/heading.h"
// Member `heading`
#include "v2x_msgs/msg/detail/heading__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "v2x_msgs/msg/speed.h"
// Member `speed`
#include "v2x_msgs/msg/detail/speed__rosidl_typesupport_introspection_c.h"
// Member `drive_direction`
#include "v2x_msgs/msg/drive_direction.h"
// Member `drive_direction`
#include "v2x_msgs/msg/detail/drive_direction__rosidl_typesupport_introspection_c.h"
// Member `vehicle_length`
#include "v2x_msgs/msg/vehicle_length.h"
// Member `vehicle_length`
#include "v2x_msgs/msg/detail/vehicle_length__rosidl_typesupport_introspection_c.h"
// Member `vehicle_width`
#include "v2x_msgs/msg/vehicle_width.h"
// Member `vehicle_width`
#include "v2x_msgs/msg/detail/vehicle_width__rosidl_typesupport_introspection_c.h"
// Member `longitudinal_acceleration`
#include "v2x_msgs/msg/longitudinal_acceleration.h"
// Member `longitudinal_acceleration`
#include "v2x_msgs/msg/detail/longitudinal_acceleration__rosidl_typesupport_introspection_c.h"
// Member `curvature`
#include "v2x_msgs/msg/curvature.h"
// Member `curvature`
#include "v2x_msgs/msg/detail/curvature__rosidl_typesupport_introspection_c.h"
// Member `curvature_calculation_mode`
#include "v2x_msgs/msg/curvature_calculation_mode.h"
// Member `curvature_calculation_mode`
#include "v2x_msgs/msg/detail/curvature_calculation_mode__rosidl_typesupport_introspection_c.h"
// Member `yaw_rate`
#include "v2x_msgs/msg/yaw_rate.h"
// Member `yaw_rate`
#include "v2x_msgs/msg/detail/yaw_rate__rosidl_typesupport_introspection_c.h"
// Member `acceleration_control`
#include "v2x_msgs/msg/acceleration_control.h"
// Member `acceleration_control`
#include "v2x_msgs/msg/detail/acceleration_control__rosidl_typesupport_introspection_c.h"
// Member `lane_position`
#include "v2x_msgs/msg/lane_position.h"
// Member `lane_position`
#include "v2x_msgs/msg/detail/lane_position__rosidl_typesupport_introspection_c.h"
// Member `steering_wheel_angle`
#include "v2x_msgs/msg/steering_wheel_angle.h"
// Member `steering_wheel_angle`
#include "v2x_msgs/msg/detail/steering_wheel_angle__rosidl_typesupport_introspection_c.h"
// Member `lateral_acceleration`
#include "v2x_msgs/msg/lateral_acceleration.h"
// Member `lateral_acceleration`
#include "v2x_msgs/msg/detail/lateral_acceleration__rosidl_typesupport_introspection_c.h"
// Member `vertical_acceleration`
#include "v2x_msgs/msg/vertical_acceleration.h"
// Member `vertical_acceleration`
#include "v2x_msgs/msg/detail/vertical_acceleration__rosidl_typesupport_introspection_c.h"
// Member `performance_class`
#include "v2x_msgs/msg/performance_class.h"
// Member `performance_class`
#include "v2x_msgs/msg/detail/performance_class__rosidl_typesupport_introspection_c.h"
// Member `cen_dsrc_tolling_zone`
#include "v2x_msgs/msg/cen_dsrc_tolling_zone.h"
// Member `cen_dsrc_tolling_zone`
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(message_memory);
}

void v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_fini_function(void * message_memory)
{
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[23] = {
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drive_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, drive_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, vehicle_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, vehicle_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitudinal_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, longitudinal_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, curvature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature_calculation_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, curvature_calculation_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_control_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, acceleration_control_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, acceleration_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_position_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, lane_position_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, lane_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_wheel_angle_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, steering_wheel_angle_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_wheel_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, steering_wheel_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_acceleration_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, lateral_acceleration_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, lateral_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_acceleration_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, vertical_acceleration_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, vertical_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "performance_class_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, performance_class_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "performance_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, performance_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cen_dsrc_tolling_zone_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, cen_dsrc_tolling_zone_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cen_dsrc_tolling_zone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BasicVehicleContainerHighFrequency, cen_dsrc_tolling_zone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_members = {
  "v2x_msgs__msg",  // message namespace
  "BasicVehicleContainerHighFrequency",  // message name
  23,  // number of fields
  sizeof(v2x_msgs__msg__BasicVehicleContainerHighFrequency),
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array,  // message members
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_type_support_handle = {
  0,
  &v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BasicVehicleContainerHighFrequency)() {
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Heading)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Speed)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DriveDirection)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleLength)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleWidth)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LongitudinalAcceleration)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Curvature)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CurvatureCalculationMode)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, YawRate)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AccelerationControl)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LanePosition)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SteeringWheelAngle)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LateralAcceleration)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VerticalAcceleration)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PerformanceClass)();
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CenDsrcTollingZone)();
  if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__BasicVehicleContainerHighFrequency__rosidl_typesupport_introspection_c__BasicVehicleContainerHighFrequency_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
