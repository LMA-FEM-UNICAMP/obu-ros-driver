// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ActualNumberOfPassengers.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/actual_number_of_passengers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actual_number_of_passengers`
#include "v2x_msgs/msg/detail/int1__functions.h"

bool
v2x_msgs__msg__ActualNumberOfPassengers__init(v2x_msgs__msg__ActualNumberOfPassengers * msg)
{
  if (!msg) {
    return false;
  }
  // actual_number_of_passengers
  if (!v2x_msgs__msg__Int1__init(&msg->actual_number_of_passengers)) {
    v2x_msgs__msg__ActualNumberOfPassengers__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ActualNumberOfPassengers__fini(v2x_msgs__msg__ActualNumberOfPassengers * msg)
{
  if (!msg) {
    return;
  }
  // actual_number_of_passengers
  v2x_msgs__msg__Int1__fini(&msg->actual_number_of_passengers);
}

bool
v2x_msgs__msg__ActualNumberOfPassengers__are_equal(const v2x_msgs__msg__ActualNumberOfPassengers * lhs, const v2x_msgs__msg__ActualNumberOfPassengers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actual_number_of_passengers
  if (!v2x_msgs__msg__Int1__are_equal(
      &(lhs->actual_number_of_passengers), &(rhs->actual_number_of_passengers)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ActualNumberOfPassengers__copy(
  const v2x_msgs__msg__ActualNumberOfPassengers * input,
  v2x_msgs__msg__ActualNumberOfPassengers * output)
{
  if (!input || !output) {
    return false;
  }
  // actual_number_of_passengers
  if (!v2x_msgs__msg__Int1__copy(
      &(input->actual_number_of_passengers), &(output->actual_number_of_passengers)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ActualNumberOfPassengers *
v2x_msgs__msg__ActualNumberOfPassengers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActualNumberOfPassengers * msg = (v2x_msgs__msg__ActualNumberOfPassengers *)allocator.allocate(sizeof(v2x_msgs__msg__ActualNumberOfPassengers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ActualNumberOfPassengers));
  bool success = v2x_msgs__msg__ActualNumberOfPassengers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ActualNumberOfPassengers__destroy(v2x_msgs__msg__ActualNumberOfPassengers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ActualNumberOfPassengers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__init(v2x_msgs__msg__ActualNumberOfPassengers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActualNumberOfPassengers * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ActualNumberOfPassengers *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ActualNumberOfPassengers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ActualNumberOfPassengers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ActualNumberOfPassengers__fini(&data[i - 1]);
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
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__fini(v2x_msgs__msg__ActualNumberOfPassengers__Sequence * array)
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
      v2x_msgs__msg__ActualNumberOfPassengers__fini(&array->data[i]);
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

v2x_msgs__msg__ActualNumberOfPassengers__Sequence *
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ActualNumberOfPassengers__Sequence * array = (v2x_msgs__msg__ActualNumberOfPassengers__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ActualNumberOfPassengers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ActualNumberOfPassengers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__destroy(v2x_msgs__msg__ActualNumberOfPassengers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ActualNumberOfPassengers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__are_equal(const v2x_msgs__msg__ActualNumberOfPassengers__Sequence * lhs, const v2x_msgs__msg__ActualNumberOfPassengers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ActualNumberOfPassengers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ActualNumberOfPassengers__Sequence__copy(
  const v2x_msgs__msg__ActualNumberOfPassengers__Sequence * input,
  v2x_msgs__msg__ActualNumberOfPassengers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ActualNumberOfPassengers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ActualNumberOfPassengers * data =
      (v2x_msgs__msg__ActualNumberOfPassengers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ActualNumberOfPassengers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ActualNumberOfPassengers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ActualNumberOfPassengers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
