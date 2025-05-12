// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/InternationalSignDistanceBetweenVehicles.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/international_sign_distance_between_vehicles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `international_sign_distance_between_vehicles`
#include "v2x_msgs/msg/detail/distance__functions.h"

bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * msg)
{
  if (!msg) {
    return false;
  }
  // international_sign_distance_between_vehicles
  if (!v2x_msgs__msg__Distance__init(&msg->international_sign_distance_between_vehicles)) {
    v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * msg)
{
  if (!msg) {
    return;
  }
  // international_sign_distance_between_vehicles
  v2x_msgs__msg__Distance__fini(&msg->international_sign_distance_between_vehicles);
}

bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__are_equal(const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * lhs, const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // international_sign_distance_between_vehicles
  if (!v2x_msgs__msg__Distance__are_equal(
      &(lhs->international_sign_distance_between_vehicles), &(rhs->international_sign_distance_between_vehicles)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__copy(
  const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * input,
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * output)
{
  if (!input || !output) {
    return false;
  }
  // international_sign_distance_between_vehicles
  if (!v2x_msgs__msg__Distance__copy(
      &(input->international_sign_distance_between_vehicles), &(output->international_sign_distance_between_vehicles)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__InternationalSignDistanceBetweenVehicles *
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * msg = (v2x_msgs__msg__InternationalSignDistanceBetweenVehicles *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles));
  bool success = v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__destroy(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__init(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__InternationalSignDistanceBetweenVehicles *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(&data[i - 1]);
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
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__fini(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * array)
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
      v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(&array->data[i]);
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

v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence *
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * array = (v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__destroy(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__are_equal(const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * lhs, const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence__copy(
  const v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * input,
  v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__InternationalSignDistanceBetweenVehicles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__InternationalSignDistanceBetweenVehicles * data =
      (v2x_msgs__msg__InternationalSignDistanceBetweenVehicles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignDistanceBetweenVehicles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
