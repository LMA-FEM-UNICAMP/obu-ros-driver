// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalStatusMessage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_status_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__functions.h"
// Member `second`
#include "v2x_msgs/msg/detail/d_second__functions.h"
// Member `sequence_number`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `status`
#include "v2x_msgs/msg/detail/signal_status_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_status_message__functions.h"

bool
v2x_msgs__msg__SignalStatusMessage__init(v2x_msgs__msg__SignalStatusMessage * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp_present
  msg->time_stamp_present = false;
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__init(&msg->time_stamp)) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
    return false;
  }
  // second
  if (!v2x_msgs__msg__DSecond__init(&msg->second)) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
    return false;
  }
  // sequence_number_present
  msg->sequence_number_present = false;
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__init(&msg->sequence_number)) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
    return false;
  }
  // status
  if (!v2x_msgs__msg__SignalStatusList__init(&msg->status)) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegSignalStatusMessage__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalStatusMessage__fini(v2x_msgs__msg__SignalStatusMessage * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp_present
  // time_stamp
  v2x_msgs__msg__MinuteOfTheYear__fini(&msg->time_stamp);
  // second
  v2x_msgs__msg__DSecond__fini(&msg->second);
  // sequence_number_present
  // sequence_number
  v2x_msgs__msg__MsgCount__fini(&msg->sequence_number);
  // status
  v2x_msgs__msg__SignalStatusList__fini(&msg->status);
  // regional_present
  // regional
  v2x_msgs__msg__RegSignalStatusMessage__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__SignalStatusMessage__are_equal(const v2x_msgs__msg__SignalStatusMessage * lhs, const v2x_msgs__msg__SignalStatusMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp_present
  if (lhs->time_stamp_present != rhs->time_stamp_present) {
    return false;
  }
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // second
  if (!v2x_msgs__msg__DSecond__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  // sequence_number_present
  if (lhs->sequence_number_present != rhs->sequence_number_present) {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->sequence_number), &(rhs->sequence_number)))
  {
    return false;
  }
  // status
  if (!v2x_msgs__msg__SignalStatusList__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegSignalStatusMessage__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusMessage__copy(
  const v2x_msgs__msg__SignalStatusMessage * input,
  v2x_msgs__msg__SignalStatusMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp_present
  output->time_stamp_present = input->time_stamp_present;
  // time_stamp
  if (!v2x_msgs__msg__MinuteOfTheYear__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // second
  if (!v2x_msgs__msg__DSecond__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  // sequence_number_present
  output->sequence_number_present = input->sequence_number_present;
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->sequence_number), &(output->sequence_number)))
  {
    return false;
  }
  // status
  if (!v2x_msgs__msg__SignalStatusList__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegSignalStatusMessage__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalStatusMessage *
v2x_msgs__msg__SignalStatusMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusMessage * msg = (v2x_msgs__msg__SignalStatusMessage *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalStatusMessage));
  bool success = v2x_msgs__msg__SignalStatusMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalStatusMessage__destroy(v2x_msgs__msg__SignalStatusMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalStatusMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalStatusMessage__Sequence__init(v2x_msgs__msg__SignalStatusMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusMessage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalStatusMessage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalStatusMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalStatusMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalStatusMessage__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalStatusMessage__Sequence__fini(v2x_msgs__msg__SignalStatusMessage__Sequence * array)
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
      v2x_msgs__msg__SignalStatusMessage__fini(&array->data[i]);
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

v2x_msgs__msg__SignalStatusMessage__Sequence *
v2x_msgs__msg__SignalStatusMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusMessage__Sequence * array = (v2x_msgs__msg__SignalStatusMessage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalStatusMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalStatusMessage__Sequence__destroy(v2x_msgs__msg__SignalStatusMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalStatusMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalStatusMessage__Sequence__are_equal(const v2x_msgs__msg__SignalStatusMessage__Sequence * lhs, const v2x_msgs__msg__SignalStatusMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusMessage__Sequence__copy(
  const v2x_msgs__msg__SignalStatusMessage__Sequence * input,
  v2x_msgs__msg__SignalStatusMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalStatusMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalStatusMessage * data =
      (v2x_msgs__msg__SignalStatusMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalStatusMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalStatusMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
