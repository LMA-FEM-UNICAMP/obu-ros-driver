// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_request_package__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request`
#include "v2x_msgs/msg/detail/signal_request__functions.h"
// Member `minute`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `second`
// Member `duration`
#include "v2x_msgs/msg/detail/d_second__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_request_package__functions.h"

bool
v2x_msgs__msg__SignalRequestPackage__init(v2x_msgs__msg__SignalRequestPackage * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!v2x_msgs__msg__SignalRequest__init(&msg->request)) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
    return false;
  }
  // minute_present
  msg->minute_present = false;
  // minute
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->minute)) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
    return false;
  }
  // second_present
  msg->second_present = false;
  // second
  if (!v2x_msgs__msg__DSecond__init(&msg->second)) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
    return false;
  }
  // duration_present
  msg->duration_present = false;
  // duration
  if (!v2x_msgs__msg__DSecond__init(&msg->duration)) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegSignalRequestPackage__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalRequestPackage__fini(v2x_msgs__msg__SignalRequestPackage * msg)
{
  if (!msg) {
    return;
  }
  // request
  v2x_msgs__msg__SignalRequest__fini(&msg->request);
  // minute_present
  // minute
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->minute);
  // second_present
  // second
  v2x_msgs__msg__DSecond__fini(&msg->second);
  // duration_present
  // duration
  v2x_msgs__msg__DSecond__fini(&msg->duration);
  // regional_present
  // regional
  v2x_msgs__msg__RegSignalRequestPackage__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__SignalRequestPackage__are_equal(const v2x_msgs__msg__SignalRequestPackage * lhs, const v2x_msgs__msg__SignalRequestPackage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!v2x_msgs__msg__SignalRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // minute_present
  if (lhs->minute_present != rhs->minute_present) {
    return false;
  }
  // minute
  if (!v2x_msgs__msg__MinuteOfTheYear__are_equal(
      &(lhs->minute), &(rhs->minute)))
  {
    return false;
  }
  // second_present
  if (lhs->second_present != rhs->second_present) {
    return false;
  }
  // second
  if (!v2x_msgs__msg__DSecond__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  // duration_present
  if (lhs->duration_present != rhs->duration_present) {
    return false;
  }
  // duration
  if (!v2x_msgs__msg__DSecond__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegSignalRequestPackage__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequestPackage__copy(
  const v2x_msgs__msg__SignalRequestPackage * input,
  v2x_msgs__msg__SignalRequestPackage * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!v2x_msgs__msg__SignalRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // minute_present
  output->minute_present = input->minute_present;
  // minute
  if (!v2x_msgs__msg__MinuteOfTheYear__copy(
      &(input->minute), &(output->minute)))
  {
    return false;
  }
  // second_present
  output->second_present = input->second_present;
  // second
  if (!v2x_msgs__msg__DSecond__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  // duration_present
  output->duration_present = input->duration_present;
  // duration
  if (!v2x_msgs__msg__DSecond__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegSignalRequestPackage__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalRequestPackage *
v2x_msgs__msg__SignalRequestPackage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequestPackage * msg = (v2x_msgs__msg__SignalRequestPackage *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequestPackage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalRequestPackage));
  bool success = v2x_msgs__msg__SignalRequestPackage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalRequestPackage__destroy(v2x_msgs__msg__SignalRequestPackage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalRequestPackage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalRequestPackage__Sequence__init(v2x_msgs__msg__SignalRequestPackage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequestPackage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalRequestPackage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalRequestPackage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalRequestPackage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalRequestPackage__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalRequestPackage__Sequence__fini(v2x_msgs__msg__SignalRequestPackage__Sequence * array)
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
      v2x_msgs__msg__SignalRequestPackage__fini(&array->data[i]);
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

v2x_msgs__msg__SignalRequestPackage__Sequence *
v2x_msgs__msg__SignalRequestPackage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequestPackage__Sequence * array = (v2x_msgs__msg__SignalRequestPackage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequestPackage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalRequestPackage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalRequestPackage__Sequence__destroy(v2x_msgs__msg__SignalRequestPackage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalRequestPackage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalRequestPackage__Sequence__are_equal(const v2x_msgs__msg__SignalRequestPackage__Sequence * lhs, const v2x_msgs__msg__SignalRequestPackage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalRequestPackage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequestPackage__Sequence__copy(
  const v2x_msgs__msg__SignalRequestPackage__Sequence * input,
  v2x_msgs__msg__SignalRequestPackage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalRequestPackage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalRequestPackage * data =
      (v2x_msgs__msg__SignalRequestPackage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalRequestPackage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalRequestPackage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalRequestPackage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
