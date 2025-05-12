// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalStatusPackageAddGrpC.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_status_package_add_grp_c__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `synch_to_schedule`
#include "v2x_msgs/msg/detail/delta_time__functions.h"
// Member `rejected_reason`
#include "v2x_msgs/msg/detail/rejected_reason__functions.h"

bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__init(v2x_msgs__msg__SignalStatusPackageAddGrpC * msg)
{
  if (!msg) {
    return false;
  }
  // synch_to_schedule_present
  msg->synch_to_schedule_present = false;
  // synch_to_schedule
  if (!v2x_msgs__msg__DeltaTime__init(&msg->synch_to_schedule)) {
    v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(msg);
    return false;
  }
  // rejected_reason_present
  msg->rejected_reason_present = false;
  // rejected_reason
  if (!v2x_msgs__msg__RejectedReason__init(&msg->rejected_reason)) {
    v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(v2x_msgs__msg__SignalStatusPackageAddGrpC * msg)
{
  if (!msg) {
    return;
  }
  // synch_to_schedule_present
  // synch_to_schedule
  v2x_msgs__msg__DeltaTime__fini(&msg->synch_to_schedule);
  // rejected_reason_present
  // rejected_reason
  v2x_msgs__msg__RejectedReason__fini(&msg->rejected_reason);
}

bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__are_equal(const v2x_msgs__msg__SignalStatusPackageAddGrpC * lhs, const v2x_msgs__msg__SignalStatusPackageAddGrpC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // synch_to_schedule_present
  if (lhs->synch_to_schedule_present != rhs->synch_to_schedule_present) {
    return false;
  }
  // synch_to_schedule
  if (!v2x_msgs__msg__DeltaTime__are_equal(
      &(lhs->synch_to_schedule), &(rhs->synch_to_schedule)))
  {
    return false;
  }
  // rejected_reason_present
  if (lhs->rejected_reason_present != rhs->rejected_reason_present) {
    return false;
  }
  // rejected_reason
  if (!v2x_msgs__msg__RejectedReason__are_equal(
      &(lhs->rejected_reason), &(rhs->rejected_reason)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__copy(
  const v2x_msgs__msg__SignalStatusPackageAddGrpC * input,
  v2x_msgs__msg__SignalStatusPackageAddGrpC * output)
{
  if (!input || !output) {
    return false;
  }
  // synch_to_schedule_present
  output->synch_to_schedule_present = input->synch_to_schedule_present;
  // synch_to_schedule
  if (!v2x_msgs__msg__DeltaTime__copy(
      &(input->synch_to_schedule), &(output->synch_to_schedule)))
  {
    return false;
  }
  // rejected_reason_present
  output->rejected_reason_present = input->rejected_reason_present;
  // rejected_reason
  if (!v2x_msgs__msg__RejectedReason__copy(
      &(input->rejected_reason), &(output->rejected_reason)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalStatusPackageAddGrpC *
v2x_msgs__msg__SignalStatusPackageAddGrpC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackageAddGrpC * msg = (v2x_msgs__msg__SignalStatusPackageAddGrpC *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusPackageAddGrpC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalStatusPackageAddGrpC));
  bool success = v2x_msgs__msg__SignalStatusPackageAddGrpC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalStatusPackageAddGrpC__destroy(v2x_msgs__msg__SignalStatusPackageAddGrpC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__init(v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackageAddGrpC * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalStatusPackageAddGrpC *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalStatusPackageAddGrpC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalStatusPackageAddGrpC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__fini(v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * array)
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
      v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(&array->data[i]);
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

v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence *
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * array = (v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__destroy(v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__are_equal(const v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * lhs, const v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusPackageAddGrpC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence__copy(
  const v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * input,
  v2x_msgs__msg__SignalStatusPackageAddGrpC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalStatusPackageAddGrpC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalStatusPackageAddGrpC * data =
      (v2x_msgs__msg__SignalStatusPackageAddGrpC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalStatusPackageAddGrpC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalStatusPackageAddGrpC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalStatusPackageAddGrpC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
