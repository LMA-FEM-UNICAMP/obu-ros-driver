// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleCharacteristicsFixValues.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `simple_vehicle_type`
#include "v2x_msgs/msg/detail/station_type__functions.h"
// Member `eu_vehicle_category_code`
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__functions.h"
// Member `iso3833vehicle_type`
#include "v2x_msgs/msg/detail/iso3833_vehicle_type__functions.h"
// Member `euro_and_co2value`
#include "v2x_msgs/msg/detail/environmental_characteristics__functions.h"
// Member `engine_characteristics`
#include "v2x_msgs/msg/detail/engine_characteristics__functions.h"
// Member `load_type`
#include "v2x_msgs/msg/detail/load_type__functions.h"
// Member `usage`
#include "v2x_msgs/msg/detail/vehicle_role__functions.h"

bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__init(v2x_msgs__msg__VehicleCharacteristicsFixValues * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_characteristics_fix_values_container_select
  msg->vehicle_characteristics_fix_values_container_select = 0ll;
  // simple_vehicle_type
  if (!v2x_msgs__msg__StationType__init(&msg->simple_vehicle_type)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // eu_vehicle_category_code
  if (!v2x_msgs__msg__EuVehicleCategoryCode__init(&msg->eu_vehicle_category_code)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // iso3833vehicle_type
  if (!v2x_msgs__msg__Iso3833VehicleType__init(&msg->iso3833vehicle_type)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // euro_and_co2value
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__init(&msg->euro_and_co2value)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__init(&msg->engine_characteristics)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // load_type
  if (!v2x_msgs__msg__LoadType__init(&msg->load_type)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  // usage
  if (!v2x_msgs__msg__VehicleRole__init(&msg->usage)) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(v2x_msgs__msg__VehicleCharacteristicsFixValues * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_characteristics_fix_values_container_select
  // simple_vehicle_type
  v2x_msgs__msg__StationType__fini(&msg->simple_vehicle_type);
  // eu_vehicle_category_code
  v2x_msgs__msg__EuVehicleCategoryCode__fini(&msg->eu_vehicle_category_code);
  // iso3833vehicle_type
  v2x_msgs__msg__Iso3833VehicleType__fini(&msg->iso3833vehicle_type);
  // euro_and_co2value
  v2x_msgs__msg__EnvironmentalCharacteristics__fini(&msg->euro_and_co2value);
  // engine_characteristics
  v2x_msgs__msg__EngineCharacteristics__fini(&msg->engine_characteristics);
  // load_type
  v2x_msgs__msg__LoadType__fini(&msg->load_type);
  // usage
  v2x_msgs__msg__VehicleRole__fini(&msg->usage);
}

bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__are_equal(const v2x_msgs__msg__VehicleCharacteristicsFixValues * lhs, const v2x_msgs__msg__VehicleCharacteristicsFixValues * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_characteristics_fix_values_container_select
  if (lhs->vehicle_characteristics_fix_values_container_select != rhs->vehicle_characteristics_fix_values_container_select) {
    return false;
  }
  // simple_vehicle_type
  if (!v2x_msgs__msg__StationType__are_equal(
      &(lhs->simple_vehicle_type), &(rhs->simple_vehicle_type)))
  {
    return false;
  }
  // eu_vehicle_category_code
  if (!v2x_msgs__msg__EuVehicleCategoryCode__are_equal(
      &(lhs->eu_vehicle_category_code), &(rhs->eu_vehicle_category_code)))
  {
    return false;
  }
  // iso3833vehicle_type
  if (!v2x_msgs__msg__Iso3833VehicleType__are_equal(
      &(lhs->iso3833vehicle_type), &(rhs->iso3833vehicle_type)))
  {
    return false;
  }
  // euro_and_co2value
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__are_equal(
      &(lhs->euro_and_co2value), &(rhs->euro_and_co2value)))
  {
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__are_equal(
      &(lhs->engine_characteristics), &(rhs->engine_characteristics)))
  {
    return false;
  }
  // load_type
  if (!v2x_msgs__msg__LoadType__are_equal(
      &(lhs->load_type), &(rhs->load_type)))
  {
    return false;
  }
  // usage
  if (!v2x_msgs__msg__VehicleRole__are_equal(
      &(lhs->usage), &(rhs->usage)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__copy(
  const v2x_msgs__msg__VehicleCharacteristicsFixValues * input,
  v2x_msgs__msg__VehicleCharacteristicsFixValues * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_characteristics_fix_values_container_select
  output->vehicle_characteristics_fix_values_container_select = input->vehicle_characteristics_fix_values_container_select;
  // simple_vehicle_type
  if (!v2x_msgs__msg__StationType__copy(
      &(input->simple_vehicle_type), &(output->simple_vehicle_type)))
  {
    return false;
  }
  // eu_vehicle_category_code
  if (!v2x_msgs__msg__EuVehicleCategoryCode__copy(
      &(input->eu_vehicle_category_code), &(output->eu_vehicle_category_code)))
  {
    return false;
  }
  // iso3833vehicle_type
  if (!v2x_msgs__msg__Iso3833VehicleType__copy(
      &(input->iso3833vehicle_type), &(output->iso3833vehicle_type)))
  {
    return false;
  }
  // euro_and_co2value
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__copy(
      &(input->euro_and_co2value), &(output->euro_and_co2value)))
  {
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__copy(
      &(input->engine_characteristics), &(output->engine_characteristics)))
  {
    return false;
  }
  // load_type
  if (!v2x_msgs__msg__LoadType__copy(
      &(input->load_type), &(output->load_type)))
  {
    return false;
  }
  // usage
  if (!v2x_msgs__msg__VehicleRole__copy(
      &(input->usage), &(output->usage)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleCharacteristicsFixValues *
v2x_msgs__msg__VehicleCharacteristicsFixValues__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsFixValues * msg = (v2x_msgs__msg__VehicleCharacteristicsFixValues *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues));
  bool success = v2x_msgs__msg__VehicleCharacteristicsFixValues__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleCharacteristicsFixValues__destroy(v2x_msgs__msg__VehicleCharacteristicsFixValues * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__init(v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsFixValues * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleCharacteristicsFixValues *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleCharacteristicsFixValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__fini(v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence *
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * array = (v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__destroy(v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__are_equal(const v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * lhs, const v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleCharacteristicsFixValues__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence__copy(
  const v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * input,
  v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleCharacteristicsFixValues);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleCharacteristicsFixValues * data =
      (v2x_msgs__msg__VehicleCharacteristicsFixValues *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleCharacteristicsFixValues__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleCharacteristicsFixValues__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleCharacteristicsFixValues__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
