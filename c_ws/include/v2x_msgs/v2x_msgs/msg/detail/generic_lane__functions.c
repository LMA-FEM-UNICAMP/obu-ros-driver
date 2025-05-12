// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/generic_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_id`
#include "v2x_msgs/msg/detail/lane_id__functions.h"
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__functions.h"
// Member `ingress_approach`
// Member `egress_approach`
#include "v2x_msgs/msg/detail/approach_id__functions.h"
// Member `lane_attributes`
#include "v2x_msgs/msg/detail/lane_attributes__functions.h"
// Member `maneuvers`
#include "v2x_msgs/msg/detail/allowed_maneuvers__functions.h"
// Member `node_list`
#include "v2x_msgs/msg/detail/node_list_xy__functions.h"
// Member `connects_to`
#include "v2x_msgs/msg/detail/connects_to_list__functions.h"
// Member `overlays`
#include "v2x_msgs/msg/detail/overlay_lane_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_generic_lane__functions.h"

bool
v2x_msgs__msg__GenericLane__init(v2x_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  if (!v2x_msgs__msg__LaneID__init(&msg->lane_id)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // name_present
  msg->name_present = false;
  // name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->name)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // ingress_approach_present
  msg->ingress_approach_present = false;
  // ingress_approach
  if (!v2x_msgs__msg__ApproachID__init(&msg->ingress_approach)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // egress_approach_present
  msg->egress_approach_present = false;
  // egress_approach
  if (!v2x_msgs__msg__ApproachID__init(&msg->egress_approach)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // lane_attributes
  if (!v2x_msgs__msg__LaneAttributes__init(&msg->lane_attributes)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // maneuvers_present
  msg->maneuvers_present = false;
  // maneuvers
  if (!v2x_msgs__msg__AllowedManeuvers__init(&msg->maneuvers)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // node_list
  if (!v2x_msgs__msg__NodeListXY__init(&msg->node_list)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // connects_to_present
  msg->connects_to_present = false;
  // connects_to
  if (!v2x_msgs__msg__ConnectsToList__init(&msg->connects_to)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // overlays_present
  msg->overlays_present = false;
  // overlays
  if (!v2x_msgs__msg__OverlayLaneList__init(&msg->overlays)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegGenericLane__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__GenericLane__fini(v2x_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  v2x_msgs__msg__LaneID__fini(&msg->lane_id);
  // name_present
  // name
  v2x_msgs__msg__DescriptiveName__fini(&msg->name);
  // ingress_approach_present
  // ingress_approach
  v2x_msgs__msg__ApproachID__fini(&msg->ingress_approach);
  // egress_approach_present
  // egress_approach
  v2x_msgs__msg__ApproachID__fini(&msg->egress_approach);
  // lane_attributes
  v2x_msgs__msg__LaneAttributes__fini(&msg->lane_attributes);
  // maneuvers_present
  // maneuvers
  v2x_msgs__msg__AllowedManeuvers__fini(&msg->maneuvers);
  // node_list
  v2x_msgs__msg__NodeListXY__fini(&msg->node_list);
  // connects_to_present
  // connects_to
  v2x_msgs__msg__ConnectsToList__fini(&msg->connects_to);
  // overlays_present
  // overlays
  v2x_msgs__msg__OverlayLaneList__fini(&msg->overlays);
  // regional_present
  // regional
  v2x_msgs__msg__RegGenericLane__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__GenericLane__are_equal(const v2x_msgs__msg__GenericLane * lhs, const v2x_msgs__msg__GenericLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (!v2x_msgs__msg__LaneID__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // name_present
  if (lhs->name_present != rhs->name_present) {
    return false;
  }
  // name
  if (!v2x_msgs__msg__DescriptiveName__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // ingress_approach_present
  if (lhs->ingress_approach_present != rhs->ingress_approach_present) {
    return false;
  }
  // ingress_approach
  if (!v2x_msgs__msg__ApproachID__are_equal(
      &(lhs->ingress_approach), &(rhs->ingress_approach)))
  {
    return false;
  }
  // egress_approach_present
  if (lhs->egress_approach_present != rhs->egress_approach_present) {
    return false;
  }
  // egress_approach
  if (!v2x_msgs__msg__ApproachID__are_equal(
      &(lhs->egress_approach), &(rhs->egress_approach)))
  {
    return false;
  }
  // lane_attributes
  if (!v2x_msgs__msg__LaneAttributes__are_equal(
      &(lhs->lane_attributes), &(rhs->lane_attributes)))
  {
    return false;
  }
  // maneuvers_present
  if (lhs->maneuvers_present != rhs->maneuvers_present) {
    return false;
  }
  // maneuvers
  if (!v2x_msgs__msg__AllowedManeuvers__are_equal(
      &(lhs->maneuvers), &(rhs->maneuvers)))
  {
    return false;
  }
  // node_list
  if (!v2x_msgs__msg__NodeListXY__are_equal(
      &(lhs->node_list), &(rhs->node_list)))
  {
    return false;
  }
  // connects_to_present
  if (lhs->connects_to_present != rhs->connects_to_present) {
    return false;
  }
  // connects_to
  if (!v2x_msgs__msg__ConnectsToList__are_equal(
      &(lhs->connects_to), &(rhs->connects_to)))
  {
    return false;
  }
  // overlays_present
  if (lhs->overlays_present != rhs->overlays_present) {
    return false;
  }
  // overlays
  if (!v2x_msgs__msg__OverlayLaneList__are_equal(
      &(lhs->overlays), &(rhs->overlays)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegGenericLane__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__GenericLane__copy(
  const v2x_msgs__msg__GenericLane * input,
  v2x_msgs__msg__GenericLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  if (!v2x_msgs__msg__LaneID__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // name_present
  output->name_present = input->name_present;
  // name
  if (!v2x_msgs__msg__DescriptiveName__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // ingress_approach_present
  output->ingress_approach_present = input->ingress_approach_present;
  // ingress_approach
  if (!v2x_msgs__msg__ApproachID__copy(
      &(input->ingress_approach), &(output->ingress_approach)))
  {
    return false;
  }
  // egress_approach_present
  output->egress_approach_present = input->egress_approach_present;
  // egress_approach
  if (!v2x_msgs__msg__ApproachID__copy(
      &(input->egress_approach), &(output->egress_approach)))
  {
    return false;
  }
  // lane_attributes
  if (!v2x_msgs__msg__LaneAttributes__copy(
      &(input->lane_attributes), &(output->lane_attributes)))
  {
    return false;
  }
  // maneuvers_present
  output->maneuvers_present = input->maneuvers_present;
  // maneuvers
  if (!v2x_msgs__msg__AllowedManeuvers__copy(
      &(input->maneuvers), &(output->maneuvers)))
  {
    return false;
  }
  // node_list
  if (!v2x_msgs__msg__NodeListXY__copy(
      &(input->node_list), &(output->node_list)))
  {
    return false;
  }
  // connects_to_present
  output->connects_to_present = input->connects_to_present;
  // connects_to
  if (!v2x_msgs__msg__ConnectsToList__copy(
      &(input->connects_to), &(output->connects_to)))
  {
    return false;
  }
  // overlays_present
  output->overlays_present = input->overlays_present;
  // overlays
  if (!v2x_msgs__msg__OverlayLaneList__copy(
      &(input->overlays), &(output->overlays)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegGenericLane__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__GenericLane *
v2x_msgs__msg__GenericLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GenericLane * msg = (v2x_msgs__msg__GenericLane *)allocator.allocate(sizeof(v2x_msgs__msg__GenericLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__GenericLane));
  bool success = v2x_msgs__msg__GenericLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__GenericLane__destroy(v2x_msgs__msg__GenericLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__GenericLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__GenericLane__Sequence__init(v2x_msgs__msg__GenericLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GenericLane * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__GenericLane *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__GenericLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__GenericLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__GenericLane__fini(&data[i - 1]);
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
v2x_msgs__msg__GenericLane__Sequence__fini(v2x_msgs__msg__GenericLane__Sequence * array)
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
      v2x_msgs__msg__GenericLane__fini(&array->data[i]);
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

v2x_msgs__msg__GenericLane__Sequence *
v2x_msgs__msg__GenericLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__GenericLane__Sequence * array = (v2x_msgs__msg__GenericLane__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__GenericLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__GenericLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__GenericLane__Sequence__destroy(v2x_msgs__msg__GenericLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__GenericLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__GenericLane__Sequence__are_equal(const v2x_msgs__msg__GenericLane__Sequence * lhs, const v2x_msgs__msg__GenericLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__GenericLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__GenericLane__Sequence__copy(
  const v2x_msgs__msg__GenericLane__Sequence * input,
  v2x_msgs__msg__GenericLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__GenericLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__GenericLane * data =
      (v2x_msgs__msg__GenericLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__GenericLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__GenericLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__GenericLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
