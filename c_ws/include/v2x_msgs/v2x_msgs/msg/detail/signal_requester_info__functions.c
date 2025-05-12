// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/signal_requester_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "v2x_msgs/msg/detail/vehicle_id__functions.h"
// Member `request`
#include "v2x_msgs/msg/detail/request_id__functions.h"
// Member `sequence_number`
#include "v2x_msgs/msg/detail/msg_count__functions.h"
// Member `role`
#include "v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
// Member `type_data`
#include "v2x_msgs/msg/detail/requestor_type__functions.h"

bool
v2x_msgs__msg__SignalRequesterInfo__init(v2x_msgs__msg__SignalRequesterInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__init(&msg->id)) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  // request
  if (!v2x_msgs__msg__RequestID__init(&msg->request)) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__init(&msg->sequence_number)) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  // role_present
  msg->role_present = false;
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__init(&msg->role)) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  // type_data_present
  msg->type_data_present = false;
  // type_data
  if (!v2x_msgs__msg__RequestorType__init(&msg->type_data)) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SignalRequesterInfo__fini(v2x_msgs__msg__SignalRequesterInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  v2x_msgs__msg__VehicleID__fini(&msg->id);
  // request
  v2x_msgs__msg__RequestID__fini(&msg->request);
  // sequence_number
  v2x_msgs__msg__MsgCount__fini(&msg->sequence_number);
  // role_present
  // role
  v2x_msgs__msg__BasicVehicleRole__fini(&msg->role);
  // type_data_present
  // type_data
  v2x_msgs__msg__RequestorType__fini(&msg->type_data);
}

bool
v2x_msgs__msg__SignalRequesterInfo__are_equal(const v2x_msgs__msg__SignalRequesterInfo * lhs, const v2x_msgs__msg__SignalRequesterInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // request
  if (!v2x_msgs__msg__RequestID__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->sequence_number), &(rhs->sequence_number)))
  {
    return false;
  }
  // role_present
  if (lhs->role_present != rhs->role_present) {
    return false;
  }
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // type_data_present
  if (lhs->type_data_present != rhs->type_data_present) {
    return false;
  }
  // type_data
  if (!v2x_msgs__msg__RequestorType__are_equal(
      &(lhs->type_data), &(rhs->type_data)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequesterInfo__copy(
  const v2x_msgs__msg__SignalRequesterInfo * input,
  v2x_msgs__msg__SignalRequesterInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // request
  if (!v2x_msgs__msg__RequestID__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // sequence_number
  if (!v2x_msgs__msg__MsgCount__copy(
      &(input->sequence_number), &(output->sequence_number)))
  {
    return false;
  }
  // role_present
  output->role_present = input->role_present;
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // type_data_present
  output->type_data_present = input->type_data_present;
  // type_data
  if (!v2x_msgs__msg__RequestorType__copy(
      &(input->type_data), &(output->type_data)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SignalRequesterInfo *
v2x_msgs__msg__SignalRequesterInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequesterInfo * msg = (v2x_msgs__msg__SignalRequesterInfo *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequesterInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SignalRequesterInfo));
  bool success = v2x_msgs__msg__SignalRequesterInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SignalRequesterInfo__destroy(v2x_msgs__msg__SignalRequesterInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SignalRequesterInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SignalRequesterInfo__Sequence__init(v2x_msgs__msg__SignalRequesterInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequesterInfo * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SignalRequesterInfo *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SignalRequesterInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SignalRequesterInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SignalRequesterInfo__fini(&data[i - 1]);
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
v2x_msgs__msg__SignalRequesterInfo__Sequence__fini(v2x_msgs__msg__SignalRequesterInfo__Sequence * array)
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
      v2x_msgs__msg__SignalRequesterInfo__fini(&array->data[i]);
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

v2x_msgs__msg__SignalRequesterInfo__Sequence *
v2x_msgs__msg__SignalRequesterInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SignalRequesterInfo__Sequence * array = (v2x_msgs__msg__SignalRequesterInfo__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SignalRequesterInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SignalRequesterInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SignalRequesterInfo__Sequence__destroy(v2x_msgs__msg__SignalRequesterInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SignalRequesterInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SignalRequesterInfo__Sequence__are_equal(const v2x_msgs__msg__SignalRequesterInfo__Sequence * lhs, const v2x_msgs__msg__SignalRequesterInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SignalRequesterInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SignalRequesterInfo__Sequence__copy(
  const v2x_msgs__msg__SignalRequesterInfo__Sequence * input,
  v2x_msgs__msg__SignalRequesterInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SignalRequesterInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SignalRequesterInfo * data =
      (v2x_msgs__msg__SignalRequesterInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SignalRequesterInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SignalRequesterInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SignalRequesterInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
