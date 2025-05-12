// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RequestorDescriptionAddGrpC.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/requestor_description_add_grp_c__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fuel`
#include "v2x_msgs/msg/detail/fuel_type__functions.h"
// Member `battery_status`
#include "v2x_msgs/msg/detail/battery_status__functions.h"

bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__init(v2x_msgs__msg__RequestorDescriptionAddGrpC * msg)
{
  if (!msg) {
    return false;
  }
  // fuel_present
  msg->fuel_present = false;
  // fuel
  if (!v2x_msgs__msg__FuelType__init(&msg->fuel)) {
    v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(msg);
    return false;
  }
  // battery_status_present
  msg->battery_status_present = false;
  // battery_status
  if (!v2x_msgs__msg__BatteryStatus__init(&msg->battery_status)) {
    v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(v2x_msgs__msg__RequestorDescriptionAddGrpC * msg)
{
  if (!msg) {
    return;
  }
  // fuel_present
  // fuel
  v2x_msgs__msg__FuelType__fini(&msg->fuel);
  // battery_status_present
  // battery_status
  v2x_msgs__msg__BatteryStatus__fini(&msg->battery_status);
}

bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__are_equal(const v2x_msgs__msg__RequestorDescriptionAddGrpC * lhs, const v2x_msgs__msg__RequestorDescriptionAddGrpC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fuel_present
  if (lhs->fuel_present != rhs->fuel_present) {
    return false;
  }
  // fuel
  if (!v2x_msgs__msg__FuelType__are_equal(
      &(lhs->fuel), &(rhs->fuel)))
  {
    return false;
  }
  // battery_status_present
  if (lhs->battery_status_present != rhs->battery_status_present) {
    return false;
  }
  // battery_status
  if (!v2x_msgs__msg__BatteryStatus__are_equal(
      &(lhs->battery_status), &(rhs->battery_status)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__copy(
  const v2x_msgs__msg__RequestorDescriptionAddGrpC * input,
  v2x_msgs__msg__RequestorDescriptionAddGrpC * output)
{
  if (!input || !output) {
    return false;
  }
  // fuel_present
  output->fuel_present = input->fuel_present;
  // fuel
  if (!v2x_msgs__msg__FuelType__copy(
      &(input->fuel), &(output->fuel)))
  {
    return false;
  }
  // battery_status_present
  output->battery_status_present = input->battery_status_present;
  // battery_status
  if (!v2x_msgs__msg__BatteryStatus__copy(
      &(input->battery_status), &(output->battery_status)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RequestorDescriptionAddGrpC *
v2x_msgs__msg__RequestorDescriptionAddGrpC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescriptionAddGrpC * msg = (v2x_msgs__msg__RequestorDescriptionAddGrpC *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorDescriptionAddGrpC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RequestorDescriptionAddGrpC));
  bool success = v2x_msgs__msg__RequestorDescriptionAddGrpC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RequestorDescriptionAddGrpC__destroy(v2x_msgs__msg__RequestorDescriptionAddGrpC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__init(v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescriptionAddGrpC * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RequestorDescriptionAddGrpC *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RequestorDescriptionAddGrpC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RequestorDescriptionAddGrpC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(&data[i - 1]);
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
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__fini(v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * array)
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
      v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(&array->data[i]);
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

v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence *
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * array = (v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__destroy(v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__are_equal(const v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * lhs, const v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RequestorDescriptionAddGrpC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence__copy(
  const v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * input,
  v2x_msgs__msg__RequestorDescriptionAddGrpC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RequestorDescriptionAddGrpC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RequestorDescriptionAddGrpC * data =
      (v2x_msgs__msg__RequestorDescriptionAddGrpC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RequestorDescriptionAddGrpC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RequestorDescriptionAddGrpC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RequestorDescriptionAddGrpC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
