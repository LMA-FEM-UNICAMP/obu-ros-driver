// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ProtectedCommunicationZone.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/protected_communication_zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `protected_zone_type`
#include "v2x_msgs/msg/detail/protected_zone_type__functions.h"
// Member `expiry_time`
#include "v2x_msgs/msg/detail/timestamp_its__functions.h"
// Member `protected_zone_latitude`
#include "v2x_msgs/msg/detail/latitude__functions.h"
// Member `protected_zone_longitude`
#include "v2x_msgs/msg/detail/longitude__functions.h"
// Member `protected_zone_radius`
#include "v2x_msgs/msg/detail/protected_zone_radius__functions.h"
// Member `protected_zone_id`
#include "v2x_msgs/msg/detail/protected_zone_id__functions.h"

bool
v2x_msgs__msg__ProtectedCommunicationZone__init(v2x_msgs__msg__ProtectedCommunicationZone * msg)
{
  if (!msg) {
    return false;
  }
  // protected_zone_type
  if (!v2x_msgs__msg__ProtectedZoneType__init(&msg->protected_zone_type)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  // expiry_time_present
  msg->expiry_time_present = false;
  // expiry_time
  if (!v2x_msgs__msg__TimestampIts__init(&msg->expiry_time)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  // protected_zone_latitude
  if (!v2x_msgs__msg__Latitude__init(&msg->protected_zone_latitude)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  // protected_zone_longitude
  if (!v2x_msgs__msg__Longitude__init(&msg->protected_zone_longitude)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  // protected_zone_radius_present
  msg->protected_zone_radius_present = false;
  // protected_zone_radius
  if (!v2x_msgs__msg__ProtectedZoneRadius__init(&msg->protected_zone_radius)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  // protected_zone_id_present
  msg->protected_zone_id_present = false;
  // protected_zone_id
  if (!v2x_msgs__msg__ProtectedZoneID__init(&msg->protected_zone_id)) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ProtectedCommunicationZone__fini(v2x_msgs__msg__ProtectedCommunicationZone * msg)
{
  if (!msg) {
    return;
  }
  // protected_zone_type
  v2x_msgs__msg__ProtectedZoneType__fini(&msg->protected_zone_type);
  // expiry_time_present
  // expiry_time
  v2x_msgs__msg__TimestampIts__fini(&msg->expiry_time);
  // protected_zone_latitude
  v2x_msgs__msg__Latitude__fini(&msg->protected_zone_latitude);
  // protected_zone_longitude
  v2x_msgs__msg__Longitude__fini(&msg->protected_zone_longitude);
  // protected_zone_radius_present
  // protected_zone_radius
  v2x_msgs__msg__ProtectedZoneRadius__fini(&msg->protected_zone_radius);
  // protected_zone_id_present
  // protected_zone_id
  v2x_msgs__msg__ProtectedZoneID__fini(&msg->protected_zone_id);
}

bool
v2x_msgs__msg__ProtectedCommunicationZone__are_equal(const v2x_msgs__msg__ProtectedCommunicationZone * lhs, const v2x_msgs__msg__ProtectedCommunicationZone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // protected_zone_type
  if (!v2x_msgs__msg__ProtectedZoneType__are_equal(
      &(lhs->protected_zone_type), &(rhs->protected_zone_type)))
  {
    return false;
  }
  // expiry_time_present
  if (lhs->expiry_time_present != rhs->expiry_time_present) {
    return false;
  }
  // expiry_time
  if (!v2x_msgs__msg__TimestampIts__are_equal(
      &(lhs->expiry_time), &(rhs->expiry_time)))
  {
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
  // protected_zone_radius_present
  if (lhs->protected_zone_radius_present != rhs->protected_zone_radius_present) {
    return false;
  }
  // protected_zone_radius
  if (!v2x_msgs__msg__ProtectedZoneRadius__are_equal(
      &(lhs->protected_zone_radius), &(rhs->protected_zone_radius)))
  {
    return false;
  }
  // protected_zone_id_present
  if (lhs->protected_zone_id_present != rhs->protected_zone_id_present) {
    return false;
  }
  // protected_zone_id
  if (!v2x_msgs__msg__ProtectedZoneID__are_equal(
      &(lhs->protected_zone_id), &(rhs->protected_zone_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ProtectedCommunicationZone__copy(
  const v2x_msgs__msg__ProtectedCommunicationZone * input,
  v2x_msgs__msg__ProtectedCommunicationZone * output)
{
  if (!input || !output) {
    return false;
  }
  // protected_zone_type
  if (!v2x_msgs__msg__ProtectedZoneType__copy(
      &(input->protected_zone_type), &(output->protected_zone_type)))
  {
    return false;
  }
  // expiry_time_present
  output->expiry_time_present = input->expiry_time_present;
  // expiry_time
  if (!v2x_msgs__msg__TimestampIts__copy(
      &(input->expiry_time), &(output->expiry_time)))
  {
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
  // protected_zone_radius_present
  output->protected_zone_radius_present = input->protected_zone_radius_present;
  // protected_zone_radius
  if (!v2x_msgs__msg__ProtectedZoneRadius__copy(
      &(input->protected_zone_radius), &(output->protected_zone_radius)))
  {
    return false;
  }
  // protected_zone_id_present
  output->protected_zone_id_present = input->protected_zone_id_present;
  // protected_zone_id
  if (!v2x_msgs__msg__ProtectedZoneID__copy(
      &(input->protected_zone_id), &(output->protected_zone_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ProtectedCommunicationZone *
v2x_msgs__msg__ProtectedCommunicationZone__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ProtectedCommunicationZone * msg = (v2x_msgs__msg__ProtectedCommunicationZone *)allocator.allocate(sizeof(v2x_msgs__msg__ProtectedCommunicationZone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ProtectedCommunicationZone));
  bool success = v2x_msgs__msg__ProtectedCommunicationZone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ProtectedCommunicationZone__destroy(v2x_msgs__msg__ProtectedCommunicationZone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ProtectedCommunicationZone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__init(v2x_msgs__msg__ProtectedCommunicationZone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ProtectedCommunicationZone * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ProtectedCommunicationZone *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ProtectedCommunicationZone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ProtectedCommunicationZone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ProtectedCommunicationZone__fini(&data[i - 1]);
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
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__fini(v2x_msgs__msg__ProtectedCommunicationZone__Sequence * array)
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
      v2x_msgs__msg__ProtectedCommunicationZone__fini(&array->data[i]);
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

v2x_msgs__msg__ProtectedCommunicationZone__Sequence *
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ProtectedCommunicationZone__Sequence * array = (v2x_msgs__msg__ProtectedCommunicationZone__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ProtectedCommunicationZone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ProtectedCommunicationZone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__destroy(v2x_msgs__msg__ProtectedCommunicationZone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ProtectedCommunicationZone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__are_equal(const v2x_msgs__msg__ProtectedCommunicationZone__Sequence * lhs, const v2x_msgs__msg__ProtectedCommunicationZone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ProtectedCommunicationZone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ProtectedCommunicationZone__Sequence__copy(
  const v2x_msgs__msg__ProtectedCommunicationZone__Sequence * input,
  v2x_msgs__msg__ProtectedCommunicationZone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ProtectedCommunicationZone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ProtectedCommunicationZone * data =
      (v2x_msgs__msg__ProtectedCommunicationZone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ProtectedCommunicationZone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ProtectedCommunicationZone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ProtectedCommunicationZone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
