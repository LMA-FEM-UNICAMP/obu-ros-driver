// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_dimensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_length_overall`
// Member `vehicle_heigth_overall`
// Member `vehicle_width_overall`
#include "v2x_msgs/msg/detail/int1__functions.h"

bool
v2x_msgs__msg__VehicleDimensions__init(v2x_msgs__msg__VehicleDimensions * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_length_overall
  if (!v2x_msgs__msg__Int1__init(&msg->vehicle_length_overall)) {
    v2x_msgs__msg__VehicleDimensions__fini(msg);
    return false;
  }
  // vehicle_heigth_overall
  if (!v2x_msgs__msg__Int1__init(&msg->vehicle_heigth_overall)) {
    v2x_msgs__msg__VehicleDimensions__fini(msg);
    return false;
  }
  // vehicle_width_overall
  if (!v2x_msgs__msg__Int1__init(&msg->vehicle_width_overall)) {
    v2x_msgs__msg__VehicleDimensions__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleDimensions__fini(v2x_msgs__msg__VehicleDimensions * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_length_overall
  v2x_msgs__msg__Int1__fini(&msg->vehicle_length_overall);
  // vehicle_heigth_overall
  v2x_msgs__msg__Int1__fini(&msg->vehicle_heigth_overall);
  // vehicle_width_overall
  v2x_msgs__msg__Int1__fini(&msg->vehicle_width_overall);
}

bool
v2x_msgs__msg__VehicleDimensions__are_equal(const v2x_msgs__msg__VehicleDimensions * lhs, const v2x_msgs__msg__VehicleDimensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_length_overall
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->vehicle_length_overall), &(rhs->vehicle_length_overall)))
  {
    return false;
  }
  // vehicle_heigth_overall
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->vehicle_heigth_overall), &(rhs->vehicle_heigth_overall)))
  {
    return false;
  }
  // vehicle_width_overall
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->vehicle_width_overall), &(rhs->vehicle_width_overall)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleDimensions__copy(
  const v2x_msgs__msg__VehicleDimensions * input,
  v2x_msgs__msg__VehicleDimensions * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_length_overall
  if (!v2x_msgs__msg__Int1__copy(
      &(input->vehicle_length_overall), &(output->vehicle_length_overall)))
  {
    return false;
  }
  // vehicle_heigth_overall
  if (!v2x_msgs__msg__Int1__copy(
      &(input->vehicle_heigth_overall), &(output->vehicle_heigth_overall)))
  {
    return false;
  }
  // vehicle_width_overall
  if (!v2x_msgs__msg__Int1__copy(
      &(input->vehicle_width_overall), &(output->vehicle_width_overall)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleDimensions *
v2x_msgs__msg__VehicleDimensions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleDimensions * msg = (v2x_msgs__msg__VehicleDimensions *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleDimensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleDimensions));
  bool success = v2x_msgs__msg__VehicleDimensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleDimensions__destroy(v2x_msgs__msg__VehicleDimensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleDimensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleDimensions__Sequence__init(v2x_msgs__msg__VehicleDimensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleDimensions * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleDimensions *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleDimensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleDimensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleDimensions__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleDimensions__Sequence__fini(v2x_msgs__msg__VehicleDimensions__Sequence * array)
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
      v2x_msgs__msg__VehicleDimensions__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleDimensions__Sequence *
v2x_msgs__msg__VehicleDimensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleDimensions__Sequence * array = (v2x_msgs__msg__VehicleDimensions__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleDimensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleDimensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleDimensions__Sequence__destroy(v2x_msgs__msg__VehicleDimensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleDimensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleDimensions__Sequence__are_equal(const v2x_msgs__msg__VehicleDimensions__Sequence * lhs, const v2x_msgs__msg__VehicleDimensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleDimensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleDimensions__Sequence__copy(
  const v2x_msgs__msg__VehicleDimensions__Sequence * input,
  v2x_msgs__msg__VehicleDimensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleDimensions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleDimensions * data =
      (v2x_msgs__msg__VehicleDimensions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleDimensions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleDimensions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleDimensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
