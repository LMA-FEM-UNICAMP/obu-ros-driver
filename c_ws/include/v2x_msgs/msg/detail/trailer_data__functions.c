// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/trailer_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ref_point_id`
#include "v2x_msgs/msg/detail/ref_point_id__functions.h"
// Member `hitch_point_offset`
#include "v2x_msgs/msg/detail/hitch_point_offset__functions.h"
// Member `front_overhang`
#include "v2x_msgs/msg/detail/front_overhang__functions.h"
// Member `rear_overhang`
#include "v2x_msgs/msg/detail/rear_overhang__functions.h"
// Member `trailer_width`
#include "v2x_msgs/msg/detail/vehicle_width__functions.h"
// Member `hitch_angle`
#include "v2x_msgs/msg/detail/cartesian_angle__functions.h"

bool
v2x_msgs__msg__TrailerData__init(v2x_msgs__msg__TrailerData * msg)
{
  if (!msg) {
    return false;
  }
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__init(&msg->ref_point_id)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // hitch_point_offset
  if (!v2x_msgs__msg__HitchPointOffset__init(&msg->hitch_point_offset)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // front_overhang
  if (!v2x_msgs__msg__FrontOverhang__init(&msg->front_overhang)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // rear_overhang
  if (!v2x_msgs__msg__RearOverhang__init(&msg->rear_overhang)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // trailer_width_present
  msg->trailer_width_present = false;
  // trailer_width
  if (!v2x_msgs__msg__VehicleWidth__init(&msg->trailer_width)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // hitch_angle_present
  msg->hitch_angle_present = false;
  // hitch_angle
  if (!v2x_msgs__msg__CartesianAngle__init(&msg->hitch_angle)) {
    v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TrailerData__fini(v2x_msgs__msg__TrailerData * msg)
{
  if (!msg) {
    return;
  }
  // ref_point_id
  v2x_msgs__msg__RefPointId__fini(&msg->ref_point_id);
  // hitch_point_offset
  v2x_msgs__msg__HitchPointOffset__fini(&msg->hitch_point_offset);
  // front_overhang
  v2x_msgs__msg__FrontOverhang__fini(&msg->front_overhang);
  // rear_overhang
  v2x_msgs__msg__RearOverhang__fini(&msg->rear_overhang);
  // trailer_width_present
  // trailer_width
  v2x_msgs__msg__VehicleWidth__fini(&msg->trailer_width);
  // hitch_angle_present
  // hitch_angle
  v2x_msgs__msg__CartesianAngle__fini(&msg->hitch_angle);
}

bool
v2x_msgs__msg__TrailerData__are_equal(const v2x_msgs__msg__TrailerData * lhs, const v2x_msgs__msg__TrailerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__are_equal(
      &(lhs->ref_point_id), &(rhs->ref_point_id)))
  {
    return false;
  }
  // hitch_point_offset
  if (!v2x_msgs__msg__HitchPointOffset__are_equal(
      &(lhs->hitch_point_offset), &(rhs->hitch_point_offset)))
  {
    return false;
  }
  // front_overhang
  if (!v2x_msgs__msg__FrontOverhang__are_equal(
      &(lhs->front_overhang), &(rhs->front_overhang)))
  {
    return false;
  }
  // rear_overhang
  if (!v2x_msgs__msg__RearOverhang__are_equal(
      &(lhs->rear_overhang), &(rhs->rear_overhang)))
  {
    return false;
  }
  // trailer_width_present
  if (lhs->trailer_width_present != rhs->trailer_width_present) {
    return false;
  }
  // trailer_width
  if (!v2x_msgs__msg__VehicleWidth__are_equal(
      &(lhs->trailer_width), &(rhs->trailer_width)))
  {
    return false;
  }
  // hitch_angle_present
  if (lhs->hitch_angle_present != rhs->hitch_angle_present) {
    return false;
  }
  // hitch_angle
  if (!v2x_msgs__msg__CartesianAngle__are_equal(
      &(lhs->hitch_angle), &(rhs->hitch_angle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TrailerData__copy(
  const v2x_msgs__msg__TrailerData * input,
  v2x_msgs__msg__TrailerData * output)
{
  if (!input || !output) {
    return false;
  }
  // ref_point_id
  if (!v2x_msgs__msg__RefPointId__copy(
      &(input->ref_point_id), &(output->ref_point_id)))
  {
    return false;
  }
  // hitch_point_offset
  if (!v2x_msgs__msg__HitchPointOffset__copy(
      &(input->hitch_point_offset), &(output->hitch_point_offset)))
  {
    return false;
  }
  // front_overhang
  if (!v2x_msgs__msg__FrontOverhang__copy(
      &(input->front_overhang), &(output->front_overhang)))
  {
    return false;
  }
  // rear_overhang
  if (!v2x_msgs__msg__RearOverhang__copy(
      &(input->rear_overhang), &(output->rear_overhang)))
  {
    return false;
  }
  // trailer_width_present
  output->trailer_width_present = input->trailer_width_present;
  // trailer_width
  if (!v2x_msgs__msg__VehicleWidth__copy(
      &(input->trailer_width), &(output->trailer_width)))
  {
    return false;
  }
  // hitch_angle_present
  output->hitch_angle_present = input->hitch_angle_present;
  // hitch_angle
  if (!v2x_msgs__msg__CartesianAngle__copy(
      &(input->hitch_angle), &(output->hitch_angle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__TrailerData *
v2x_msgs__msg__TrailerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerData * msg = (v2x_msgs__msg__TrailerData *)allocator.allocate(sizeof(v2x_msgs__msg__TrailerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TrailerData));
  bool success = v2x_msgs__msg__TrailerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TrailerData__destroy(v2x_msgs__msg__TrailerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TrailerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TrailerData__Sequence__init(v2x_msgs__msg__TrailerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerData * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TrailerData *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TrailerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TrailerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TrailerData__fini(&data[i - 1]);
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
v2x_msgs__msg__TrailerData__Sequence__fini(v2x_msgs__msg__TrailerData__Sequence * array)
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
      v2x_msgs__msg__TrailerData__fini(&array->data[i]);
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

v2x_msgs__msg__TrailerData__Sequence *
v2x_msgs__msg__TrailerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TrailerData__Sequence * array = (v2x_msgs__msg__TrailerData__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TrailerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TrailerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TrailerData__Sequence__destroy(v2x_msgs__msg__TrailerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TrailerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TrailerData__Sequence__are_equal(const v2x_msgs__msg__TrailerData__Sequence * lhs, const v2x_msgs__msg__TrailerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TrailerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TrailerData__Sequence__copy(
  const v2x_msgs__msg__TrailerData__Sequence * input,
  v2x_msgs__msg__TrailerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TrailerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TrailerData * data =
      (v2x_msgs__msg__TrailerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TrailerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TrailerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TrailerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
