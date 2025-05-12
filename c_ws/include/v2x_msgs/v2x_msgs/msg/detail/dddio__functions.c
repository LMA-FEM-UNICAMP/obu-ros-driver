// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DDDIO.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/dddio__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dest_place`
#include "v2x_msgs/msg/detail/destination_places__functions.h"
// Member `dest_road`
#include "v2x_msgs/msg/detail/destination_roads__functions.h"
// Member `street_name_text`
#include "rosidl_runtime_c/string_functions.h"
// Member `distance_to_diverging_point`
// Member `distance_to_destination_place`
#include "v2x_msgs/msg/detail/distance_or_duration__functions.h"

bool
v2x_msgs__msg__DDDIO__init(v2x_msgs__msg__DDDIO * msg)
{
  if (!msg) {
    return false;
  }
  // arrow_direction
  // dest_place_present
  msg->dest_place_present = false;
  // dest_place
  if (!v2x_msgs__msg__DestinationPlaces__init(&msg->dest_place)) {
    v2x_msgs__msg__DDDIO__fini(msg);
    return false;
  }
  // dest_road_present
  msg->dest_road_present = false;
  // dest_road
  if (!v2x_msgs__msg__DestinationRoads__init(&msg->dest_road)) {
    v2x_msgs__msg__DDDIO__fini(msg);
    return false;
  }
  // road_number_identifier_present
  msg->road_number_identifier_present = false;
  // road_number_identifier
  // street_name_present
  msg->street_name_present = false;
  // street_name
  // street_name_text_present
  msg->street_name_text_present = false;
  // street_name_text
  if (!rosidl_runtime_c__String__init(&msg->street_name_text)) {
    v2x_msgs__msg__DDDIO__fini(msg);
    return false;
  }
  // distance_to_diverging_point_present
  msg->distance_to_diverging_point_present = false;
  // distance_to_diverging_point
  if (!v2x_msgs__msg__DistanceOrDuration__init(&msg->distance_to_diverging_point)) {
    v2x_msgs__msg__DDDIO__fini(msg);
    return false;
  }
  // distance_to_destination_place_present
  msg->distance_to_destination_place_present = false;
  // distance_to_destination_place
  if (!v2x_msgs__msg__DistanceOrDuration__init(&msg->distance_to_destination_place)) {
    v2x_msgs__msg__DDDIO__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DDDIO__fini(v2x_msgs__msg__DDDIO * msg)
{
  if (!msg) {
    return;
  }
  // arrow_direction
  // dest_place_present
  // dest_place
  v2x_msgs__msg__DestinationPlaces__fini(&msg->dest_place);
  // dest_road_present
  // dest_road
  v2x_msgs__msg__DestinationRoads__fini(&msg->dest_road);
  // road_number_identifier_present
  // road_number_identifier
  // street_name_present
  // street_name
  // street_name_text_present
  // street_name_text
  rosidl_runtime_c__String__fini(&msg->street_name_text);
  // distance_to_diverging_point_present
  // distance_to_diverging_point
  v2x_msgs__msg__DistanceOrDuration__fini(&msg->distance_to_diverging_point);
  // distance_to_destination_place_present
  // distance_to_destination_place
  v2x_msgs__msg__DistanceOrDuration__fini(&msg->distance_to_destination_place);
}

bool
v2x_msgs__msg__DDDIO__are_equal(const v2x_msgs__msg__DDDIO * lhs, const v2x_msgs__msg__DDDIO * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arrow_direction
  if (lhs->arrow_direction != rhs->arrow_direction) {
    return false;
  }
  // dest_place_present
  if (lhs->dest_place_present != rhs->dest_place_present) {
    return false;
  }
  // dest_place
  if (!v2x_msgs__msg__DestinationPlaces__are_equal(
      &(lhs->dest_place), &(rhs->dest_place)))
  {
    return false;
  }
  // dest_road_present
  if (lhs->dest_road_present != rhs->dest_road_present) {
    return false;
  }
  // dest_road
  if (!v2x_msgs__msg__DestinationRoads__are_equal(
      &(lhs->dest_road), &(rhs->dest_road)))
  {
    return false;
  }
  // road_number_identifier_present
  if (lhs->road_number_identifier_present != rhs->road_number_identifier_present) {
    return false;
  }
  // road_number_identifier
  if (lhs->road_number_identifier != rhs->road_number_identifier) {
    return false;
  }
  // street_name_present
  if (lhs->street_name_present != rhs->street_name_present) {
    return false;
  }
  // street_name
  if (lhs->street_name != rhs->street_name) {
    return false;
  }
  // street_name_text_present
  if (lhs->street_name_text_present != rhs->street_name_text_present) {
    return false;
  }
  // street_name_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->street_name_text), &(rhs->street_name_text)))
  {
    return false;
  }
  // distance_to_diverging_point_present
  if (lhs->distance_to_diverging_point_present != rhs->distance_to_diverging_point_present) {
    return false;
  }
  // distance_to_diverging_point
  if (!v2x_msgs__msg__DistanceOrDuration__are_equal(
      &(lhs->distance_to_diverging_point), &(rhs->distance_to_diverging_point)))
  {
    return false;
  }
  // distance_to_destination_place_present
  if (lhs->distance_to_destination_place_present != rhs->distance_to_destination_place_present) {
    return false;
  }
  // distance_to_destination_place
  if (!v2x_msgs__msg__DistanceOrDuration__are_equal(
      &(lhs->distance_to_destination_place), &(rhs->distance_to_destination_place)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DDDIO__copy(
  const v2x_msgs__msg__DDDIO * input,
  v2x_msgs__msg__DDDIO * output)
{
  if (!input || !output) {
    return false;
  }
  // arrow_direction
  output->arrow_direction = input->arrow_direction;
  // dest_place_present
  output->dest_place_present = input->dest_place_present;
  // dest_place
  if (!v2x_msgs__msg__DestinationPlaces__copy(
      &(input->dest_place), &(output->dest_place)))
  {
    return false;
  }
  // dest_road_present
  output->dest_road_present = input->dest_road_present;
  // dest_road
  if (!v2x_msgs__msg__DestinationRoads__copy(
      &(input->dest_road), &(output->dest_road)))
  {
    return false;
  }
  // road_number_identifier_present
  output->road_number_identifier_present = input->road_number_identifier_present;
  // road_number_identifier
  output->road_number_identifier = input->road_number_identifier;
  // street_name_present
  output->street_name_present = input->street_name_present;
  // street_name
  output->street_name = input->street_name;
  // street_name_text_present
  output->street_name_text_present = input->street_name_text_present;
  // street_name_text
  if (!rosidl_runtime_c__String__copy(
      &(input->street_name_text), &(output->street_name_text)))
  {
    return false;
  }
  // distance_to_diverging_point_present
  output->distance_to_diverging_point_present = input->distance_to_diverging_point_present;
  // distance_to_diverging_point
  if (!v2x_msgs__msg__DistanceOrDuration__copy(
      &(input->distance_to_diverging_point), &(output->distance_to_diverging_point)))
  {
    return false;
  }
  // distance_to_destination_place_present
  output->distance_to_destination_place_present = input->distance_to_destination_place_present;
  // distance_to_destination_place
  if (!v2x_msgs__msg__DistanceOrDuration__copy(
      &(input->distance_to_destination_place), &(output->distance_to_destination_place)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DDDIO *
v2x_msgs__msg__DDDIO__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDDIO * msg = (v2x_msgs__msg__DDDIO *)allocator.allocate(sizeof(v2x_msgs__msg__DDDIO), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DDDIO));
  bool success = v2x_msgs__msg__DDDIO__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DDDIO__destroy(v2x_msgs__msg__DDDIO * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DDDIO__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DDDIO__Sequence__init(v2x_msgs__msg__DDDIO__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDDIO * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DDDIO *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DDDIO), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DDDIO__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DDDIO__fini(&data[i - 1]);
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
v2x_msgs__msg__DDDIO__Sequence__fini(v2x_msgs__msg__DDDIO__Sequence * array)
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
      v2x_msgs__msg__DDDIO__fini(&array->data[i]);
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

v2x_msgs__msg__DDDIO__Sequence *
v2x_msgs__msg__DDDIO__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDDIO__Sequence * array = (v2x_msgs__msg__DDDIO__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DDDIO__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DDDIO__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DDDIO__Sequence__destroy(v2x_msgs__msg__DDDIO__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DDDIO__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DDDIO__Sequence__are_equal(const v2x_msgs__msg__DDDIO__Sequence * lhs, const v2x_msgs__msg__DDDIO__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DDDIO__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DDDIO__Sequence__copy(
  const v2x_msgs__msg__DDDIO__Sequence * input,
  v2x_msgs__msg__DDDIO__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DDDIO);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DDDIO * data =
      (v2x_msgs__msg__DDDIO *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DDDIO__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DDDIO__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DDDIO__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
