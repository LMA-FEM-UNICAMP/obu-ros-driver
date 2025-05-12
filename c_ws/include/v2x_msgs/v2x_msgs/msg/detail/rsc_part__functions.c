// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RscPart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rsc_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection_zone_ids`
// Member `relevance_zone_ids`
#include "v2x_msgs/msg/detail/zone_ids__functions.h"
// Member `direction`
#include "v2x_msgs/msg/detail/direction__functions.h"
// Member `road_surface_static_characteristics`
#include "v2x_msgs/msg/detail/road_surface_static_characteristics__functions.h"
// Member `road_surface_dynamic_characteristics`
#include "v2x_msgs/msg/detail/road_surface_dynamic_characteristics__functions.h"

bool
v2x_msgs__msg__RscPart__init(v2x_msgs__msg__RscPart * msg)
{
  if (!msg) {
    return false;
  }
  // detection_zone_ids_present
  msg->detection_zone_ids_present = false;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->detection_zone_ids)) {
    v2x_msgs__msg__RscPart__fini(msg);
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->relevance_zone_ids)) {
    v2x_msgs__msg__RscPart__fini(msg);
    return false;
  }
  // direction_present
  msg->direction_present = false;
  // direction
  if (!v2x_msgs__msg__Direction__init(&msg->direction)) {
    v2x_msgs__msg__RscPart__fini(msg);
    return false;
  }
  // road_surface_static_characteristics_present
  msg->road_surface_static_characteristics_present = false;
  // road_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__init(&msg->road_surface_static_characteristics)) {
    v2x_msgs__msg__RscPart__fini(msg);
    return false;
  }
  // road_surface_dynamic_characteristics_present
  msg->road_surface_dynamic_characteristics_present = false;
  // road_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__init(&msg->road_surface_dynamic_characteristics)) {
    v2x_msgs__msg__RscPart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RscPart__fini(v2x_msgs__msg__RscPart * msg)
{
  if (!msg) {
    return;
  }
  // detection_zone_ids_present
  // detection_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->detection_zone_ids);
  // relevance_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->relevance_zone_ids);
  // direction_present
  // direction
  v2x_msgs__msg__Direction__fini(&msg->direction);
  // road_surface_static_characteristics_present
  // road_surface_static_characteristics
  v2x_msgs__msg__RoadSurfaceStaticCharacteristics__fini(&msg->road_surface_static_characteristics);
  // road_surface_dynamic_characteristics_present
  // road_surface_dynamic_characteristics
  v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__fini(&msg->road_surface_dynamic_characteristics);
}

bool
v2x_msgs__msg__RscPart__are_equal(const v2x_msgs__msg__RscPart * lhs, const v2x_msgs__msg__RscPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection_zone_ids_present
  if (lhs->detection_zone_ids_present != rhs->detection_zone_ids_present) {
    return false;
  }
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->detection_zone_ids), &(rhs->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->relevance_zone_ids), &(rhs->relevance_zone_ids)))
  {
    return false;
  }
  // direction_present
  if (lhs->direction_present != rhs->direction_present) {
    return false;
  }
  // direction
  if (!v2x_msgs__msg__Direction__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // road_surface_static_characteristics_present
  if (lhs->road_surface_static_characteristics_present != rhs->road_surface_static_characteristics_present) {
    return false;
  }
  // road_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__are_equal(
      &(lhs->road_surface_static_characteristics), &(rhs->road_surface_static_characteristics)))
  {
    return false;
  }
  // road_surface_dynamic_characteristics_present
  if (lhs->road_surface_dynamic_characteristics_present != rhs->road_surface_dynamic_characteristics_present) {
    return false;
  }
  // road_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__are_equal(
      &(lhs->road_surface_dynamic_characteristics), &(rhs->road_surface_dynamic_characteristics)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RscPart__copy(
  const v2x_msgs__msg__RscPart * input,
  v2x_msgs__msg__RscPart * output)
{
  if (!input || !output) {
    return false;
  }
  // detection_zone_ids_present
  output->detection_zone_ids_present = input->detection_zone_ids_present;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->detection_zone_ids), &(output->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->relevance_zone_ids), &(output->relevance_zone_ids)))
  {
    return false;
  }
  // direction_present
  output->direction_present = input->direction_present;
  // direction
  if (!v2x_msgs__msg__Direction__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // road_surface_static_characteristics_present
  output->road_surface_static_characteristics_present = input->road_surface_static_characteristics_present;
  // road_surface_static_characteristics
  if (!v2x_msgs__msg__RoadSurfaceStaticCharacteristics__copy(
      &(input->road_surface_static_characteristics), &(output->road_surface_static_characteristics)))
  {
    return false;
  }
  // road_surface_dynamic_characteristics_present
  output->road_surface_dynamic_characteristics_present = input->road_surface_dynamic_characteristics_present;
  // road_surface_dynamic_characteristics
  if (!v2x_msgs__msg__RoadSurfaceDynamicCharacteristics__copy(
      &(input->road_surface_dynamic_characteristics), &(output->road_surface_dynamic_characteristics)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RscPart *
v2x_msgs__msg__RscPart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RscPart * msg = (v2x_msgs__msg__RscPart *)allocator.allocate(sizeof(v2x_msgs__msg__RscPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RscPart));
  bool success = v2x_msgs__msg__RscPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RscPart__destroy(v2x_msgs__msg__RscPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RscPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RscPart__Sequence__init(v2x_msgs__msg__RscPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RscPart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RscPart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RscPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RscPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RscPart__fini(&data[i - 1]);
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
v2x_msgs__msg__RscPart__Sequence__fini(v2x_msgs__msg__RscPart__Sequence * array)
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
      v2x_msgs__msg__RscPart__fini(&array->data[i]);
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

v2x_msgs__msg__RscPart__Sequence *
v2x_msgs__msg__RscPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RscPart__Sequence * array = (v2x_msgs__msg__RscPart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RscPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RscPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RscPart__Sequence__destroy(v2x_msgs__msg__RscPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RscPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RscPart__Sequence__are_equal(const v2x_msgs__msg__RscPart__Sequence * lhs, const v2x_msgs__msg__RscPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RscPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RscPart__Sequence__copy(
  const v2x_msgs__msg__RscPart__Sequence * input,
  v2x_msgs__msg__RscPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RscPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RscPart * data =
      (v2x_msgs__msg__RscPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RscPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RscPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RscPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
