// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LaneCharacteristics.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/lane_characteristics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `zone_definition_accuracy`
#include "v2x_msgs/msg/detail/definition_accuracy__functions.h"
// Member `existinglane_marking_status`
#include "v2x_msgs/msg/detail/lane_marking_status__functions.h"
// Member `newlane_marking_colour`
#include "v2x_msgs/msg/detail/marking_colour__functions.h"
// Member `lane_delimitation_left`
// Member `lane_delimitation_right`
#include "v2x_msgs/msg/detail/lane_delimitation__functions.h"
// Member `merging_with`
#include "v2x_msgs/msg/detail/zid__functions.h"

bool
v2x_msgs__msg__LaneCharacteristics__init(v2x_msgs__msg__LaneCharacteristics * msg)
{
  if (!msg) {
    return false;
  }
  // zone_definition_accuracy
  if (!v2x_msgs__msg__DefinitionAccuracy__init(&msg->zone_definition_accuracy)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  // existinglane_marking_status
  if (!v2x_msgs__msg__LaneMarkingStatus__init(&msg->existinglane_marking_status)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  // newlane_marking_colour
  if (!v2x_msgs__msg__MarkingColour__init(&msg->newlane_marking_colour)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  // lane_delimitation_left
  if (!v2x_msgs__msg__LaneDelimitation__init(&msg->lane_delimitation_left)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  // lane_delimitation_right
  if (!v2x_msgs__msg__LaneDelimitation__init(&msg->lane_delimitation_right)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  // merging_with
  if (!v2x_msgs__msg__Zid__init(&msg->merging_with)) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LaneCharacteristics__fini(v2x_msgs__msg__LaneCharacteristics * msg)
{
  if (!msg) {
    return;
  }
  // zone_definition_accuracy
  v2x_msgs__msg__DefinitionAccuracy__fini(&msg->zone_definition_accuracy);
  // existinglane_marking_status
  v2x_msgs__msg__LaneMarkingStatus__fini(&msg->existinglane_marking_status);
  // newlane_marking_colour
  v2x_msgs__msg__MarkingColour__fini(&msg->newlane_marking_colour);
  // lane_delimitation_left
  v2x_msgs__msg__LaneDelimitation__fini(&msg->lane_delimitation_left);
  // lane_delimitation_right
  v2x_msgs__msg__LaneDelimitation__fini(&msg->lane_delimitation_right);
  // merging_with
  v2x_msgs__msg__Zid__fini(&msg->merging_with);
}

bool
v2x_msgs__msg__LaneCharacteristics__are_equal(const v2x_msgs__msg__LaneCharacteristics * lhs, const v2x_msgs__msg__LaneCharacteristics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // zone_definition_accuracy
  if (!v2x_msgs__msg__DefinitionAccuracy__are_equal(
      &(lhs->zone_definition_accuracy), &(rhs->zone_definition_accuracy)))
  {
    return false;
  }
  // existinglane_marking_status
  if (!v2x_msgs__msg__LaneMarkingStatus__are_equal(
      &(lhs->existinglane_marking_status), &(rhs->existinglane_marking_status)))
  {
    return false;
  }
  // newlane_marking_colour
  if (!v2x_msgs__msg__MarkingColour__are_equal(
      &(lhs->newlane_marking_colour), &(rhs->newlane_marking_colour)))
  {
    return false;
  }
  // lane_delimitation_left
  if (!v2x_msgs__msg__LaneDelimitation__are_equal(
      &(lhs->lane_delimitation_left), &(rhs->lane_delimitation_left)))
  {
    return false;
  }
  // lane_delimitation_right
  if (!v2x_msgs__msg__LaneDelimitation__are_equal(
      &(lhs->lane_delimitation_right), &(rhs->lane_delimitation_right)))
  {
    return false;
  }
  // merging_with
  if (!v2x_msgs__msg__Zid__are_equal(
      &(lhs->merging_with), &(rhs->merging_with)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LaneCharacteristics__copy(
  const v2x_msgs__msg__LaneCharacteristics * input,
  v2x_msgs__msg__LaneCharacteristics * output)
{
  if (!input || !output) {
    return false;
  }
  // zone_definition_accuracy
  if (!v2x_msgs__msg__DefinitionAccuracy__copy(
      &(input->zone_definition_accuracy), &(output->zone_definition_accuracy)))
  {
    return false;
  }
  // existinglane_marking_status
  if (!v2x_msgs__msg__LaneMarkingStatus__copy(
      &(input->existinglane_marking_status), &(output->existinglane_marking_status)))
  {
    return false;
  }
  // newlane_marking_colour
  if (!v2x_msgs__msg__MarkingColour__copy(
      &(input->newlane_marking_colour), &(output->newlane_marking_colour)))
  {
    return false;
  }
  // lane_delimitation_left
  if (!v2x_msgs__msg__LaneDelimitation__copy(
      &(input->lane_delimitation_left), &(output->lane_delimitation_left)))
  {
    return false;
  }
  // lane_delimitation_right
  if (!v2x_msgs__msg__LaneDelimitation__copy(
      &(input->lane_delimitation_right), &(output->lane_delimitation_right)))
  {
    return false;
  }
  // merging_with
  if (!v2x_msgs__msg__Zid__copy(
      &(input->merging_with), &(output->merging_with)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LaneCharacteristics *
v2x_msgs__msg__LaneCharacteristics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneCharacteristics * msg = (v2x_msgs__msg__LaneCharacteristics *)allocator.allocate(sizeof(v2x_msgs__msg__LaneCharacteristics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LaneCharacteristics));
  bool success = v2x_msgs__msg__LaneCharacteristics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LaneCharacteristics__destroy(v2x_msgs__msg__LaneCharacteristics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LaneCharacteristics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LaneCharacteristics__Sequence__init(v2x_msgs__msg__LaneCharacteristics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneCharacteristics * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LaneCharacteristics *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LaneCharacteristics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LaneCharacteristics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LaneCharacteristics__fini(&data[i - 1]);
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
v2x_msgs__msg__LaneCharacteristics__Sequence__fini(v2x_msgs__msg__LaneCharacteristics__Sequence * array)
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
      v2x_msgs__msg__LaneCharacteristics__fini(&array->data[i]);
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

v2x_msgs__msg__LaneCharacteristics__Sequence *
v2x_msgs__msg__LaneCharacteristics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneCharacteristics__Sequence * array = (v2x_msgs__msg__LaneCharacteristics__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LaneCharacteristics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LaneCharacteristics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LaneCharacteristics__Sequence__destroy(v2x_msgs__msg__LaneCharacteristics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LaneCharacteristics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LaneCharacteristics__Sequence__are_equal(const v2x_msgs__msg__LaneCharacteristics__Sequence * lhs, const v2x_msgs__msg__LaneCharacteristics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LaneCharacteristics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LaneCharacteristics__Sequence__copy(
  const v2x_msgs__msg__LaneCharacteristics__Sequence * input,
  v2x_msgs__msg__LaneCharacteristics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LaneCharacteristics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LaneCharacteristics * data =
      (v2x_msgs__msg__LaneCharacteristics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LaneCharacteristics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LaneCharacteristics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LaneCharacteristics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
