// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RccPart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rcc_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `relevance_zone_ids`
#include "v2x_msgs/msg/detail/zone_ids__functions.h"
// Member `road_type`
#include "v2x_msgs/msg/detail/road_type__functions.h"
// Member `lane_configuration`
#include "v2x_msgs/msg/detail/lane_configuration__functions.h"

bool
v2x_msgs__msg__RccPart__init(v2x_msgs__msg__RccPart * msg)
{
  if (!msg) {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->relevance_zone_ids)) {
    v2x_msgs__msg__RccPart__fini(msg);
    return false;
  }
  // road_type
  if (!v2x_msgs__msg__RoadType__init(&msg->road_type)) {
    v2x_msgs__msg__RccPart__fini(msg);
    return false;
  }
  // lane_configuration
  if (!v2x_msgs__msg__LaneConfiguration__init(&msg->lane_configuration)) {
    v2x_msgs__msg__RccPart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RccPart__fini(v2x_msgs__msg__RccPart * msg)
{
  if (!msg) {
    return;
  }
  // relevance_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->relevance_zone_ids);
  // road_type
  v2x_msgs__msg__RoadType__fini(&msg->road_type);
  // lane_configuration
  v2x_msgs__msg__LaneConfiguration__fini(&msg->lane_configuration);
}

bool
v2x_msgs__msg__RccPart__are_equal(const v2x_msgs__msg__RccPart * lhs, const v2x_msgs__msg__RccPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->relevance_zone_ids), &(rhs->relevance_zone_ids)))
  {
    return false;
  }
  // road_type
  if (!v2x_msgs__msg__RoadType__are_equal(
      &(lhs->road_type), &(rhs->road_type)))
  {
    return false;
  }
  // lane_configuration
  if (!v2x_msgs__msg__LaneConfiguration__are_equal(
      &(lhs->lane_configuration), &(rhs->lane_configuration)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RccPart__copy(
  const v2x_msgs__msg__RccPart * input,
  v2x_msgs__msg__RccPart * output)
{
  if (!input || !output) {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->relevance_zone_ids), &(output->relevance_zone_ids)))
  {
    return false;
  }
  // road_type
  if (!v2x_msgs__msg__RoadType__copy(
      &(input->road_type), &(output->road_type)))
  {
    return false;
  }
  // lane_configuration
  if (!v2x_msgs__msg__LaneConfiguration__copy(
      &(input->lane_configuration), &(output->lane_configuration)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RccPart *
v2x_msgs__msg__RccPart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RccPart * msg = (v2x_msgs__msg__RccPart *)allocator.allocate(sizeof(v2x_msgs__msg__RccPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RccPart));
  bool success = v2x_msgs__msg__RccPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RccPart__destroy(v2x_msgs__msg__RccPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RccPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RccPart__Sequence__init(v2x_msgs__msg__RccPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RccPart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RccPart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RccPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RccPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RccPart__fini(&data[i - 1]);
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
v2x_msgs__msg__RccPart__Sequence__fini(v2x_msgs__msg__RccPart__Sequence * array)
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
      v2x_msgs__msg__RccPart__fini(&array->data[i]);
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

v2x_msgs__msg__RccPart__Sequence *
v2x_msgs__msg__RccPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RccPart__Sequence * array = (v2x_msgs__msg__RccPart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RccPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RccPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RccPart__Sequence__destroy(v2x_msgs__msg__RccPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RccPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RccPart__Sequence__are_equal(const v2x_msgs__msg__RccPart__Sequence * lhs, const v2x_msgs__msg__RccPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RccPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RccPart__Sequence__copy(
  const v2x_msgs__msg__RccPart__Sequence * input,
  v2x_msgs__msg__RccPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RccPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RccPart * data =
      (v2x_msgs__msg__RccPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RccPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RccPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RccPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
