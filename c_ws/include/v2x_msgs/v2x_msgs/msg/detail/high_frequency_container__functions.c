// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/HighFrequencyContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/high_frequency_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `basic_vehicle_container_high_frequency`
#include "v2x_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"
// Member `rsu_container_high_frequency`
#include "v2x_msgs/msg/detail/rsu_container_high_frequency__functions.h"

bool
v2x_msgs__msg__HighFrequencyContainer__init(v2x_msgs__msg__HighFrequencyContainer * msg)
{
  if (!msg) {
    return false;
  }
  // high_frequency_container_container_select
  msg->high_frequency_container_container_select = 0ll;
  // basic_vehicle_container_high_frequency
  if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__init(&msg->basic_vehicle_container_high_frequency)) {
    v2x_msgs__msg__HighFrequencyContainer__fini(msg);
    return false;
  }
  // rsu_container_high_frequency
  if (!v2x_msgs__msg__RSUContainerHighFrequency__init(&msg->rsu_container_high_frequency)) {
    v2x_msgs__msg__HighFrequencyContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__HighFrequencyContainer__fini(v2x_msgs__msg__HighFrequencyContainer * msg)
{
  if (!msg) {
    return;
  }
  // high_frequency_container_container_select
  // basic_vehicle_container_high_frequency
  v2x_msgs__msg__BasicVehicleContainerHighFrequency__fini(&msg->basic_vehicle_container_high_frequency);
  // rsu_container_high_frequency
  v2x_msgs__msg__RSUContainerHighFrequency__fini(&msg->rsu_container_high_frequency);
}

bool
v2x_msgs__msg__HighFrequencyContainer__are_equal(const v2x_msgs__msg__HighFrequencyContainer * lhs, const v2x_msgs__msg__HighFrequencyContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // high_frequency_container_container_select
  if (lhs->high_frequency_container_container_select != rhs->high_frequency_container_container_select) {
    return false;
  }
  // basic_vehicle_container_high_frequency
  if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__are_equal(
      &(lhs->basic_vehicle_container_high_frequency), &(rhs->basic_vehicle_container_high_frequency)))
  {
    return false;
  }
  // rsu_container_high_frequency
  if (!v2x_msgs__msg__RSUContainerHighFrequency__are_equal(
      &(lhs->rsu_container_high_frequency), &(rhs->rsu_container_high_frequency)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__HighFrequencyContainer__copy(
  const v2x_msgs__msg__HighFrequencyContainer * input,
  v2x_msgs__msg__HighFrequencyContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // high_frequency_container_container_select
  output->high_frequency_container_container_select = input->high_frequency_container_container_select;
  // basic_vehicle_container_high_frequency
  if (!v2x_msgs__msg__BasicVehicleContainerHighFrequency__copy(
      &(input->basic_vehicle_container_high_frequency), &(output->basic_vehicle_container_high_frequency)))
  {
    return false;
  }
  // rsu_container_high_frequency
  if (!v2x_msgs__msg__RSUContainerHighFrequency__copy(
      &(input->rsu_container_high_frequency), &(output->rsu_container_high_frequency)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__HighFrequencyContainer *
v2x_msgs__msg__HighFrequencyContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HighFrequencyContainer * msg = (v2x_msgs__msg__HighFrequencyContainer *)allocator.allocate(sizeof(v2x_msgs__msg__HighFrequencyContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__HighFrequencyContainer));
  bool success = v2x_msgs__msg__HighFrequencyContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__HighFrequencyContainer__destroy(v2x_msgs__msg__HighFrequencyContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__HighFrequencyContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__HighFrequencyContainer__Sequence__init(v2x_msgs__msg__HighFrequencyContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HighFrequencyContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__HighFrequencyContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__HighFrequencyContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__HighFrequencyContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__HighFrequencyContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__HighFrequencyContainer__Sequence__fini(v2x_msgs__msg__HighFrequencyContainer__Sequence * array)
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
      v2x_msgs__msg__HighFrequencyContainer__fini(&array->data[i]);
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

v2x_msgs__msg__HighFrequencyContainer__Sequence *
v2x_msgs__msg__HighFrequencyContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__HighFrequencyContainer__Sequence * array = (v2x_msgs__msg__HighFrequencyContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__HighFrequencyContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__HighFrequencyContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__HighFrequencyContainer__Sequence__destroy(v2x_msgs__msg__HighFrequencyContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__HighFrequencyContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__HighFrequencyContainer__Sequence__are_equal(const v2x_msgs__msg__HighFrequencyContainer__Sequence * lhs, const v2x_msgs__msg__HighFrequencyContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__HighFrequencyContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__HighFrequencyContainer__Sequence__copy(
  const v2x_msgs__msg__HighFrequencyContainer__Sequence * input,
  v2x_msgs__msg__HighFrequencyContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__HighFrequencyContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__HighFrequencyContainer * data =
      (v2x_msgs__msg__HighFrequencyContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__HighFrequencyContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__HighFrequencyContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__HighFrequencyContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
