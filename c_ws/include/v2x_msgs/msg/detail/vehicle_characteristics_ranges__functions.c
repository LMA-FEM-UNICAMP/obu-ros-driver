// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleCharacteristicsRanges.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `comparison_operator`
#include "v2x_msgs/msg/detail/comparison_operator__functions.h"
// Member `vehicle_dimensions`
#include "v2x_msgs/msg/detail/vehicle_dimensions__functions.h"
// Member `vehicle_weight_limits`
#include "v2x_msgs/msg/detail/vehicle_weight_limits__functions.h"
// Member `axle_weight_limits`
#include "v2x_msgs/msg/detail/axle_weight_limits__functions.h"
// Member `passenger_capacity`
#include "v2x_msgs/msg/detail/passenger_capacity__functions.h"
// Member `exhaust_emission_values`
#include "v2x_msgs/msg/detail/exhaust_emission_values__functions.h"
// Member `diesel_emission_values`
#include "v2x_msgs/msg/detail/diesel_emission_values__functions.h"
// Member `sound_level`
#include "v2x_msgs/msg/detail/sound_level__functions.h"

bool
v2x_msgs__msg__VehicleCharacteristicsRanges__init(v2x_msgs__msg__VehicleCharacteristicsRanges * msg)
{
  if (!msg) {
    return false;
  }
  // comparison_operator
  if (!v2x_msgs__msg__ComparisonOperator__init(&msg->comparison_operator)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // limits_container_select
  msg->limits_container_select = 0ll;
  // number_of_axles
  // vehicle_dimensions
  if (!v2x_msgs__msg__VehicleDimensions__init(&msg->vehicle_dimensions)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // vehicle_weight_limits
  if (!v2x_msgs__msg__VehicleWeightLimits__init(&msg->vehicle_weight_limits)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // axle_weight_limits
  if (!v2x_msgs__msg__AxleWeightLimits__init(&msg->axle_weight_limits)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // passenger_capacity
  if (!v2x_msgs__msg__PassengerCapacity__init(&msg->passenger_capacity)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // exhaust_emission_values
  if (!v2x_msgs__msg__ExhaustEmissionValues__init(&msg->exhaust_emission_values)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // diesel_emission_values
  if (!v2x_msgs__msg__DieselEmissionValues__init(&msg->diesel_emission_values)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  // sound_level
  if (!v2x_msgs__msg__SoundLevel__init(&msg->sound_level)) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleCharacteristicsRanges__fini(v2x_msgs__msg__VehicleCharacteristicsRanges * msg)
{
  if (!msg) {
    return;
  }
  // comparison_operator
  v2x_msgs__msg__ComparisonOperator__fini(&msg->comparison_operator);
  // limits_container_select
  // number_of_axles
  // vehicle_dimensions
  v2x_msgs__msg__VehicleDimensions__fini(&msg->vehicle_dimensions);
  // vehicle_weight_limits
  v2x_msgs__msg__VehicleWeightLimits__fini(&msg->vehicle_weight_limits);
  // axle_weight_limits
  v2x_msgs__msg__AxleWeightLimits__fini(&msg->axle_weight_limits);
  // passenger_capacity
  v2x_msgs__msg__PassengerCapacity__fini(&msg->passenger_capacity);
  // exhaust_emission_values
  v2x_msgs__msg__ExhaustEmissionValues__fini(&msg->exhaust_emission_values);
  // diesel_emission_values
  v2x_msgs__msg__DieselEmissionValues__fini(&msg->diesel_emission_values);
  // sound_level
  v2x_msgs__msg__SoundLevel__fini(&msg->sound_level);
}

bool
v2x_msgs__msg__VehicleCharacteristicsRanges__are_equal(const v2x_msgs__msg__VehicleCharacteristicsRanges * lhs, const v2x_msgs__msg__VehicleCharacteristicsRanges * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // comparison_operator
  if (!v2x_msgs__msg__ComparisonOperator__are_equal(
      &(lhs->comparison_operator), &(rhs->comparison_operator)))
  {
    return false;
  }
  // limits_container_select
  if (lhs->limits_container_select != rhs->limits_container_select) {
    return false;
  }
  // number_of_axles
  if (lhs->number_of_axles != rhs->number_of_axles) {
    return false;
  }
  // vehicle_dimensions
  if (!v2x_msgs__msg__VehicleDimensions__are_equal(
      &(lhs->vehicle_dimensions), &(rhs->vehicle_dimensions)))
  {
    return false;
  }
  // vehicle_weight_limits
  if (!v2x_msgs__msg__VehicleWeightLimits__are_equal(
      &(lhs->vehicle_weight_limits), &(rhs->vehicle_weight_limits)))
  {
    return false;
  }
  // axle_weight_limits
  if (!v2x_msgs__msg__AxleWeightLimits__are_equal(
      &(lhs->axle_weight_limits), &(rhs->axle_weight_limits)))
  {
    return false;
  }
  // passenger_capacity
  if (!v2x_msgs__msg__PassengerCapacity__are_equal(
      &(lhs->passenger_capacity), &(rhs->passenger_capacity)))
  {
    return false;
  }
  // exhaust_emission_values
  if (!v2x_msgs__msg__ExhaustEmissionValues__are_equal(
      &(lhs->exhaust_emission_values), &(rhs->exhaust_emission_values)))
  {
    return false;
  }
  // diesel_emission_values
  if (!v2x_msgs__msg__DieselEmissionValues__are_equal(
      &(lhs->diesel_emission_values), &(rhs->diesel_emission_values)))
  {
    return false;
  }
  // sound_level
  if (!v2x_msgs__msg__SoundLevel__are_equal(
      &(lhs->sound_level), &(rhs->sound_level)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleCharacteristicsRanges__copy(
  const v2x_msgs__msg__VehicleCharacteristicsRanges * input,
  v2x_msgs__msg__VehicleCharacteristicsRanges * output)
{
  if (!input || !output) {
    return false;
  }
  // comparison_operator
  if (!v2x_msgs__msg__ComparisonOperator__copy(
      &(input->comparison_operator), &(output->comparison_operator)))
  {
    return false;
  }
  // limits_container_select
  output->limits_container_select = input->limits_container_select;
  // number_of_axles
  output->number_of_axles = input->number_of_axles;
  // vehicle_dimensions
  if (!v2x_msgs__msg__VehicleDimensions__copy(
      &(input->vehicle_dimensions), &(output->vehicle_dimensions)))
  {
    return false;
  }
  // vehicle_weight_limits
  if (!v2x_msgs__msg__VehicleWeightLimits__copy(
      &(input->vehicle_weight_limits), &(output->vehicle_weight_limits)))
  {
    return false;
  }
  // axle_weight_limits
  if (!v2x_msgs__msg__AxleWeightLimits__copy(
      &(input->axle_weight_limits), &(output->axle_weight_limits)))
  {
    return false;
  }
  // passenger_capacity
  if (!v2x_msgs__msg__PassengerCapacity__copy(
      &(input->passenger_capacity), &(output->passenger_capacity)))
  {
    return false;
  }
  // exhaust_emission_values
  if (!v2x_msgs__msg__ExhaustEmissionValues__copy(
      &(input->exhaust_emission_values), &(output->exhaust_emission_values)))
  {
    return false;
  }
  // diesel_emission_values
  if (!v2x_msgs__msg__DieselEmissionValues__copy(
      &(input->diesel_emission_values), &(output->diesel_emission_values)))
  {
    return false;
  }
  // sound_level
  if (!v2x_msgs__msg__SoundLevel__copy(
      &(input->sound_level), &(output->sound_level)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleCharacteristicsRanges *
v2x_msgs__msg__VehicleCharacteristicsRanges__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsRanges * msg = (v2x_msgs__msg__VehicleCharacteristicsRanges *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges));
  bool success = v2x_msgs__msg__VehicleCharacteristicsRanges__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleCharacteristicsRanges__destroy(v2x_msgs__msg__VehicleCharacteristicsRanges * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__init(v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsRanges * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleCharacteristicsRanges *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleCharacteristicsRanges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleCharacteristicsRanges__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__fini(v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * array)
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
      v2x_msgs__msg__VehicleCharacteristicsRanges__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence *
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * array = (v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__destroy(v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__are_equal(const v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * lhs, const v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleCharacteristicsRanges__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence__copy(
  const v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * input,
  v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleCharacteristicsRanges);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleCharacteristicsRanges * data =
      (v2x_msgs__msg__VehicleCharacteristicsRanges *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleCharacteristicsRanges__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleCharacteristicsRanges__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleCharacteristicsRanges__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
