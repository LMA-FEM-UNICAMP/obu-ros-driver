// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleSpecificCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_specific_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `environmental_characteristics`
#include "v2x_msgs/msg/detail/environmental_characteristics__functions.h"
// Member `engine_characteristics`
#include "v2x_msgs/msg/detail/engine_characteristics__functions.h"
// Member `descriptive_characteristics`
#include "v2x_msgs/msg/detail/descriptive_characteristics__functions.h"
// Member `future_characteristics`
#include "v2x_msgs/msg/detail/future_characteristics__functions.h"

bool
v2x_msgs__msg__VehicleSpecificCharacteristics__init(v2x_msgs__msg__VehicleSpecificCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // environmental_characteristics
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__init(&msg->environmental_characteristics)) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__fini(msg);
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__init(&msg->engine_characteristics)) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__fini(msg);
    return false;
  }
  // descriptive_characteristics
  if (!v2x_msgs__msg__DescriptiveCharacteristics__init(&msg->descriptive_characteristics)) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__fini(msg);
    return false;
  }
  // future_characteristics
  if (!v2x_msgs__msg__FutureCharacteristics__init(&msg->future_characteristics)) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleSpecificCharacteristics__fini(v2x_msgs__msg__VehicleSpecificCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // environmental_characteristics
  v2x_msgs__msg__EnvironmentalCharacteristics__fini(&msg->environmental_characteristics);
  // engine_characteristics
  v2x_msgs__msg__EngineCharacteristics__fini(&msg->engine_characteristics);
  // descriptive_characteristics
  v2x_msgs__msg__DescriptiveCharacteristics__fini(&msg->descriptive_characteristics);
  // future_characteristics
  v2x_msgs__msg__FutureCharacteristics__fini(&msg->future_characteristics);
}

bool
v2x_msgs__msg__VehicleSpecificCharacteristics__are_equal(const v2x_msgs__msg__VehicleSpecificCharacteristics * lhs, const v2x_msgs__msg__VehicleSpecificCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // environmental_characteristics
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__are_equal(
      &(lhs->environmental_characteristics), &(rhs->environmental_characteristics)))
  {
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__are_equal(
      &(lhs->engine_characteristics), &(rhs->engine_characteristics)))
  {
    return false;
  }
  // descriptive_characteristics
  if (!v2x_msgs__msg__DescriptiveCharacteristics__are_equal(
      &(lhs->descriptive_characteristics), &(rhs->descriptive_characteristics)))
  {
    return false;
  }
  // future_characteristics
  if (!v2x_msgs__msg__FutureCharacteristics__are_equal(
      &(lhs->future_characteristics), &(rhs->future_characteristics)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleSpecificCharacteristics__copy(
  const v2x_msgs__msg__VehicleSpecificCharacteristics * input,
  v2x_msgs__msg__VehicleSpecificCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // environmental_characteristics
  if (!v2x_msgs__msg__EnvironmentalCharacteristics__copy(
      &(input->environmental_characteristics), &(output->environmental_characteristics)))
  {
    return false;
  }
  // engine_characteristics
  if (!v2x_msgs__msg__EngineCharacteristics__copy(
      &(input->engine_characteristics), &(output->engine_characteristics)))
  {
    return false;
  }
  // descriptive_characteristics
  if (!v2x_msgs__msg__DescriptiveCharacteristics__copy(
      &(input->descriptive_characteristics), &(output->descriptive_characteristics)))
  {
    return false;
  }
  // future_characteristics
  if (!v2x_msgs__msg__FutureCharacteristics__copy(
      &(input->future_characteristics), &(output->future_characteristics)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleSpecificCharacteristics *
v2x_msgs__msg__VehicleSpecificCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSpecificCharacteristics * msg = (v2x_msgs__msg__VehicleSpecificCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSpecificCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleSpecificCharacteristics));
  bool success = v2x_msgs__msg__VehicleSpecificCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleSpecificCharacteristics__destroy(v2x_msgs__msg__VehicleSpecificCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__init(v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSpecificCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleSpecificCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleSpecificCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleSpecificCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleSpecificCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__fini(v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * array)
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
      v2x_msgs__msg__VehicleSpecificCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence *
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * array = (v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__destroy(v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__are_equal(const v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * lhs, const v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleSpecificCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence__copy(
  const v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * input,
  v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleSpecificCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleSpecificCharacteristics * data =
      (v2x_msgs__msg__VehicleSpecificCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleSpecificCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleSpecificCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleSpecificCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
