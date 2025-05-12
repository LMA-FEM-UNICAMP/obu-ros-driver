// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/position3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos_lat`
#include "v2x_msgs/msg/detail/latitude__functions.h"
// Member `pos_long`
#include "v2x_msgs/msg/detail/longitude__functions.h"
// Member `elevation`
#include "v2x_msgs/msg/detail/elevation__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_position3_d__functions.h"

bool
v2x_msgs__msg__Position3D__init(v2x_msgs__msg__Position3D * msg)
{
  if (!msg) {
    return false;
  }
  // pos_lat
  if (!v2x_msgs__msg__Latitude__init(&msg->pos_lat)) {
    v2x_msgs__msg__Position3D__fini(msg);
    return false;
  }
  // pos_long
  if (!v2x_msgs__msg__Longitude__init(&msg->pos_long)) {
    v2x_msgs__msg__Position3D__fini(msg);
    return false;
  }
  // elevation_present
  msg->elevation_present = false;
  // elevation
  if (!v2x_msgs__msg__Elevation__init(&msg->elevation)) {
    v2x_msgs__msg__Position3D__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegPosition3D__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__Position3D__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__Position3D__fini(v2x_msgs__msg__Position3D * msg)
{
  if (!msg) {
    return;
  }
  // pos_lat
  v2x_msgs__msg__Latitude__fini(&msg->pos_lat);
  // pos_long
  v2x_msgs__msg__Longitude__fini(&msg->pos_long);
  // elevation_present
  // elevation
  v2x_msgs__msg__Elevation__fini(&msg->elevation);
  // regional_present
  // regional
  v2x_msgs__msg__RegPosition3D__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__Position3D__are_equal(const v2x_msgs__msg__Position3D * lhs, const v2x_msgs__msg__Position3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_lat
  if (!v2x_msgs__msg__Latitude__are_equal(
      &(lhs->pos_lat), &(rhs->pos_lat)))
  {
    return false;
  }
  // pos_long
  if (!v2x_msgs__msg__Longitude__are_equal(
      &(lhs->pos_long), &(rhs->pos_long)))
  {
    return false;
  }
  // elevation_present
  if (lhs->elevation_present != rhs->elevation_present) {
    return false;
  }
  // elevation
  if (!v2x_msgs__msg__Elevation__are_equal(
      &(lhs->elevation), &(rhs->elevation)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegPosition3D__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__Position3D__copy(
  const v2x_msgs__msg__Position3D * input,
  v2x_msgs__msg__Position3D * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_lat
  if (!v2x_msgs__msg__Latitude__copy(
      &(input->pos_lat), &(output->pos_lat)))
  {
    return false;
  }
  // pos_long
  if (!v2x_msgs__msg__Longitude__copy(
      &(input->pos_long), &(output->pos_long)))
  {
    return false;
  }
  // elevation_present
  output->elevation_present = input->elevation_present;
  // elevation
  if (!v2x_msgs__msg__Elevation__copy(
      &(input->elevation), &(output->elevation)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegPosition3D__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__Position3D *
v2x_msgs__msg__Position3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Position3D * msg = (v2x_msgs__msg__Position3D *)allocator.allocate(sizeof(v2x_msgs__msg__Position3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__Position3D));
  bool success = v2x_msgs__msg__Position3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__Position3D__destroy(v2x_msgs__msg__Position3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__Position3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__Position3D__Sequence__init(v2x_msgs__msg__Position3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Position3D * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__Position3D *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__Position3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__Position3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__Position3D__fini(&data[i - 1]);
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
v2x_msgs__msg__Position3D__Sequence__fini(v2x_msgs__msg__Position3D__Sequence * array)
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
      v2x_msgs__msg__Position3D__fini(&array->data[i]);
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

v2x_msgs__msg__Position3D__Sequence *
v2x_msgs__msg__Position3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__Position3D__Sequence * array = (v2x_msgs__msg__Position3D__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__Position3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__Position3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__Position3D__Sequence__destroy(v2x_msgs__msg__Position3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__Position3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__Position3D__Sequence__are_equal(const v2x_msgs__msg__Position3D__Sequence * lhs, const v2x_msgs__msg__Position3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__Position3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__Position3D__Sequence__copy(
  const v2x_msgs__msg__Position3D__Sequence * input,
  v2x_msgs__msg__Position3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__Position3D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__Position3D * data =
      (v2x_msgs__msg__Position3D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__Position3D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__Position3D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__Position3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
