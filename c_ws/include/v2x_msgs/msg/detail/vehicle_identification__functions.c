// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleIdentification.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_identification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `w_minumber`
#include "v2x_msgs/msg/detail/wm_inumber__functions.h"
// Member `v_ds`
#include "v2x_msgs/msg/detail/vds__functions.h"

bool
v2x_msgs__msg__VehicleIdentification__init(v2x_msgs__msg__VehicleIdentification * msg)
{
  if (!msg) {
    return false;
  }
  // w_minumber_present
  msg->w_minumber_present = false;
  // w_minumber
  if (!v2x_msgs__msg__WMInumber__init(&msg->w_minumber)) {
    v2x_msgs__msg__VehicleIdentification__fini(msg);
    return false;
  }
  // v_ds_present
  msg->v_ds_present = false;
  // v_ds
  if (!v2x_msgs__msg__VDS__init(&msg->v_ds)) {
    v2x_msgs__msg__VehicleIdentification__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleIdentification__fini(v2x_msgs__msg__VehicleIdentification * msg)
{
  if (!msg) {
    return;
  }
  // w_minumber_present
  // w_minumber
  v2x_msgs__msg__WMInumber__fini(&msg->w_minumber);
  // v_ds_present
  // v_ds
  v2x_msgs__msg__VDS__fini(&msg->v_ds);
}

bool
v2x_msgs__msg__VehicleIdentification__are_equal(const v2x_msgs__msg__VehicleIdentification * lhs, const v2x_msgs__msg__VehicleIdentification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // w_minumber_present
  if (lhs->w_minumber_present != rhs->w_minumber_present) {
    return false;
  }
  // w_minumber
  if (!v2x_msgs__msg__WMInumber__are_equal(
      &(lhs->w_minumber), &(rhs->w_minumber)))
  {
    return false;
  }
  // v_ds_present
  if (lhs->v_ds_present != rhs->v_ds_present) {
    return false;
  }
  // v_ds
  if (!v2x_msgs__msg__VDS__are_equal(
      &(lhs->v_ds), &(rhs->v_ds)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleIdentification__copy(
  const v2x_msgs__msg__VehicleIdentification * input,
  v2x_msgs__msg__VehicleIdentification * output)
{
  if (!input || !output) {
    return false;
  }
  // w_minumber_present
  output->w_minumber_present = input->w_minumber_present;
  // w_minumber
  if (!v2x_msgs__msg__WMInumber__copy(
      &(input->w_minumber), &(output->w_minumber)))
  {
    return false;
  }
  // v_ds_present
  output->v_ds_present = input->v_ds_present;
  // v_ds
  if (!v2x_msgs__msg__VDS__copy(
      &(input->v_ds), &(output->v_ds)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleIdentification *
v2x_msgs__msg__VehicleIdentification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleIdentification * msg = (v2x_msgs__msg__VehicleIdentification *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleIdentification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleIdentification));
  bool success = v2x_msgs__msg__VehicleIdentification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleIdentification__destroy(v2x_msgs__msg__VehicleIdentification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleIdentification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleIdentification__Sequence__init(v2x_msgs__msg__VehicleIdentification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleIdentification * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleIdentification *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleIdentification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleIdentification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleIdentification__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleIdentification__Sequence__fini(v2x_msgs__msg__VehicleIdentification__Sequence * array)
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
      v2x_msgs__msg__VehicleIdentification__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleIdentification__Sequence *
v2x_msgs__msg__VehicleIdentification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleIdentification__Sequence * array = (v2x_msgs__msg__VehicleIdentification__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleIdentification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleIdentification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleIdentification__Sequence__destroy(v2x_msgs__msg__VehicleIdentification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleIdentification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleIdentification__Sequence__are_equal(const v2x_msgs__msg__VehicleIdentification__Sequence * lhs, const v2x_msgs__msg__VehicleIdentification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleIdentification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleIdentification__Sequence__copy(
  const v2x_msgs__msg__VehicleIdentification__Sequence * input,
  v2x_msgs__msg__VehicleIdentification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleIdentification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleIdentification * data =
      (v2x_msgs__msg__VehicleIdentification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleIdentification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleIdentification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleIdentification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
