// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AvcPart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/avc_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection_zone_ids`
// Member `relevance_zone_ids`
#include "v2x_msgs/msg/detail/zone_ids__functions.h"
// Member `direction`
#include "v2x_msgs/msg/detail/direction__functions.h"
// Member `applicable_lanes`
#include "v2x_msgs/msg/detail/lane_positions__functions.h"
// Member `vehicle_characteristics`
#include "v2x_msgs/msg/detail/vehicle_characteristics_list__functions.h"
// Member `automated_vehicle_rules`
#include "v2x_msgs/msg/detail/automated_vehicle_rules__functions.h"
// Member `platooning_rules`
#include "v2x_msgs/msg/detail/platooning_rules__functions.h"

bool
v2x_msgs__msg__AvcPart__init(v2x_msgs__msg__AvcPart * msg)
{
  if (!msg) {
    return false;
  }
  // detection_zone_ids_present
  msg->detection_zone_ids_present = false;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->detection_zone_ids)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->relevance_zone_ids)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // direction_present
  msg->direction_present = false;
  // direction
  if (!v2x_msgs__msg__Direction__init(&msg->direction)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // applicable_lanes_present
  msg->applicable_lanes_present = false;
  // applicable_lanes
  if (!v2x_msgs__msg__LanePositions__init(&msg->applicable_lanes)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // vehicle_characteristics_present
  msg->vehicle_characteristics_present = false;
  // vehicle_characteristics
  if (!v2x_msgs__msg__VehicleCharacteristicsList__init(&msg->vehicle_characteristics)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // automated_vehicle_rules_present
  msg->automated_vehicle_rules_present = false;
  // automated_vehicle_rules
  if (!v2x_msgs__msg__AutomatedVehicleRules__init(&msg->automated_vehicle_rules)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  // platooning_rules_present
  msg->platooning_rules_present = false;
  // platooning_rules
  if (!v2x_msgs__msg__PlatooningRules__init(&msg->platooning_rules)) {
    v2x_msgs__msg__AvcPart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AvcPart__fini(v2x_msgs__msg__AvcPart * msg)
{
  if (!msg) {
    return;
  }
  // detection_zone_ids_present
  // detection_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->detection_zone_ids);
  // relevance_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->relevance_zone_ids);
  // direction_present
  // direction
  v2x_msgs__msg__Direction__fini(&msg->direction);
  // applicable_lanes_present
  // applicable_lanes
  v2x_msgs__msg__LanePositions__fini(&msg->applicable_lanes);
  // vehicle_characteristics_present
  // vehicle_characteristics
  v2x_msgs__msg__VehicleCharacteristicsList__fini(&msg->vehicle_characteristics);
  // automated_vehicle_rules_present
  // automated_vehicle_rules
  v2x_msgs__msg__AutomatedVehicleRules__fini(&msg->automated_vehicle_rules);
  // platooning_rules_present
  // platooning_rules
  v2x_msgs__msg__PlatooningRules__fini(&msg->platooning_rules);
}

bool
v2x_msgs__msg__AvcPart__are_equal(const v2x_msgs__msg__AvcPart * lhs, const v2x_msgs__msg__AvcPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection_zone_ids_present
  if (lhs->detection_zone_ids_present != rhs->detection_zone_ids_present) {
    return false;
  }
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->detection_zone_ids), &(rhs->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->relevance_zone_ids), &(rhs->relevance_zone_ids)))
  {
    return false;
  }
  // direction_present
  if (lhs->direction_present != rhs->direction_present) {
    return false;
  }
  // direction
  if (!v2x_msgs__msg__Direction__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // applicable_lanes_present
  if (lhs->applicable_lanes_present != rhs->applicable_lanes_present) {
    return false;
  }
  // applicable_lanes
  if (!v2x_msgs__msg__LanePositions__are_equal(
      &(lhs->applicable_lanes), &(rhs->applicable_lanes)))
  {
    return false;
  }
  // vehicle_characteristics_present
  if (lhs->vehicle_characteristics_present != rhs->vehicle_characteristics_present) {
    return false;
  }
  // vehicle_characteristics
  if (!v2x_msgs__msg__VehicleCharacteristicsList__are_equal(
      &(lhs->vehicle_characteristics), &(rhs->vehicle_characteristics)))
  {
    return false;
  }
  // automated_vehicle_rules_present
  if (lhs->automated_vehicle_rules_present != rhs->automated_vehicle_rules_present) {
    return false;
  }
  // automated_vehicle_rules
  if (!v2x_msgs__msg__AutomatedVehicleRules__are_equal(
      &(lhs->automated_vehicle_rules), &(rhs->automated_vehicle_rules)))
  {
    return false;
  }
  // platooning_rules_present
  if (lhs->platooning_rules_present != rhs->platooning_rules_present) {
    return false;
  }
  // platooning_rules
  if (!v2x_msgs__msg__PlatooningRules__are_equal(
      &(lhs->platooning_rules), &(rhs->platooning_rules)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AvcPart__copy(
  const v2x_msgs__msg__AvcPart * input,
  v2x_msgs__msg__AvcPart * output)
{
  if (!input || !output) {
    return false;
  }
  // detection_zone_ids_present
  output->detection_zone_ids_present = input->detection_zone_ids_present;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->detection_zone_ids), &(output->detection_zone_ids)))
  {
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->relevance_zone_ids), &(output->relevance_zone_ids)))
  {
    return false;
  }
  // direction_present
  output->direction_present = input->direction_present;
  // direction
  if (!v2x_msgs__msg__Direction__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // applicable_lanes_present
  output->applicable_lanes_present = input->applicable_lanes_present;
  // applicable_lanes
  if (!v2x_msgs__msg__LanePositions__copy(
      &(input->applicable_lanes), &(output->applicable_lanes)))
  {
    return false;
  }
  // vehicle_characteristics_present
  output->vehicle_characteristics_present = input->vehicle_characteristics_present;
  // vehicle_characteristics
  if (!v2x_msgs__msg__VehicleCharacteristicsList__copy(
      &(input->vehicle_characteristics), &(output->vehicle_characteristics)))
  {
    return false;
  }
  // automated_vehicle_rules_present
  output->automated_vehicle_rules_present = input->automated_vehicle_rules_present;
  // automated_vehicle_rules
  if (!v2x_msgs__msg__AutomatedVehicleRules__copy(
      &(input->automated_vehicle_rules), &(output->automated_vehicle_rules)))
  {
    return false;
  }
  // platooning_rules_present
  output->platooning_rules_present = input->platooning_rules_present;
  // platooning_rules
  if (!v2x_msgs__msg__PlatooningRules__copy(
      &(input->platooning_rules), &(output->platooning_rules)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AvcPart *
v2x_msgs__msg__AvcPart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AvcPart * msg = (v2x_msgs__msg__AvcPart *)allocator.allocate(sizeof(v2x_msgs__msg__AvcPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AvcPart));
  bool success = v2x_msgs__msg__AvcPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AvcPart__destroy(v2x_msgs__msg__AvcPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AvcPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AvcPart__Sequence__init(v2x_msgs__msg__AvcPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AvcPart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AvcPart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AvcPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AvcPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AvcPart__fini(&data[i - 1]);
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
v2x_msgs__msg__AvcPart__Sequence__fini(v2x_msgs__msg__AvcPart__Sequence * array)
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
      v2x_msgs__msg__AvcPart__fini(&array->data[i]);
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

v2x_msgs__msg__AvcPart__Sequence *
v2x_msgs__msg__AvcPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AvcPart__Sequence * array = (v2x_msgs__msg__AvcPart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AvcPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AvcPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AvcPart__Sequence__destroy(v2x_msgs__msg__AvcPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AvcPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AvcPart__Sequence__are_equal(const v2x_msgs__msg__AvcPart__Sequence * lhs, const v2x_msgs__msg__AvcPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AvcPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AvcPart__Sequence__copy(
  const v2x_msgs__msg__AvcPart__Sequence * input,
  v2x_msgs__msg__AvcPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AvcPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AvcPart * data =
      (v2x_msgs__msg__AvcPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AvcPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AvcPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AvcPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
