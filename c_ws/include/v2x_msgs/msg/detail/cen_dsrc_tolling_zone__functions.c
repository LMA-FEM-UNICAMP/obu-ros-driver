// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CenDsrcTollingZone.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `protected_zone_latitude`
#include "v2x_msgs/msg/detail/latitude__functions.h"
// Member `protected_zone_longitude`
#include "v2x_msgs/msg/detail/longitude__functions.h"
// Member `cen_dsrc_tolling_zone_id`
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone_id__functions.h"

bool
v2x_msgs__msg__CenDsrcTollingZone__init(v2x_msgs__msg__CenDsrcTollingZone * msg)
{
  if (!msg) {
    return false;
  }
  // protected_zone_latitude
  if (!v2x_msgs__msg__Latitude__init(&msg->protected_zone_latitude)) {
    v2x_msgs__msg__CenDsrcTollingZone__fini(msg);
    return false;
  }
  // protected_zone_longitude
  if (!v2x_msgs__msg__Longitude__init(&msg->protected_zone_longitude)) {
    v2x_msgs__msg__CenDsrcTollingZone__fini(msg);
    return false;
  }
  // cen_dsrc_tolling_zone_id_present
  msg->cen_dsrc_tolling_zone_id_present = false;
  // cen_dsrc_tolling_zone_id
  if (!v2x_msgs__msg__CenDsrcTollingZoneID__init(&msg->cen_dsrc_tolling_zone_id)) {
    v2x_msgs__msg__CenDsrcTollingZone__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CenDsrcTollingZone__fini(v2x_msgs__msg__CenDsrcTollingZone * msg)
{
  if (!msg) {
    return;
  }
  // protected_zone_latitude
  v2x_msgs__msg__Latitude__fini(&msg->protected_zone_latitude);
  // protected_zone_longitude
  v2x_msgs__msg__Longitude__fini(&msg->protected_zone_longitude);
  // cen_dsrc_tolling_zone_id_present
  // cen_dsrc_tolling_zone_id
  v2x_msgs__msg__CenDsrcTollingZoneID__fini(&msg->cen_dsrc_tolling_zone_id);
}

bool
v2x_msgs__msg__CenDsrcTollingZone__are_equal(const v2x_msgs__msg__CenDsrcTollingZone * lhs, const v2x_msgs__msg__CenDsrcTollingZone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // protected_zone_latitude
  if (!v2x_msgs__msg__Latitude__are_equal(
      &(lhs->protected_zone_latitude), &(rhs->protected_zone_latitude)))
  {
    return false;
  }
  // protected_zone_longitude
  if (!v2x_msgs__msg__Longitude__are_equal(
      &(lhs->protected_zone_longitude), &(rhs->protected_zone_longitude)))
  {
    return false;
  }
  // cen_dsrc_tolling_zone_id_present
  if (lhs->cen_dsrc_tolling_zone_id_present != rhs->cen_dsrc_tolling_zone_id_present) {
    return false;
  }
  // cen_dsrc_tolling_zone_id
  if (!v2x_msgs__msg__CenDsrcTollingZoneID__are_equal(
      &(lhs->cen_dsrc_tolling_zone_id), &(rhs->cen_dsrc_tolling_zone_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CenDsrcTollingZone__copy(
  const v2x_msgs__msg__CenDsrcTollingZone * input,
  v2x_msgs__msg__CenDsrcTollingZone * output)
{
  if (!input || !output) {
    return false;
  }
  // protected_zone_latitude
  if (!v2x_msgs__msg__Latitude__copy(
      &(input->protected_zone_latitude), &(output->protected_zone_latitude)))
  {
    return false;
  }
  // protected_zone_longitude
  if (!v2x_msgs__msg__Longitude__copy(
      &(input->protected_zone_longitude), &(output->protected_zone_longitude)))
  {
    return false;
  }
  // cen_dsrc_tolling_zone_id_present
  output->cen_dsrc_tolling_zone_id_present = input->cen_dsrc_tolling_zone_id_present;
  // cen_dsrc_tolling_zone_id
  if (!v2x_msgs__msg__CenDsrcTollingZoneID__copy(
      &(input->cen_dsrc_tolling_zone_id), &(output->cen_dsrc_tolling_zone_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CenDsrcTollingZone *
v2x_msgs__msg__CenDsrcTollingZone__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CenDsrcTollingZone * msg = (v2x_msgs__msg__CenDsrcTollingZone *)allocator.allocate(sizeof(v2x_msgs__msg__CenDsrcTollingZone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CenDsrcTollingZone));
  bool success = v2x_msgs__msg__CenDsrcTollingZone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CenDsrcTollingZone__destroy(v2x_msgs__msg__CenDsrcTollingZone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CenDsrcTollingZone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CenDsrcTollingZone__Sequence__init(v2x_msgs__msg__CenDsrcTollingZone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CenDsrcTollingZone * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CenDsrcTollingZone *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CenDsrcTollingZone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CenDsrcTollingZone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CenDsrcTollingZone__fini(&data[i - 1]);
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
v2x_msgs__msg__CenDsrcTollingZone__Sequence__fini(v2x_msgs__msg__CenDsrcTollingZone__Sequence * array)
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
      v2x_msgs__msg__CenDsrcTollingZone__fini(&array->data[i]);
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

v2x_msgs__msg__CenDsrcTollingZone__Sequence *
v2x_msgs__msg__CenDsrcTollingZone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CenDsrcTollingZone__Sequence * array = (v2x_msgs__msg__CenDsrcTollingZone__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CenDsrcTollingZone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CenDsrcTollingZone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CenDsrcTollingZone__Sequence__destroy(v2x_msgs__msg__CenDsrcTollingZone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CenDsrcTollingZone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CenDsrcTollingZone__Sequence__are_equal(const v2x_msgs__msg__CenDsrcTollingZone__Sequence * lhs, const v2x_msgs__msg__CenDsrcTollingZone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CenDsrcTollingZone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CenDsrcTollingZone__Sequence__copy(
  const v2x_msgs__msg__CenDsrcTollingZone__Sequence * input,
  v2x_msgs__msg__CenDsrcTollingZone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CenDsrcTollingZone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CenDsrcTollingZone * data =
      (v2x_msgs__msg__CenDsrcTollingZone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CenDsrcTollingZone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CenDsrcTollingZone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CenDsrcTollingZone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
