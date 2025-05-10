// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/VehicleCharacteristicsFixValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values__functions.h"
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values__struct.h"


// Include directives for member types
// Member `simple_vehicle_type`
#include "v2x_msgs/msg/station_type.h"
// Member `simple_vehicle_type`
#include "v2x_msgs/msg/detail/station_type__rosidl_typesupport_introspection_c.h"
// Member `eu_vehicle_category_code`
#include "v2x_msgs/msg/eu_vehicle_category_code.h"
// Member `eu_vehicle_category_code`
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__rosidl_typesupport_introspection_c.h"
// Member `iso3833vehicle_type`
#include "v2x_msgs/msg/iso3833_vehicle_type.h"
// Member `iso3833vehicle_type`
#include "v2x_msgs/msg/detail/iso3833_vehicle_type__rosidl_typesupport_introspection_c.h"
// Member `euro_and_co2value`
#include "v2x_msgs/msg/environmental_characteristics.h"
// Member `euro_and_co2value`
#include "v2x_msgs/msg/detail/environmental_characteristics__rosidl_typesupport_introspection_c.h"
// Member `engine_characteristics`
#include "v2x_msgs/msg/engine_characteristics.h"
// Member `engine_characteristics`
#include "v2x_msgs/msg/detail/engine_characteristics__rosidl_typesupport_introspection_c.h"
// Member `load_type`
#include "v2x_msgs/msg/load_type.h"
// Member `load_type`
#include "v2x_msgs/msg/detail/load_type__rosidl_typesupport_introspection_c.h"
// Member `usage`
#include "v2x_msgs/msg/vehicle_role.h"
// Member `usage`
#include "v2x_msgs/msg/detail/vehicle_role__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__VehicleCharacteristicsFixValues__init(message_memory);
}

void v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_fini_function(void * message_memory)
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[8] = {
  {
    "vehicle_characteristics_fix_values_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, vehicle_characteristics_fix_values_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "simple_vehicle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, simple_vehicle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eu_vehicle_category_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, eu_vehicle_category_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iso3833vehicle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, iso3833vehicle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euro_and_co2value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, euro_and_co2value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engine_characteristics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, engine_characteristics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, load_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VehicleCharacteristicsFixValues, usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_members = {
  "v2x_msgs__msg",  // message namespace
  "VehicleCharacteristicsFixValues",  // message name
  8,  // number of fields
  sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues),
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array,  // message members
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_type_support_handle = {
  0,
  &v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleCharacteristicsFixValues)() {
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StationType)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EuVehicleCategoryCode)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Iso3833VehicleType)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EnvironmentalCharacteristics)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EngineCharacteristics)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LoadType)();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleRole)();
  if (!v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__VehicleCharacteristicsFixValues__rosidl_typesupport_introspection_c__VehicleCharacteristicsFixValues_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
