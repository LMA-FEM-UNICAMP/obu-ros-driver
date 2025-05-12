// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/VehicleCharacteristicsRanges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges__functions.h"
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges__struct.h"


// Include directives for member types
// Member `comparison_operator`
#include "v2x_msgs/msg/comparison_operator.h"
// Member `comparison_operator`
#include "v2x_msgs/msg/detail/comparison_operator__rosidl_typesupport_introspection_c.h"
// Member `vehicle_dimensions`
#include "v2x_msgs/msg/vehicle_dimensions.h"
// Member `vehicle_dimensions`
#include "v2x_msgs/msg/detail/vehicle_dimensions__rosidl_typesupport_introspection_c.h"
// Member `vehicle_weight_limits`
#include "v2x_msgs/msg/vehicle_weight_limits.h"
// Member `vehicle_weight_limits`
#include "v2x_msgs/msg/detail/vehicle_weight_limits__rosidl_typesupport_introspection_c.h"
// Member `axle_weight_limits`
#include "v2x_msgs/msg/axle_weight_limits.h"
// Member `axle_weight_limits`
#include "v2x_msgs/msg/detail/axle_weight_limits__rosidl_typesupport_introspection_c.h"
// Member `passenger_capacity`
#include "v2x_msgs/msg/passenger_capacity.h"
// Member `passenger_capacity`
#include "v2x_msgs/msg/detail/passenger_capacity__rosidl_typesupport_introspection_c.h"
// Member `exhaust_emission_values`
#include "v2x_msgs/msg/exhaust_emission_values.h"
// Member `exhaust_emission_values`
#include "v2x_msgs/msg/detail/exhaust_emission_values__rosidl_typesupport_introspection_c.h"
// Member `diesel_emission_values`
#include "v2x_msgs/msg/diesel_emission_values.h"
// Member `diesel_emission_values`
#include "v2x_msgs/msg/detail/diesel_emission_values__rosidl_typesupport_introspection_c.h"
// Member `sound_level`
#include "v2x_msgs/msg/sound_level.h"
// Member `sound_level`
#include "v2x_msgs/msg/detail/sound_level__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__VehicleCharacteristicsRanges__init(message_memory);
}

void v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_fini_function(void * message_memory)
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[10] = {
  {
    "comparison_operator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, comparison_operator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limits_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, limits_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_axles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, number_of_axles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, vehicle_dimensions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_weight_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, vehicle_weight_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axle_weight_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, axle_weight_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "passenger_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, passenger_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exhaust_emission_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, exhaust_emission_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diesel_emission_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, diesel_emission_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sound_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsRanges, sound_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_members = {
  "v2x_msgs__msg",  // message namespace
  "VehicleCharacteristicsRanges",  // message name
  10,  // number of fields
  sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges),
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array,  // message members
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_type_support_handle = {
  0,
  &v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleCharacteristicsRanges)() {
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ComparisonOperator)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleDimensions)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleWeightLimits)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AxleWeightLimits)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PassengerCapacity)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ExhaustEmissionValues)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DieselEmissionValues)();
  v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SoundLevel)();
  if (!v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__VehicleCharacteristicsRanges__rosidl_typesupport_introspection_c__VehicleCharacteristicsRanges_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
