// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_status_package__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `requester`
#include "v2x_msgs/msg/detail/signal_requester_info__functions.h"
// Member `inbound_on`
// Member `outbound_on`
#include "v2x_msgs/msg/detail/intersection_access_point__functions.h"
// Member `minute`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `second`
// Member `duration`
#include "v2x_msgs/msg/detail/d_second__functions.h"
// Member `status`
#include "v2x_msgs/msg/detail/prioritization_response_status__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_status_package__functions.h"

bool
v2x_msgs__msg__SignalStatusPackage__init(v2x_msgs__msg__SignalStatusPackage * msg)
{
  if (!msg) {
    return false;
  }
  // requester_present
  msg->requester_present = false;
  // requester
  if (!v2x_msgs__msg__SignalRequesterInfo__init(&msg->requester)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // inbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__init(&msg->inbound_on)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // outbound_on_present
  msg->outbound_on_present = false;
  // outbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__init(&msg->outbound_on)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // minute_present
  msg->minute_present = false;
  // minute
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->minute)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // second_present
  msg->second_present = false;
  // second
  if (!v2x_msgs__msg__DSecond__init(&msg->second)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // duration_present
  msg->duration_present = false;
  // duration
  if (!v2x_msgs__msg__DSecond__init(&msg->duration)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // status
  if (!v2x_msgs__msg__PrioritizationResponseStatus__init(&msg->status)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegSignalStatusPackage__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalStatusPackage__fini(v2x_msgs__msg__SignalStatusPackage * msg)
{
  if (!msg) {
    return;
  }
  // requester_present
  // requester
  v2x_msgs__msg__SignalRequesterInfo__fini(&msg->requester);
  // inbound_on
  v2x_msgs__msg__IntersectionAccessPoint__fini(&msg->inbound_on);
  // outbound_on_present
  // outbound_on
  v2x_msgs__msg__IntersectionAccessPoint__fini(&msg->outbound_on);
  // minute_present
  // minute
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->minute);
  // second_present
  // second
  v2x_msgs__msg__DSecond__fini(&msg->second);
  // duration_present
  // duration
  v2x_msgs__msg__DSecond__fini(&msg->duration);
  // status
  v2x_msgs__msg__PrioritizationResponseStatus__fini(&msg->status);
  // regional_present
  // regional
  v2x_msgs__msg__RegSignalStatusPackage__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__SignalStatusPackage__are_equal(const v2x_msgs__msg__SignalStatusPackage * lhs, const v2x_msgs__msg__SignalStatusPackage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // requester_present
  if (lhs->requester_present != rhs->requester_present) {
    return false;
  }
  // requester
  if (!v2x_msgs__msg__SignalRequesterInfo__are_equal(
      &(lhs->requester), &(rhs->requester)))
  {
    return false;
  }
  // inbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__are_equal(
      &(lhs->inbound_on), &(rhs->inbound_on)))
  {
    return false;
  }
  // outbound_on_present
  if (lhs->outbound_on_present != rhs->outbound_on_present) {
    return false;
  }
  // outbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__are_equal(
      &(lhs->outbound_on), &(rhs->outbound_on)))
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
  // status
  if (!v2x_msgs__msg__PrioritizationResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegSignalStatusPackage__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusPackage__copy(
  const v2x_msgs__msg__SignalStatusPackage * input,
  v2x_msgs__msg__SignalStatusPackage * output)
{
  if (!input || !output) {
    return false;
  }
  // requester_present
  output->requester_present = input->requester_present;
  // requester
  if (!v2x_msgs__msg__SignalRequesterInfo__copy(
      &(input->requester), &(output->requester)))
  {
    return false;
  }
  // inbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__copy(
      &(input->inbound_on), &(output->inbound_on)))
  {
    return false;
  }
  // outbound_on_present
  output->outbound_on_present = input->outbound_on_present;
  // outbound_on
  if (!v2x_msgs__msg__IntersectionAccessPoint__copy(
      &(input->outbound_on), &(output->outbound_on)))
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
  // status
  if (!v2x_msgs__msg__PrioritizationResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegSignalStatusPackage__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalStatusPackage *
v2x_msgs__msg__SignalStatusPackage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackage * msg = (v2x_msgs__msg__SignalStatusPackage *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusPackage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalStatusPackage));
  bool success = v2x_msgs__msg__SignalStatusPackage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalStatusPackage__destroy(v2x_msgs__msg__SignalStatusPackage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalStatusPackage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalStatusPackage__Sequence__init(v2x_msgs__msg__SignalStatusPackage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalStatusPackage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalStatusPackage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalStatusPackage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalStatusPackage__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalStatusPackage__Sequence__fini(v2x_msgs__msg__SignalStatusPackage__Sequence * array)
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
      v2x_msgs__msg__SignalStatusPackage__fini(&array->data[i]);
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

v2x_msgs__msg__SignalStatusPackage__Sequence *
v2x_msgs__msg__SignalStatusPackage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackage__Sequence * array = (v2x_msgs__msg__SignalStatusPackage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusPackage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalStatusPackage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalStatusPackage__Sequence__destroy(v2x_msgs__msg__SignalStatusPackage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalStatusPackage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalStatusPackage__Sequence__are_equal(const v2x_msgs__msg__SignalStatusPackage__Sequence * lhs, const v2x_msgs__msg__SignalStatusPackage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusPackage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusPackage__Sequence__copy(
  const v2x_msgs__msg__SignalStatusPackage__Sequence * input,
  v2x_msgs__msg__SignalStatusPackage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalStatusPackage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalStatusPackage * data =
      (v2x_msgs__msg__SignalStatusPackage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalStatusPackage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalStatusPackage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusPackage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
