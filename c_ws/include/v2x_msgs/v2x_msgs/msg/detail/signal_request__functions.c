// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalRequest.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `request_id`
#include "v2x_msgs/msg/detail/request_id__functions.h"
// Member `request_type`
#include "v2x_msgs/msg/detail/priority_request_type__functions.h"
// Member `in_bound_lane`
// Member `out_bound_lane`
#include "v2x_msgs/msg/detail/intersection_access_point__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_request__functions.h"

bool
v2x_msgs__msg__SignalRequest__init(v2x_msgs__msg__SignalRequest * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  // request_id
  if (!v2x_msgs__msg__RequestID__init(&msg->request_id)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  // request_type
  if (!v2x_msgs__msg__PriorityRequestType__init(&msg->request_type)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  // in_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__init(&msg->in_bound_lane)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  // out_bound_lane_present
  msg->out_bound_lane_present = false;
  // out_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__init(&msg->out_bound_lane)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegSignalRequest__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__SignalRequest__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalRequest__fini(v2x_msgs__msg__SignalRequest * msg)
{
  if (!msg) {
    return;
  }
  // id
  v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
  // request_id
  v2x_msgs__msg__RequestID__fini(&msg->request_id);
  // request_type
  v2x_msgs__msg__PriorityRequestType__fini(&msg->request_type);
  // in_bound_lane
  v2x_msgs__msg__IntersectionAccessPoint__fini(&msg->in_bound_lane);
  // out_bound_lane_present
  // out_bound_lane
  v2x_msgs__msg__IntersectionAccessPoint__fini(&msg->out_bound_lane);
  // regional_present
  // regional
  v2x_msgs__msg__RegSignalRequest__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__SignalRequest__are_equal(const v2x_msgs__msg__SignalRequest * lhs, const v2x_msgs__msg__SignalRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // request_id
  if (!v2x_msgs__msg__RequestID__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  // request_type
  if (!v2x_msgs__msg__PriorityRequestType__are_equal(
      &(lhs->request_type), &(rhs->request_type)))
  {
    return false;
  }
  // in_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__are_equal(
      &(lhs->in_bound_lane), &(rhs->in_bound_lane)))
  {
    return false;
  }
  // out_bound_lane_present
  if (lhs->out_bound_lane_present != rhs->out_bound_lane_present) {
    return false;
  }
  // out_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__are_equal(
      &(lhs->out_bound_lane), &(rhs->out_bound_lane)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegSignalRequest__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequest__copy(
  const v2x_msgs__msg__SignalRequest * input,
  v2x_msgs__msg__SignalRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // request_id
  if (!v2x_msgs__msg__RequestID__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  // request_type
  if (!v2x_msgs__msg__PriorityRequestType__copy(
      &(input->request_type), &(output->request_type)))
  {
    return false;
  }
  // in_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__copy(
      &(input->in_bound_lane), &(output->in_bound_lane)))
  {
    return false;
  }
  // out_bound_lane_present
  output->out_bound_lane_present = input->out_bound_lane_present;
  // out_bound_lane
  if (!v2x_msgs__msg__IntersectionAccessPoint__copy(
      &(input->out_bound_lane), &(output->out_bound_lane)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegSignalRequest__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalRequest *
v2x_msgs__msg__SignalRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequest * msg = (v2x_msgs__msg__SignalRequest *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalRequest));
  bool success = v2x_msgs__msg__SignalRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalRequest__destroy(v2x_msgs__msg__SignalRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalRequest__Sequence__init(v2x_msgs__msg__SignalRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequest * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalRequest *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalRequest__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalRequest__Sequence__fini(v2x_msgs__msg__SignalRequest__Sequence * array)
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
      v2x_msgs__msg__SignalRequest__fini(&array->data[i]);
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

v2x_msgs__msg__SignalRequest__Sequence *
v2x_msgs__msg__SignalRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequest__Sequence * array = (v2x_msgs__msg__SignalRequest__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalRequest__Sequence__destroy(v2x_msgs__msg__SignalRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalRequest__Sequence__are_equal(const v2x_msgs__msg__SignalRequest__Sequence * lhs, const v2x_msgs__msg__SignalRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequest__Sequence__copy(
  const v2x_msgs__msg__SignalRequest__Sequence * input,
  v2x_msgs__msg__SignalRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalRequest * data =
      (v2x_msgs__msg__SignalRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
