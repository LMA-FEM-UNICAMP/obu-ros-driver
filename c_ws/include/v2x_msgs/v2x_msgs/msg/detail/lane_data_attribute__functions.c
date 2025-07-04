// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/lane_data_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path_end_point_angle`
#include "v2x_msgs/msg/detail/delta_angle__functions.h"
// Member `lane_crown_point_center`
// Member `lane_crown_point_left`
// Member `lane_crown_point_right`
#include "v2x_msgs/msg/detail/roadway_crown_angle__functions.h"
// Member `lane_angle`
#include "v2x_msgs/msg/detail/merge_diverge_node_angle__functions.h"
// Member `speed_limits`
#include "v2x_msgs/msg/detail/speed_limit_list__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_lane_attributes__functions.h"

bool
v2x_msgs__msg__LaneDataAttribute__init(v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // lane_data_attribute_container_select
  msg->lane_data_attribute_container_select = 0ll;
  // path_end_point_angle
  if (!v2x_msgs__msg__DeltaAngle__init(&msg->path_end_point_angle)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // lane_crown_point_center
  if (!v2x_msgs__msg__RoadwayCrownAngle__init(&msg->lane_crown_point_center)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // lane_crown_point_left
  if (!v2x_msgs__msg__RoadwayCrownAngle__init(&msg->lane_crown_point_left)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // lane_crown_point_right
  if (!v2x_msgs__msg__RoadwayCrownAngle__init(&msg->lane_crown_point_right)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // lane_angle
  if (!v2x_msgs__msg__MergeDivergeNodeAngle__init(&msg->lane_angle)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegLaneAttributes__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LaneDataAttribute__fini(v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return;
  }
  // lane_data_attribute_container_select
  // path_end_point_angle
  v2x_msgs__msg__DeltaAngle__fini(&msg->path_end_point_angle);
  // lane_crown_point_center
  v2x_msgs__msg__RoadwayCrownAngle__fini(&msg->lane_crown_point_center);
  // lane_crown_point_left
  v2x_msgs__msg__RoadwayCrownAngle__fini(&msg->lane_crown_point_left);
  // lane_crown_point_right
  v2x_msgs__msg__RoadwayCrownAngle__fini(&msg->lane_crown_point_right);
  // lane_angle
  v2x_msgs__msg__MergeDivergeNodeAngle__fini(&msg->lane_angle);
  // speed_limits
  v2x_msgs__msg__SpeedLimitList__fini(&msg->speed_limits);
  // regional
  v2x_msgs__msg__RegLaneAttributes__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__LaneDataAttribute__are_equal(const v2x_msgs__msg__LaneDataAttribute * lhs, const v2x_msgs__msg__LaneDataAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_data_attribute_container_select
  if (lhs->lane_data_attribute_container_select != rhs->lane_data_attribute_container_select) {
    return false;
  }
  // path_end_point_angle
  if (!v2x_msgs__msg__DeltaAngle__are_equal(
      &(lhs->path_end_point_angle), &(rhs->path_end_point_angle)))
  {
    return false;
  }
  // lane_crown_point_center
  if (!v2x_msgs__msg__RoadwayCrownAngle__are_equal(
      &(lhs->lane_crown_point_center), &(rhs->lane_crown_point_center)))
  {
    return false;
  }
  // lane_crown_point_left
  if (!v2x_msgs__msg__RoadwayCrownAngle__are_equal(
      &(lhs->lane_crown_point_left), &(rhs->lane_crown_point_left)))
  {
    return false;
  }
  // lane_crown_point_right
  if (!v2x_msgs__msg__RoadwayCrownAngle__are_equal(
      &(lhs->lane_crown_point_right), &(rhs->lane_crown_point_right)))
  {
    return false;
  }
  // lane_angle
  if (!v2x_msgs__msg__MergeDivergeNodeAngle__are_equal(
      &(lhs->lane_angle), &(rhs->lane_angle)))
  {
    return false;
  }
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegLaneAttributes__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LaneDataAttribute__copy(
  const v2x_msgs__msg__LaneDataAttribute * input,
  v2x_msgs__msg__LaneDataAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_data_attribute_container_select
  output->lane_data_attribute_container_select = input->lane_data_attribute_container_select;
  // path_end_point_angle
  if (!v2x_msgs__msg__DeltaAngle__copy(
      &(input->path_end_point_angle), &(output->path_end_point_angle)))
  {
    return false;
  }
  // lane_crown_point_center
  if (!v2x_msgs__msg__RoadwayCrownAngle__copy(
      &(input->lane_crown_point_center), &(output->lane_crown_point_center)))
  {
    return false;
  }
  // lane_crown_point_left
  if (!v2x_msgs__msg__RoadwayCrownAngle__copy(
      &(input->lane_crown_point_left), &(output->lane_crown_point_left)))
  {
    return false;
  }
  // lane_crown_point_right
  if (!v2x_msgs__msg__RoadwayCrownAngle__copy(
      &(input->lane_crown_point_right), &(output->lane_crown_point_right)))
  {
    return false;
  }
  // lane_angle
  if (!v2x_msgs__msg__MergeDivergeNodeAngle__copy(
      &(input->lane_angle), &(output->lane_angle)))
  {
    return false;
  }
  // speed_limits
  if (!v2x_msgs__msg__SpeedLimitList__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegLaneAttributes__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LaneDataAttribute *
v2x_msgs__msg__LaneDataAttribute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneDataAttribute * msg = (v2x_msgs__msg__LaneDataAttribute *)allocator.allocate(sizeof(v2x_msgs__msg__LaneDataAttribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LaneDataAttribute));
  bool success = v2x_msgs__msg__LaneDataAttribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LaneDataAttribute__destroy(v2x_msgs__msg__LaneDataAttribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LaneDataAttribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LaneDataAttribute__Sequence__init(v2x_msgs__msg__LaneDataAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneDataAttribute * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LaneDataAttribute *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LaneDataAttribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LaneDataAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LaneDataAttribute__fini(&data[i - 1]);
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
v2x_msgs__msg__LaneDataAttribute__Sequence__fini(v2x_msgs__msg__LaneDataAttribute__Sequence * array)
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
      v2x_msgs__msg__LaneDataAttribute__fini(&array->data[i]);
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

v2x_msgs__msg__LaneDataAttribute__Sequence *
v2x_msgs__msg__LaneDataAttribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneDataAttribute__Sequence * array = (v2x_msgs__msg__LaneDataAttribute__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LaneDataAttribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LaneDataAttribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LaneDataAttribute__Sequence__destroy(v2x_msgs__msg__LaneDataAttribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LaneDataAttribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(const v2x_msgs__msg__LaneDataAttribute__Sequence * lhs, const v2x_msgs__msg__LaneDataAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LaneDataAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
  const v2x_msgs__msg__LaneDataAttribute__Sequence * input,
  v2x_msgs__msg__LaneDataAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LaneDataAttribute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LaneDataAttribute * data =
      (v2x_msgs__msg__LaneDataAttribute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LaneDataAttribute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LaneDataAttribute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LaneDataAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
