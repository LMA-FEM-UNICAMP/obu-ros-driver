// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/InternationalSignDestinationInformation.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/international_sign_destination_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `io_list`
#include "v2x_msgs/msg/detail/dddiolist__functions.h"

bool
v2x_msgs__msg__InternationalSignDestinationInformation__init(v2x_msgs__msg__InternationalSignDestinationInformation * msg)
{
  if (!msg) {
    return false;
  }
  // junction_direction_present
  msg->junction_direction_present = false;
  // junction_direction
  // roundabout_cw_direction_present
  msg->roundabout_cw_direction_present = false;
  // roundabout_cw_direction
  // roundabout_ccw_direction_present
  msg->roundabout_ccw_direction_present = false;
  // roundabout_ccw_direction
  // io_list
  if (!v2x_msgs__msg__DDDIOLIST__init(&msg->io_list)) {
    v2x_msgs__msg__InternationalSignDestinationInformation__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__InternationalSignDestinationInformation__fini(v2x_msgs__msg__InternationalSignDestinationInformation * msg)
{
  if (!msg) {
    return;
  }
  // junction_direction_present
  // junction_direction
  // roundabout_cw_direction_present
  // roundabout_cw_direction
  // roundabout_ccw_direction_present
  // roundabout_ccw_direction
  // io_list
  v2x_msgs__msg__DDDIOLIST__fini(&msg->io_list);
}

bool
v2x_msgs__msg__InternationalSignDestinationInformation__are_equal(const v2x_msgs__msg__InternationalSignDestinationInformation * lhs, const v2x_msgs__msg__InternationalSignDestinationInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // junction_direction_present
  if (lhs->junction_direction_present != rhs->junction_direction_present) {
    return false;
  }
  // junction_direction
  if (lhs->junction_direction != rhs->junction_direction) {
    return false;
  }
  // roundabout_cw_direction_present
  if (lhs->roundabout_cw_direction_present != rhs->roundabout_cw_direction_present) {
    return false;
  }
  // roundabout_cw_direction
  if (lhs->roundabout_cw_direction != rhs->roundabout_cw_direction) {
    return false;
  }
  // roundabout_ccw_direction_present
  if (lhs->roundabout_ccw_direction_present != rhs->roundabout_ccw_direction_present) {
    return false;
  }
  // roundabout_ccw_direction
  if (lhs->roundabout_ccw_direction != rhs->roundabout_ccw_direction) {
    return false;
  }
  // io_list
  if (!v2x_msgs__msg__DDDIOLIST__are_equal(
      &(lhs->io_list), &(rhs->io_list)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignDestinationInformation__copy(
  const v2x_msgs__msg__InternationalSignDestinationInformation * input,
  v2x_msgs__msg__InternationalSignDestinationInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // junction_direction_present
  output->junction_direction_present = input->junction_direction_present;
  // junction_direction
  output->junction_direction = input->junction_direction;
  // roundabout_cw_direction_present
  output->roundabout_cw_direction_present = input->roundabout_cw_direction_present;
  // roundabout_cw_direction
  output->roundabout_cw_direction = input->roundabout_cw_direction;
  // roundabout_ccw_direction_present
  output->roundabout_ccw_direction_present = input->roundabout_ccw_direction_present;
  // roundabout_ccw_direction
  output->roundabout_ccw_direction = input->roundabout_ccw_direction;
  // io_list
  if (!v2x_msgs__msg__DDDIOLIST__copy(
      &(input->io_list), &(output->io_list)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__InternationalSignDestinationInformation *
v2x_msgs__msg__InternationalSignDestinationInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDestinationInformation * msg = (v2x_msgs__msg__InternationalSignDestinationInformation *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignDestinationInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__InternationalSignDestinationInformation));
  bool success = v2x_msgs__msg__InternationalSignDestinationInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__InternationalSignDestinationInformation__destroy(v2x_msgs__msg__InternationalSignDestinationInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__InternationalSignDestinationInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__init(v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDestinationInformation * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__InternationalSignDestinationInformation *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__InternationalSignDestinationInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__InternationalSignDestinationInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__InternationalSignDestinationInformation__fini(&data[i - 1]);
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
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__fini(v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * array)
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
      v2x_msgs__msg__InternationalSignDestinationInformation__fini(&array->data[i]);
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

v2x_msgs__msg__InternationalSignDestinationInformation__Sequence *
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * array = (v2x_msgs__msg__InternationalSignDestinationInformation__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignDestinationInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__destroy(v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__are_equal(const v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * lhs, const v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignDestinationInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignDestinationInformation__Sequence__copy(
  const v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * input,
  v2x_msgs__msg__InternationalSignDestinationInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__InternationalSignDestinationInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__InternationalSignDestinationInformation * data =
      (v2x_msgs__msg__InternationalSignDestinationInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__InternationalSignDestinationInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__InternationalSignDestinationInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignDestinationInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
