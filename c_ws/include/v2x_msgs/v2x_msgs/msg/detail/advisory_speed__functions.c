// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/advisory_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "v2x_msgs/msg/detail/advisory_speed_type__functions.h"
// Member `speed`
#include "v2x_msgs/msg/detail/speed_advice__functions.h"
// Member `confidence`
#include "v2x_msgs/msg/detail/speed_confidence_dsrc__functions.h"
// Member `distance`
#include "v2x_msgs/msg/detail/zone_length__functions.h"
// Member `rest_class`
#include "v2x_msgs/msg/detail/restriction_class_id__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_advisory_speed__functions.h"

bool
v2x_msgs__msg__AdvisorySpeed__init(v2x_msgs__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!v2x_msgs__msg__AdvisorySpeedType__init(&msg->type)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // speed_present
  msg->speed_present = false;
  // speed
  if (!v2x_msgs__msg__SpeedAdvice__init(&msg->speed)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // confidence_present
  msg->confidence_present = false;
  // confidence
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__init(&msg->confidence)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // distance_present
  msg->distance_present = false;
  // distance
  if (!v2x_msgs__msg__ZoneLength__init(&msg->distance)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // class_present
  msg->class_present = false;
  // rest_class
  if (!v2x_msgs__msg__RestrictionClassID__init(&msg->rest_class)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegAdvisorySpeed__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AdvisorySpeed__fini(v2x_msgs__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return;
  }
  // type
  v2x_msgs__msg__AdvisorySpeedType__fini(&msg->type);
  // speed_present
  // speed
  v2x_msgs__msg__SpeedAdvice__fini(&msg->speed);
  // confidence_present
  // confidence
  v2x_msgs__msg__SpeedConfidenceDSRC__fini(&msg->confidence);
  // distance_present
  // distance
  v2x_msgs__msg__ZoneLength__fini(&msg->distance);
  // class_present
  // rest_class
  v2x_msgs__msg__RestrictionClassID__fini(&msg->rest_class);
  // regional_present
  // regional
  v2x_msgs__msg__RegAdvisorySpeed__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__AdvisorySpeed__are_equal(const v2x_msgs__msg__AdvisorySpeed * lhs, const v2x_msgs__msg__AdvisorySpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!v2x_msgs__msg__AdvisorySpeedType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // speed_present
  if (lhs->speed_present != rhs->speed_present) {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__SpeedAdvice__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // confidence_present
  if (lhs->confidence_present != rhs->confidence_present) {
    return false;
  }
  // confidence
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  // distance_present
  if (lhs->distance_present != rhs->distance_present) {
    return false;
  }
  // distance
  if (!v2x_msgs__msg__ZoneLength__are_equal(
      &(lhs->distance), &(rhs->distance)))
  {
    return false;
  }
  // class_present
  if (lhs->class_present != rhs->class_present) {
    return false;
  }
  // rest_class
  if (!v2x_msgs__msg__RestrictionClassID__are_equal(
      &(lhs->rest_class), &(rhs->rest_class)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegAdvisorySpeed__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AdvisorySpeed__copy(
  const v2x_msgs__msg__AdvisorySpeed * input,
  v2x_msgs__msg__AdvisorySpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!v2x_msgs__msg__AdvisorySpeedType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // speed_present
  output->speed_present = input->speed_present;
  // speed
  if (!v2x_msgs__msg__SpeedAdvice__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // confidence_present
  output->confidence_present = input->confidence_present;
  // confidence
  if (!v2x_msgs__msg__SpeedConfidenceDSRC__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  // distance_present
  output->distance_present = input->distance_present;
  // distance
  if (!v2x_msgs__msg__ZoneLength__copy(
      &(input->distance), &(output->distance)))
  {
    return false;
  }
  // class_present
  output->class_present = input->class_present;
  // rest_class
  if (!v2x_msgs__msg__RestrictionClassID__copy(
      &(input->rest_class), &(output->rest_class)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegAdvisorySpeed__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AdvisorySpeed *
v2x_msgs__msg__AdvisorySpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AdvisorySpeed * msg = (v2x_msgs__msg__AdvisorySpeed *)allocator.allocate(sizeof(v2x_msgs__msg__AdvisorySpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AdvisorySpeed));
  bool success = v2x_msgs__msg__AdvisorySpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AdvisorySpeed__destroy(v2x_msgs__msg__AdvisorySpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AdvisorySpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AdvisorySpeed__Sequence__init(v2x_msgs__msg__AdvisorySpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AdvisorySpeed * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AdvisorySpeed *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AdvisorySpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AdvisorySpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AdvisorySpeed__fini(&data[i - 1]);
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
v2x_msgs__msg__AdvisorySpeed__Sequence__fini(v2x_msgs__msg__AdvisorySpeed__Sequence * array)
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
      v2x_msgs__msg__AdvisorySpeed__fini(&array->data[i]);
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

v2x_msgs__msg__AdvisorySpeed__Sequence *
v2x_msgs__msg__AdvisorySpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AdvisorySpeed__Sequence * array = (v2x_msgs__msg__AdvisorySpeed__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AdvisorySpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AdvisorySpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AdvisorySpeed__Sequence__destroy(v2x_msgs__msg__AdvisorySpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AdvisorySpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AdvisorySpeed__Sequence__are_equal(const v2x_msgs__msg__AdvisorySpeed__Sequence * lhs, const v2x_msgs__msg__AdvisorySpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AdvisorySpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AdvisorySpeed__Sequence__copy(
  const v2x_msgs__msg__AdvisorySpeed__Sequence * input,
  v2x_msgs__msg__AdvisorySpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AdvisorySpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AdvisorySpeed * data =
      (v2x_msgs__msg__AdvisorySpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AdvisorySpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AdvisorySpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AdvisorySpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
