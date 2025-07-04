// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sequence_number`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `sig_status`
#include "v2x_msgs/msg/detail/signal_status_package_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_status__functions.h"

bool
v2x_msgs__msg__SignalStatus__init(v2x_msgs__msg__SignalStatus * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__init(&msg->sequence_number)) {
    v2x_msgs__msg__SignalStatus__fini(msg);
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msgs__msg__SignalStatus__fini(msg);
    return false;
  }
  // sig_status
  if (!v2x_msgs__msg__SignalStatusPackageList__init(&msg->sig_status)) {
    v2x_msgs__msg__SignalStatus__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegSignalStatus__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__SignalStatus__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalStatus__fini(v2x_msgs__msg__SignalStatus * msg)
{
  if (!msg) {
    return;
  }
  // sequence_number
  v2x_msgs__msg__MsgCount__fini(&msg->sequence_number);
  // id
  v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
  // sig_status
  v2x_msgs__msg__SignalStatusPackageList__fini(&msg->sig_status);
  // regional_present
  // regional
  v2x_msgs__msg__RegSignalStatus__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__SignalStatus__are_equal(const v2x_msgs__msg__SignalStatus * lhs, const v2x_msgs__msg__SignalStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->sequence_number), &(rhs->sequence_number)))
  {
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // sig_status
  if (!v2x_msgs__msg__SignalStatusPackageList__are_equal(
      &(lhs->sig_status), &(rhs->sig_status)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegSignalStatus__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatus__copy(
  const v2x_msgs__msg__SignalStatus * input,
  v2x_msgs__msg__SignalStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->sequence_number), &(output->sequence_number)))
  {
    return false;
  }
  // id
  if (!v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // sig_status
  if (!v2x_msgs__msg__SignalStatusPackageList__copy(
      &(input->sig_status), &(output->sig_status)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegSignalStatus__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalStatus *
v2x_msgs__msg__SignalStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatus * msg = (v2x_msgs__msg__SignalStatus *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalStatus));
  bool success = v2x_msgs__msg__SignalStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalStatus__destroy(v2x_msgs__msg__SignalStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalStatus__Sequence__init(v2x_msgs__msg__SignalStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatus * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalStatus *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalStatus__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalStatus__Sequence__fini(v2x_msgs__msg__SignalStatus__Sequence * array)
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
      v2x_msgs__msg__SignalStatus__fini(&array->data[i]);
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

v2x_msgs__msg__SignalStatus__Sequence *
v2x_msgs__msg__SignalStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalStatus__Sequence * array = (v2x_msgs__msg__SignalStatus__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalStatus__Sequence__destroy(v2x_msgs__msg__SignalStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalStatus__Sequence__are_equal(const v2x_msgs__msg__SignalStatus__Sequence * lhs, const v2x_msgs__msg__SignalStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalStatus__Sequence__copy(
  const v2x_msgs__msg__SignalStatus__Sequence * input,
  v2x_msgs__msg__SignalStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalStatus * data =
      (v2x_msgs__msg__SignalStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
