// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ExhaustEmissionValues.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/exhaust_emission_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unit_type`
#include "v2x_msgs/msg/detail/unit_type__functions.h"
// Member `emission_hc`
// Member `emission_nox`
// Member `emission_hcnox`
#include "v2x_msgs/msg/detail/int2__functions.h"

bool
v2x_msgs__msg__ExhaustEmissionValues__init(v2x_msgs__msg__ExhaustEmissionValues * msg)
{
  if (!msg) {
    return false;
  }
  // unit_type
  if (!v2x_msgs__msg__UnitType__init(&msg->unit_type)) {
    v2x_msgs__msg__ExhaustEmissionValues__fini(msg);
    return false;
  }
  // emission_co
  // emission_hc
  if (!v2x_msgs__msg__Int2__init(&msg->emission_hc)) {
    v2x_msgs__msg__ExhaustEmissionValues__fini(msg);
    return false;
  }
  // emission_nox
  if (!v2x_msgs__msg__Int2__init(&msg->emission_nox)) {
    v2x_msgs__msg__ExhaustEmissionValues__fini(msg);
    return false;
  }
  // emission_hcnox
  if (!v2x_msgs__msg__Int2__init(&msg->emission_hcnox)) {
    v2x_msgs__msg__ExhaustEmissionValues__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ExhaustEmissionValues__fini(v2x_msgs__msg__ExhaustEmissionValues * msg)
{
  if (!msg) {
    return;
  }
  // unit_type
  v2x_msgs__msg__UnitType__fini(&msg->unit_type);
  // emission_co
  // emission_hc
  v2x_msgs__msg__Int2__fini(&msg->emission_hc);
  // emission_nox
  v2x_msgs__msg__Int2__fini(&msg->emission_nox);
  // emission_hcnox
  v2x_msgs__msg__Int2__fini(&msg->emission_hcnox);
}

bool
v2x_msgs__msg__ExhaustEmissionValues__are_equal(const v2x_msgs__msg__ExhaustEmissionValues * lhs, const v2x_msgs__msg__ExhaustEmissionValues * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unit_type
  if (!v2x_msgs__msg__UnitType__are_equal(
      &(lhs->unit_type), &(rhs->unit_type)))
  {
    return false;
  }
  // emission_co
  if (lhs->emission_co != rhs->emission_co) {
    return false;
  }
  // emission_hc
  if (!v2x_msgs__msg__Int2__are_equal(
      &(lhs->emission_hc), &(rhs->emission_hc)))
  {
    return false;
  }
  // emission_nox
  if (!v2x_msgs__msg__Int2__are_equal(
      &(lhs->emission_nox), &(rhs->emission_nox)))
  {
    return false;
  }
  // emission_hcnox
  if (!v2x_msgs__msg__Int2__are_equal(
      &(lhs->emission_hcnox), &(rhs->emission_hcnox)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ExhaustEmissionValues__copy(
  const v2x_msgs__msg__ExhaustEmissionValues * input,
  v2x_msgs__msg__ExhaustEmissionValues * output)
{
  if (!input || !output) {
    return false;
  }
  // unit_type
  if (!v2x_msgs__msg__UnitType__copy(
      &(input->unit_type), &(output->unit_type)))
  {
    return false;
  }
  // emission_co
  output->emission_co = input->emission_co;
  // emission_hc
  if (!v2x_msgs__msg__Int2__copy(
      &(input->emission_hc), &(output->emission_hc)))
  {
    return false;
  }
  // emission_nox
  if (!v2x_msgs__msg__Int2__copy(
      &(input->emission_nox), &(output->emission_nox)))
  {
    return false;
  }
  // emission_hcnox
  if (!v2x_msgs__msg__Int2__copy(
      &(input->emission_hcnox), &(output->emission_hcnox)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ExhaustEmissionValues *
v2x_msgs__msg__ExhaustEmissionValues__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ExhaustEmissionValues * msg = (v2x_msgs__msg__ExhaustEmissionValues *)allocator.allocate(sizeof(v2x_msgs__msg__ExhaustEmissionValues), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ExhaustEmissionValues));
  bool success = v2x_msgs__msg__ExhaustEmissionValues__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ExhaustEmissionValues__destroy(v2x_msgs__msg__ExhaustEmissionValues * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ExhaustEmissionValues__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ExhaustEmissionValues__Sequence__init(v2x_msgs__msg__ExhaustEmissionValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ExhaustEmissionValues * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ExhaustEmissionValues *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ExhaustEmissionValues), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ExhaustEmissionValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ExhaustEmissionValues__fini(&data[i - 1]);
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
v2x_msgs__msg__ExhaustEmissionValues__Sequence__fini(v2x_msgs__msg__ExhaustEmissionValues__Sequence * array)
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
      v2x_msgs__msg__ExhaustEmissionValues__fini(&array->data[i]);
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

v2x_msgs__msg__ExhaustEmissionValues__Sequence *
v2x_msgs__msg__ExhaustEmissionValues__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ExhaustEmissionValues__Sequence * array = (v2x_msgs__msg__ExhaustEmissionValues__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ExhaustEmissionValues__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ExhaustEmissionValues__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ExhaustEmissionValues__Sequence__destroy(v2x_msgs__msg__ExhaustEmissionValues__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ExhaustEmissionValues__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ExhaustEmissionValues__Sequence__are_equal(const v2x_msgs__msg__ExhaustEmissionValues__Sequence * lhs, const v2x_msgs__msg__ExhaustEmissionValues__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ExhaustEmissionValues__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ExhaustEmissionValues__Sequence__copy(
  const v2x_msgs__msg__ExhaustEmissionValues__Sequence * input,
  v2x_msgs__msg__ExhaustEmissionValues__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ExhaustEmissionValues);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ExhaustEmissionValues * data =
      (v2x_msgs__msg__ExhaustEmissionValues *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ExhaustEmissionValues__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ExhaustEmissionValues__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ExhaustEmissionValues__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
