// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/full_position_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `utc_time`
#include "v2x_msgs/msg/detail/d_date_time__functions.h"
// Member `vector_long`
#include "v2x_msgs/msg/detail/longitude__functions.h"
// Member `vector_lat`
#include "v2x_msgs/msg/detail/latitude__functions.h"
// Member `elevation`
#include "v2x_msgs/msg/detail/elevation__functions.h"
// Member `heading`
#include "v2x_msgs/msg/detail/heading_dsrc__functions.h"
// Member `speed`
#include "v2x_msgs/msg/detail/transmission_and_speed__functions.h"
// Member `pos_accuracy`
#include "v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `time_confidence`
#include "v2x_msgs/msg/detail/time_confidence__functions.h"
// Member `pos_confidence`
#include "v2x_msgs/msg/detail/position_confidence_set__functions.h"
// Member `speed_confidence`
#include "v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"

bool
v2x_msgs__msg__FullPositionVector__init(v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return false;
  }
  // utc_time_present
  msg->utc_time_present = false;
  // utc_time
  if (!v2x_msgs__msg__DDateTime__init(&msg->utc_time)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // vector_long
  if (!v2x_msgs__msg__Longitude__init(&msg->vector_long)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // vector_lat
  if (!v2x_msgs__msg__Latitude__init(&msg->vector_lat)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // elevation_present
  msg->elevation_present = false;
  // elevation
  if (!v2x_msgs__msg__Elevation__init(&msg->elevation)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // heading_present
  msg->heading_present = false;
  // heading
  if (!v2x_msgs__msg__HeadingDSRC__init(&msg->heading)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed_present
  msg->speed_present = false;
  // speed
  if (!v2x_msgs__msg__TransmissionAndSpeed__init(&msg->speed)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_accuracy_present
  msg->pos_accuracy_present = false;
  // pos_accuracy
  if (!v2x_msgs__msg__PositionalAccuracy__init(&msg->pos_accuracy)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // time_confidence_present
  msg->time_confidence_present = false;
  // time_confidence
  if (!v2x_msgs__msg__TimeConfidence__init(&msg->time_confidence)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_confidence_present
  msg->pos_confidence_present = false;
  // pos_confidence
  if (!v2x_msgs__msg__PositionConfidenceSet__init(&msg->pos_confidence)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed_confidence_present
  msg->speed_confidence_present = false;
  // speed_confidence
  if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speed_confidence)) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__FullPositionVector__fini(v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return;
  }
  // utc_time_present
  // utc_time
  v2x_msgs__msg__DDateTime__fini(&msg->utc_time);
  // vector_long
  v2x_msgs__msg__Longitude__fini(&msg->vector_long);
  // vector_lat
  v2x_msgs__msg__Latitude__fini(&msg->vector_lat);
  // elevation_present
  // elevation
  v2x_msgs__msg__Elevation__fini(&msg->elevation);
  // heading_present
  // heading
  v2x_msgs__msg__HeadingDSRC__fini(&msg->heading);
  // speed_present
  // speed
  v2x_msgs__msg__TransmissionAndSpeed__fini(&msg->speed);
  // pos_accuracy_present
  // pos_accuracy
  v2x_msgs__msg__PositionalAccuracy__fini(&msg->pos_accuracy);
  // time_confidence_present
  // time_confidence
  v2x_msgs__msg__TimeConfidence__fini(&msg->time_confidence);
  // pos_confidence_present
  // pos_confidence
  v2x_msgs__msg__PositionConfidenceSet__fini(&msg->pos_confidence);
  // speed_confidence_present
  // speed_confidence
  v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speed_confidence);
}

bool
v2x_msgs__msg__FullPositionVector__are_equal(const v2x_msgs__msg__FullPositionVector * lhs, const v2x_msgs__msg__FullPositionVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // utc_time_present
  if (lhs->utc_time_present != rhs->utc_time_present) {
    return false;
  }
  // utc_time
  if (!v2x_msgs__msg__DDateTime__are_equal(
      &(lhs->utc_time), &(rhs->utc_time)))
  {
    return false;
  }
  // vector_long
  if (!v2x_msgs__msg__Longitude__are_equal(
      &(lhs->vector_long), &(rhs->vector_long)))
  {
    return false;
  }
  // vector_lat
  if (!v2x_msgs__msg__Latitude__are_equal(
      &(lhs->vector_lat), &(rhs->vector_lat)))
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
  // heading_present
  if (lhs->heading_present != rhs->heading_present) {
    return false;
  }
  // heading
  if (!v2x_msgs__msg__HeadingDSRC__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed_present
  if (lhs->speed_present != rhs->speed_present) {
    return false;
  }
  // speed
  if (!v2x_msgs__msg__TransmissionAndSpeed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // pos_accuracy_present
  if (lhs->pos_accuracy_present != rhs->pos_accuracy_present) {
    return false;
  }
  // pos_accuracy
  if (!v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->pos_accuracy), &(rhs->pos_accuracy)))
  {
    return false;
  }
  // time_confidence_present
  if (lhs->time_confidence_present != rhs->time_confidence_present) {
    return false;
  }
  // time_confidence
  if (!v2x_msgs__msg__TimeConfidence__are_equal(
      &(lhs->time_confidence), &(rhs->time_confidence)))
  {
    return false;
  }
  // pos_confidence_present
  if (lhs->pos_confidence_present != rhs->pos_confidence_present) {
    return false;
  }
  // pos_confidence
  if (!v2x_msgs__msg__PositionConfidenceSet__are_equal(
      &(lhs->pos_confidence), &(rhs->pos_confidence)))
  {
    return false;
  }
  // speed_confidence_present
  if (lhs->speed_confidence_present != rhs->speed_confidence_present) {
    return false;
  }
  // speed_confidence
  if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speed_confidence), &(rhs->speed_confidence)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__FullPositionVector__copy(
  const v2x_msgs__msg__FullPositionVector * input,
  v2x_msgs__msg__FullPositionVector * output)
{
  if (!input || !output) {
    return false;
  }
  // utc_time_present
  output->utc_time_present = input->utc_time_present;
  // utc_time
  if (!v2x_msgs__msg__DDateTime__copy(
      &(input->utc_time), &(output->utc_time)))
  {
    return false;
  }
  // vector_long
  if (!v2x_msgs__msg__Longitude__copy(
      &(input->vector_long), &(output->vector_long)))
  {
    return false;
  }
  // vector_lat
  if (!v2x_msgs__msg__Latitude__copy(
      &(input->vector_lat), &(output->vector_lat)))
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
  // heading_present
  output->heading_present = input->heading_present;
  // heading
  if (!v2x_msgs__msg__HeadingDSRC__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed_present
  output->speed_present = input->speed_present;
  // speed
  if (!v2x_msgs__msg__TransmissionAndSpeed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // pos_accuracy_present
  output->pos_accuracy_present = input->pos_accuracy_present;
  // pos_accuracy
  if (!v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->pos_accuracy), &(output->pos_accuracy)))
  {
    return false;
  }
  // time_confidence_present
  output->time_confidence_present = input->time_confidence_present;
  // time_confidence
  if (!v2x_msgs__msg__TimeConfidence__copy(
      &(input->time_confidence), &(output->time_confidence)))
  {
    return false;
  }
  // pos_confidence_present
  output->pos_confidence_present = input->pos_confidence_present;
  // pos_confidence
  if (!v2x_msgs__msg__PositionConfidenceSet__copy(
      &(input->pos_confidence), &(output->pos_confidence)))
  {
    return false;
  }
  // speed_confidence_present
  output->speed_confidence_present = input->speed_confidence_present;
  // speed_confidence
  if (!v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speed_confidence), &(output->speed_confidence)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__FullPositionVector *
v2x_msgs__msg__FullPositionVector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FullPositionVector * msg = (v2x_msgs__msg__FullPositionVector *)allocator.allocate(sizeof(v2x_msgs__msg__FullPositionVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__FullPositionVector));
  bool success = v2x_msgs__msg__FullPositionVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__FullPositionVector__destroy(v2x_msgs__msg__FullPositionVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__FullPositionVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__FullPositionVector__Sequence__init(v2x_msgs__msg__FullPositionVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FullPositionVector * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__FullPositionVector *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__FullPositionVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__FullPositionVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__FullPositionVector__fini(&data[i - 1]);
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
v2x_msgs__msg__FullPositionVector__Sequence__fini(v2x_msgs__msg__FullPositionVector__Sequence * array)
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
      v2x_msgs__msg__FullPositionVector__fini(&array->data[i]);
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

v2x_msgs__msg__FullPositionVector__Sequence *
v2x_msgs__msg__FullPositionVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FullPositionVector__Sequence * array = (v2x_msgs__msg__FullPositionVector__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__FullPositionVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__FullPositionVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__FullPositionVector__Sequence__destroy(v2x_msgs__msg__FullPositionVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__FullPositionVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__FullPositionVector__Sequence__are_equal(const v2x_msgs__msg__FullPositionVector__Sequence * lhs, const v2x_msgs__msg__FullPositionVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__FullPositionVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__FullPositionVector__Sequence__copy(
  const v2x_msgs__msg__FullPositionVector__Sequence * input,
  v2x_msgs__msg__FullPositionVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__FullPositionVector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__FullPositionVector * data =
      (v2x_msgs__msg__FullPositionVector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__FullPositionVector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__FullPositionVector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__FullPositionVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
