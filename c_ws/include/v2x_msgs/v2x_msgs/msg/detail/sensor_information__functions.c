// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/sensor_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_id`
#include "v2x_msgs/msg/detail/identifier__functions.h"
// Member `type`
#include "v2x_msgs/msg/detail/sensor_type__functions.h"
// Member `detection_area`
#include "v2x_msgs/msg/detail/detection_area__functions.h"
// Member `free_space_confidence`
#include "v2x_msgs/msg/detail/free_space_confidence__functions.h"

bool
v2x_msgs__msg__SensorInformation__init(v2x_msgs__msg__SensorInformation * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_id
  if (!v2x_msgs__msg__Identifier__init(&msg->sensor_id)) {
    v2x_msgs__msg__SensorInformation__fini(msg);
    return false;
  }
  // type
  if (!v2x_msgs__msg__SensorType__init(&msg->type)) {
    v2x_msgs__msg__SensorInformation__fini(msg);
    return false;
  }
  // detection_area
  if (!v2x_msgs__msg__DetectionArea__init(&msg->detection_area)) {
    v2x_msgs__msg__SensorInformation__fini(msg);
    return false;
  }
  // free_space_confidence_present
  msg->free_space_confidence_present = false;
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__init(&msg->free_space_confidence)) {
    v2x_msgs__msg__SensorInformation__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SensorInformation__fini(v2x_msgs__msg__SensorInformation * msg)
{
  if (!msg) {
    return;
  }
  // sensor_id
  v2x_msgs__msg__Identifier__fini(&msg->sensor_id);
  // type
  v2x_msgs__msg__SensorType__fini(&msg->type);
  // detection_area
  v2x_msgs__msg__DetectionArea__fini(&msg->detection_area);
  // free_space_confidence_present
  // free_space_confidence
  v2x_msgs__msg__FreeSpaceConfidence__fini(&msg->free_space_confidence);
}

bool
v2x_msgs__msg__SensorInformation__are_equal(const v2x_msgs__msg__SensorInformation * lhs, const v2x_msgs__msg__SensorInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_id
  if (!v2x_msgs__msg__Identifier__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  // type
  if (!v2x_msgs__msg__SensorType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // detection_area
  if (!v2x_msgs__msg__DetectionArea__are_equal(
      &(lhs->detection_area), &(rhs->detection_area)))
  {
    return false;
  }
  // free_space_confidence_present
  if (lhs->free_space_confidence_present != rhs->free_space_confidence_present) {
    return false;
  }
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__are_equal(
      &(lhs->free_space_confidence), &(rhs->free_space_confidence)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SensorInformation__copy(
  const v2x_msgs__msg__SensorInformation * input,
  v2x_msgs__msg__SensorInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_id
  if (!v2x_msgs__msg__Identifier__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  // type
  if (!v2x_msgs__msg__SensorType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // detection_area
  if (!v2x_msgs__msg__DetectionArea__copy(
      &(input->detection_area), &(output->detection_area)))
  {
    return false;
  }
  // free_space_confidence_present
  output->free_space_confidence_present = input->free_space_confidence_present;
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__copy(
      &(input->free_space_confidence), &(output->free_space_confidence)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SensorInformation *
v2x_msgs__msg__SensorInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SensorInformation * msg = (v2x_msgs__msg__SensorInformation *)allocator.allocate(sizeof(v2x_msgs__msg__SensorInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SensorInformation));
  bool success = v2x_msgs__msg__SensorInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SensorInformation__destroy(v2x_msgs__msg__SensorInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SensorInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SensorInformation__Sequence__init(v2x_msgs__msg__SensorInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SensorInformation * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SensorInformation *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SensorInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SensorInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SensorInformation__fini(&data[i - 1]);
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
v2x_msgs__msg__SensorInformation__Sequence__fini(v2x_msgs__msg__SensorInformation__Sequence * array)
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
      v2x_msgs__msg__SensorInformation__fini(&array->data[i]);
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

v2x_msgs__msg__SensorInformation__Sequence *
v2x_msgs__msg__SensorInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SensorInformation__Sequence * array = (v2x_msgs__msg__SensorInformation__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SensorInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SensorInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SensorInformation__Sequence__destroy(v2x_msgs__msg__SensorInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SensorInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SensorInformation__Sequence__are_equal(const v2x_msgs__msg__SensorInformation__Sequence * lhs, const v2x_msgs__msg__SensorInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SensorInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SensorInformation__Sequence__copy(
  const v2x_msgs__msg__SensorInformation__Sequence * input,
  v2x_msgs__msg__SensorInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SensorInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SensorInformation * data =
      (v2x_msgs__msg__SensorInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SensorInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SensorInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SensorInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
