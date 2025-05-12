// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RawRxMessage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/raw_rx_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_info`
#include "v2x_msgs/msg/detail/local_info__functions.h"
// Member `rx_info`
#include "v2x_msgs/msg/detail/rx_info__functions.h"
// Member `payload_string`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msgs__msg__RawRxMessage__init(v2x_msgs__msg__RawRxMessage * msg)
{
  if (!msg) {
    return false;
  }
  // local_info_present
  msg->local_info_present = false;
  // local_info
  if (!v2x_msgs__msg__LocalInfo__init(&msg->local_info)) {
    v2x_msgs__msg__RawRxMessage__fini(msg);
    return false;
  }
  // rx_info
  if (!v2x_msgs__msg__RxInfo__init(&msg->rx_info)) {
    v2x_msgs__msg__RawRxMessage__fini(msg);
    return false;
  }
  // payload_size
  // payload_string_present
  msg->payload_string_present = false;
  // payload_string
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->payload_string, 0)) {
    v2x_msgs__msg__RawRxMessage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RawRxMessage__fini(v2x_msgs__msg__RawRxMessage * msg)
{
  if (!msg) {
    return;
  }
  // local_info_present
  // local_info
  v2x_msgs__msg__LocalInfo__fini(&msg->local_info);
  // rx_info
  v2x_msgs__msg__RxInfo__fini(&msg->rx_info);
  // payload_size
  // payload_string_present
  // payload_string
  rosidl_runtime_c__int64__Sequence__fini(&msg->payload_string);
}

bool
v2x_msgs__msg__RawRxMessage__are_equal(const v2x_msgs__msg__RawRxMessage * lhs, const v2x_msgs__msg__RawRxMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_info_present
  if (lhs->local_info_present != rhs->local_info_present) {
    return false;
  }
  // local_info
  if (!v2x_msgs__msg__LocalInfo__are_equal(
      &(lhs->local_info), &(rhs->local_info)))
  {
    return false;
  }
  // rx_info
  if (!v2x_msgs__msg__RxInfo__are_equal(
      &(lhs->rx_info), &(rhs->rx_info)))
  {
    return false;
  }
  // payload_size
  if (lhs->payload_size != rhs->payload_size) {
    return false;
  }
  // payload_string_present
  if (lhs->payload_string_present != rhs->payload_string_present) {
    return false;
  }
  // payload_string
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->payload_string), &(rhs->payload_string)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RawRxMessage__copy(
  const v2x_msgs__msg__RawRxMessage * input,
  v2x_msgs__msg__RawRxMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // local_info_present
  output->local_info_present = input->local_info_present;
  // local_info
  if (!v2x_msgs__msg__LocalInfo__copy(
      &(input->local_info), &(output->local_info)))
  {
    return false;
  }
  // rx_info
  if (!v2x_msgs__msg__RxInfo__copy(
      &(input->rx_info), &(output->rx_info)))
  {
    return false;
  }
  // payload_size
  output->payload_size = input->payload_size;
  // payload_string_present
  output->payload_string_present = input->payload_string_present;
  // payload_string
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->payload_string), &(output->payload_string)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RawRxMessage *
v2x_msgs__msg__RawRxMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RawRxMessage * msg = (v2x_msgs__msg__RawRxMessage *)allocator.allocate(sizeof(v2x_msgs__msg__RawRxMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RawRxMessage));
  bool success = v2x_msgs__msg__RawRxMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RawRxMessage__destroy(v2x_msgs__msg__RawRxMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RawRxMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RawRxMessage__Sequence__init(v2x_msgs__msg__RawRxMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RawRxMessage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RawRxMessage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RawRxMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RawRxMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RawRxMessage__fini(&data[i - 1]);
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
v2x_msgs__msg__RawRxMessage__Sequence__fini(v2x_msgs__msg__RawRxMessage__Sequence * array)
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
      v2x_msgs__msg__RawRxMessage__fini(&array->data[i]);
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

v2x_msgs__msg__RawRxMessage__Sequence *
v2x_msgs__msg__RawRxMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RawRxMessage__Sequence * array = (v2x_msgs__msg__RawRxMessage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RawRxMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RawRxMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RawRxMessage__Sequence__destroy(v2x_msgs__msg__RawRxMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RawRxMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RawRxMessage__Sequence__are_equal(const v2x_msgs__msg__RawRxMessage__Sequence * lhs, const v2x_msgs__msg__RawRxMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RawRxMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RawRxMessage__Sequence__copy(
  const v2x_msgs__msg__RawRxMessage__Sequence * input,
  v2x_msgs__msg__RawRxMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RawRxMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RawRxMessage * data =
      (v2x_msgs__msg__RawRxMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RawRxMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RawRxMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RawRxMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
