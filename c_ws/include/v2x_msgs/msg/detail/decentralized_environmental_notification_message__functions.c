// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DecentralizedEnvironmentalNotificationMessage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/decentralized_environmental_notification_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `management`
#include "v2x_msgs/msg/detail/management_container__functions.h"
// Member `situation`
#include "v2x_msgs/msg/detail/situation_container__functions.h"
// Member `location`
#include "v2x_msgs/msg/detail/location_container__functions.h"
// Member `alacarte`
#include "v2x_msgs/msg/detail/alacarte_container__functions.h"

bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__init(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * msg)
{
  if (!msg) {
    return false;
  }
  // management
  if (!v2x_msgs__msg__ManagementContainer__init(&msg->management)) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(msg);
    return false;
  }
  // situation_present
  msg->situation_present = false;
  // situation
  if (!v2x_msgs__msg__SituationContainer__init(&msg->situation)) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(msg);
    return false;
  }
  // location_present
  msg->location_present = false;
  // location
  if (!v2x_msgs__msg__LocationContainer__init(&msg->location)) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(msg);
    return false;
  }
  // alacarte_present
  msg->alacarte_present = false;
  // alacarte
  if (!v2x_msgs__msg__AlacarteContainer__init(&msg->alacarte)) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * msg)
{
  if (!msg) {
    return;
  }
  // management
  v2x_msgs__msg__ManagementContainer__fini(&msg->management);
  // situation_present
  // situation
  v2x_msgs__msg__SituationContainer__fini(&msg->situation);
  // location_present
  // location
  v2x_msgs__msg__LocationContainer__fini(&msg->location);
  // alacarte_present
  // alacarte
  v2x_msgs__msg__AlacarteContainer__fini(&msg->alacarte);
}

bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__are_equal(const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * lhs, const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // management
  if (!v2x_msgs__msg__ManagementContainer__are_equal(
      &(lhs->management), &(rhs->management)))
  {
    return false;
  }
  // situation_present
  if (lhs->situation_present != rhs->situation_present) {
    return false;
  }
  // situation
  if (!v2x_msgs__msg__SituationContainer__are_equal(
      &(lhs->situation), &(rhs->situation)))
  {
    return false;
  }
  // location_present
  if (lhs->location_present != rhs->location_present) {
    return false;
  }
  // location
  if (!v2x_msgs__msg__LocationContainer__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // alacarte_present
  if (lhs->alacarte_present != rhs->alacarte_present) {
    return false;
  }
  // alacarte
  if (!v2x_msgs__msg__AlacarteContainer__are_equal(
      &(lhs->alacarte), &(rhs->alacarte)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__copy(
  const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * input,
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // management
  if (!v2x_msgs__msg__ManagementContainer__copy(
      &(input->management), &(output->management)))
  {
    return false;
  }
  // situation_present
  output->situation_present = input->situation_present;
  // situation
  if (!v2x_msgs__msg__SituationContainer__copy(
      &(input->situation), &(output->situation)))
  {
    return false;
  }
  // location_present
  output->location_present = input->location_present;
  // location
  if (!v2x_msgs__msg__LocationContainer__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // alacarte_present
  output->alacarte_present = input->alacarte_present;
  // alacarte
  if (!v2x_msgs__msg__AlacarteContainer__copy(
      &(input->alacarte), &(output->alacarte)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage *
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * msg = (v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage *)allocator.allocate(sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage));
  bool success = v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__destroy(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__init(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(&data[i - 1]);
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
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__fini(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * array)
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
      v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(&array->data[i]);
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

v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence *
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * array = (v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__destroy(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__are_equal(const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * lhs, const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence__copy(
  const v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * input,
  v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage * data =
      (v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DecentralizedEnvironmentalNotificationMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
