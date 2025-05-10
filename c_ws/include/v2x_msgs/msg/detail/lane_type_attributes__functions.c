// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/lane_type_attributes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle`
#include "v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"
// Member `crosswalk`
#include "v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"
// Member `bike_lane`
#include "v2x_msgs/msg/detail/lane_attributes_bike__functions.h"
// Member `sidewalk`
#include "v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"
// Member `median`
#include "v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"
// Member `striping`
#include "v2x_msgs/msg/detail/lane_attributes_striping__functions.h"
// Member `tracked_vehicle`
#include "v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"
// Member `parking`
#include "v2x_msgs/msg/detail/lane_attributes_parking__functions.h"

bool
v2x_msgs__msg__LaneTypeAttributes__init(v2x_msgs__msg__LaneTypeAttributes * msg)
{
  if (!msg) {
    return false;
  }
  // lane_type_attributes_container_select
  msg->lane_type_attributes_container_select = 0ll;
  // vehicle
  if (!v2x_msgs__msg__LaneAttributesVehicle__init(&msg->vehicle)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // crosswalk
  if (!v2x_msgs__msg__LaneAttributesCrosswalk__init(&msg->crosswalk)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // bike_lane
  if (!v2x_msgs__msg__LaneAttributesBike__init(&msg->bike_lane)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // sidewalk
  if (!v2x_msgs__msg__LaneAttributesSidewalk__init(&msg->sidewalk)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // median
  if (!v2x_msgs__msg__LaneAttributesBarrier__init(&msg->median)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // striping
  if (!v2x_msgs__msg__LaneAttributesStriping__init(&msg->striping)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // tracked_vehicle
  if (!v2x_msgs__msg__LaneAttributesTrackedVehicle__init(&msg->tracked_vehicle)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  // parking
  if (!v2x_msgs__msg__LaneAttributesParking__init(&msg->parking)) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LaneTypeAttributes__fini(v2x_msgs__msg__LaneTypeAttributes * msg)
{
  if (!msg) {
    return;
  }
  // lane_type_attributes_container_select
  // vehicle
  v2x_msgs__msg__LaneAttributesVehicle__fini(&msg->vehicle);
  // crosswalk
  v2x_msgs__msg__LaneAttributesCrosswalk__fini(&msg->crosswalk);
  // bike_lane
  v2x_msgs__msg__LaneAttributesBike__fini(&msg->bike_lane);
  // sidewalk
  v2x_msgs__msg__LaneAttributesSidewalk__fini(&msg->sidewalk);
  // median
  v2x_msgs__msg__LaneAttributesBarrier__fini(&msg->median);
  // striping
  v2x_msgs__msg__LaneAttributesStriping__fini(&msg->striping);
  // tracked_vehicle
  v2x_msgs__msg__LaneAttributesTrackedVehicle__fini(&msg->tracked_vehicle);
  // parking
  v2x_msgs__msg__LaneAttributesParking__fini(&msg->parking);
}

bool
v2x_msgs__msg__LaneTypeAttributes__are_equal(const v2x_msgs__msg__LaneTypeAttributes * lhs, const v2x_msgs__msg__LaneTypeAttributes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_type_attributes_container_select
  if (lhs->lane_type_attributes_container_select != rhs->lane_type_attributes_container_select) {
    return false;
  }
  // vehicle
  if (!v2x_msgs__msg__LaneAttributesVehicle__are_equal(
      &(lhs->vehicle), &(rhs->vehicle)))
  {
    return false;
  }
  // crosswalk
  if (!v2x_msgs__msg__LaneAttributesCrosswalk__are_equal(
      &(lhs->crosswalk), &(rhs->crosswalk)))
  {
    return false;
  }
  // bike_lane
  if (!v2x_msgs__msg__LaneAttributesBike__are_equal(
      &(lhs->bike_lane), &(rhs->bike_lane)))
  {
    return false;
  }
  // sidewalk
  if (!v2x_msgs__msg__LaneAttributesSidewalk__are_equal(
      &(lhs->sidewalk), &(rhs->sidewalk)))
  {
    return false;
  }
  // median
  if (!v2x_msgs__msg__LaneAttributesBarrier__are_equal(
      &(lhs->median), &(rhs->median)))
  {
    return false;
  }
  // striping
  if (!v2x_msgs__msg__LaneAttributesStriping__are_equal(
      &(lhs->striping), &(rhs->striping)))
  {
    return false;
  }
  // tracked_vehicle
  if (!v2x_msgs__msg__LaneAttributesTrackedVehicle__are_equal(
      &(lhs->tracked_vehicle), &(rhs->tracked_vehicle)))
  {
    return false;
  }
  // parking
  if (!v2x_msgs__msg__LaneAttributesParking__are_equal(
      &(lhs->parking), &(rhs->parking)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LaneTypeAttributes__copy(
  const v2x_msgs__msg__LaneTypeAttributes * input,
  v2x_msgs__msg__LaneTypeAttributes * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_type_attributes_container_select
  output->lane_type_attributes_container_select = input->lane_type_attributes_container_select;
  // vehicle
  if (!v2x_msgs__msg__LaneAttributesVehicle__copy(
      &(input->vehicle), &(output->vehicle)))
  {
    return false;
  }
  // crosswalk
  if (!v2x_msgs__msg__LaneAttributesCrosswalk__copy(
      &(input->crosswalk), &(output->crosswalk)))
  {
    return false;
  }
  // bike_lane
  if (!v2x_msgs__msg__LaneAttributesBike__copy(
      &(input->bike_lane), &(output->bike_lane)))
  {
    return false;
  }
  // sidewalk
  if (!v2x_msgs__msg__LaneAttributesSidewalk__copy(
      &(input->sidewalk), &(output->sidewalk)))
  {
    return false;
  }
  // median
  if (!v2x_msgs__msg__LaneAttributesBarrier__copy(
      &(input->median), &(output->median)))
  {
    return false;
  }
  // striping
  if (!v2x_msgs__msg__LaneAttributesStriping__copy(
      &(input->striping), &(output->striping)))
  {
    return false;
  }
  // tracked_vehicle
  if (!v2x_msgs__msg__LaneAttributesTrackedVehicle__copy(
      &(input->tracked_vehicle), &(output->tracked_vehicle)))
  {
    return false;
  }
  // parking
  if (!v2x_msgs__msg__LaneAttributesParking__copy(
      &(input->parking), &(output->parking)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LaneTypeAttributes *
v2x_msgs__msg__LaneTypeAttributes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneTypeAttributes * msg = (v2x_msgs__msg__LaneTypeAttributes *)allocator.allocate(sizeof(v2x_msgs__msg__LaneTypeAttributes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LaneTypeAttributes));
  bool success = v2x_msgs__msg__LaneTypeAttributes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LaneTypeAttributes__destroy(v2x_msgs__msg__LaneTypeAttributes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LaneTypeAttributes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LaneTypeAttributes__Sequence__init(v2x_msgs__msg__LaneTypeAttributes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneTypeAttributes * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LaneTypeAttributes *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LaneTypeAttributes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LaneTypeAttributes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LaneTypeAttributes__fini(&data[i - 1]);
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
v2x_msgs__msg__LaneTypeAttributes__Sequence__fini(v2x_msgs__msg__LaneTypeAttributes__Sequence * array)
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
      v2x_msgs__msg__LaneTypeAttributes__fini(&array->data[i]);
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

v2x_msgs__msg__LaneTypeAttributes__Sequence *
v2x_msgs__msg__LaneTypeAttributes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LaneTypeAttributes__Sequence * array = (v2x_msgs__msg__LaneTypeAttributes__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LaneTypeAttributes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LaneTypeAttributes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LaneTypeAttributes__Sequence__destroy(v2x_msgs__msg__LaneTypeAttributes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LaneTypeAttributes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LaneTypeAttributes__Sequence__are_equal(const v2x_msgs__msg__LaneTypeAttributes__Sequence * lhs, const v2x_msgs__msg__LaneTypeAttributes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LaneTypeAttributes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LaneTypeAttributes__Sequence__copy(
  const v2x_msgs__msg__LaneTypeAttributes__Sequence * input,
  v2x_msgs__msg__LaneTypeAttributes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LaneTypeAttributes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LaneTypeAttributes * data =
      (v2x_msgs__msg__LaneTypeAttributes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LaneTypeAttributes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LaneTypeAttributes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LaneTypeAttributes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
