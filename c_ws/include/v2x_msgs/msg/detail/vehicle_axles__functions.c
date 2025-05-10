// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VehicleAxles.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vehicle_axles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_first_axle_height`
#include "v2x_msgs/msg/detail/int1__functions.h"
// Member `trailer_axles`
#include "v2x_msgs/msg/detail/trailer_axles__functions.h"
// Member `tractor_axles`
#include "v2x_msgs/msg/detail/tractor_axles__functions.h"

bool
v2x_msgs__msg__VehicleAxles__init(v2x_msgs__msg__VehicleAxles * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_first_axle_height
  if (!v2x_msgs__msg__Int1__init(&msg->vehicle_first_axle_height)) {
    v2x_msgs__msg__VehicleAxles__fini(msg);
    return false;
  }
  // tyre_type
  // trailer_axles
  if (!v2x_msgs__msg__TrailerAxles__init(&msg->trailer_axles)) {
    v2x_msgs__msg__VehicleAxles__fini(msg);
    return false;
  }
  // tractor_axles
  if (!v2x_msgs__msg__TractorAxles__init(&msg->tractor_axles)) {
    v2x_msgs__msg__VehicleAxles__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VehicleAxles__fini(v2x_msgs__msg__VehicleAxles * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_first_axle_height
  v2x_msgs__msg__Int1__fini(&msg->vehicle_first_axle_height);
  // tyre_type
  // trailer_axles
  v2x_msgs__msg__TrailerAxles__fini(&msg->trailer_axles);
  // tractor_axles
  v2x_msgs__msg__TractorAxles__fini(&msg->tractor_axles);
}

bool
v2x_msgs__msg__VehicleAxles__are_equal(const v2x_msgs__msg__VehicleAxles * lhs, const v2x_msgs__msg__VehicleAxles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_first_axle_height
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->vehicle_first_axle_height), &(rhs->vehicle_first_axle_height)))
  {
    return false;
  }
  // tyre_type
  if (lhs->tyre_type != rhs->tyre_type) {
    return false;
  }
  // trailer_axles
  if (!v2x_msgs__msg__TrailerAxles__are_equal(
      &(lhs->trailer_axles), &(rhs->trailer_axles)))
  {
    return false;
  }
  // tractor_axles
  if (!v2x_msgs__msg__TractorAxles__are_equal(
      &(lhs->tractor_axles), &(rhs->tractor_axles)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VehicleAxles__copy(
  const v2x_msgs__msg__VehicleAxles * input,
  v2x_msgs__msg__VehicleAxles * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_first_axle_height
  if (!v2x_msgs__msg__Int1__copy(
      &(input->vehicle_first_axle_height), &(output->vehicle_first_axle_height)))
  {
    return false;
  }
  // tyre_type
  output->tyre_type = input->tyre_type;
  // trailer_axles
  if (!v2x_msgs__msg__TrailerAxles__copy(
      &(input->trailer_axles), &(output->trailer_axles)))
  {
    return false;
  }
  // tractor_axles
  if (!v2x_msgs__msg__TractorAxles__copy(
      &(input->tractor_axles), &(output->tractor_axles)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VehicleAxles *
v2x_msgs__msg__VehicleAxles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleAxles * msg = (v2x_msgs__msg__VehicleAxles *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleAxles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VehicleAxles));
  bool success = v2x_msgs__msg__VehicleAxles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VehicleAxles__destroy(v2x_msgs__msg__VehicleAxles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VehicleAxles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VehicleAxles__Sequence__init(v2x_msgs__msg__VehicleAxles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleAxles * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VehicleAxles *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VehicleAxles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VehicleAxles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VehicleAxles__fini(&data[i - 1]);
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
v2x_msgs__msg__VehicleAxles__Sequence__fini(v2x_msgs__msg__VehicleAxles__Sequence * array)
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
      v2x_msgs__msg__VehicleAxles__fini(&array->data[i]);
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

v2x_msgs__msg__VehicleAxles__Sequence *
v2x_msgs__msg__VehicleAxles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VehicleAxles__Sequence * array = (v2x_msgs__msg__VehicleAxles__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VehicleAxles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VehicleAxles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VehicleAxles__Sequence__destroy(v2x_msgs__msg__VehicleAxles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VehicleAxles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VehicleAxles__Sequence__are_equal(const v2x_msgs__msg__VehicleAxles__Sequence * lhs, const v2x_msgs__msg__VehicleAxles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VehicleAxles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VehicleAxles__Sequence__copy(
  const v2x_msgs__msg__VehicleAxles__Sequence * input,
  v2x_msgs__msg__VehicleAxles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VehicleAxles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VehicleAxles * data =
      (v2x_msgs__msg__VehicleAxles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VehicleAxles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VehicleAxles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VehicleAxles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
