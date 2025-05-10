// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TcPart.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/tc_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection_zone_ids`
// Member `relevance_zone_ids`
// Member `driver_awareness_zone_ids`
#include "v2x_msgs/msg/detail/zone_ids__functions.h"
// Member `direction`
#include "v2x_msgs/msg/detail/direction__functions.h"
// Member `applicable_lanes`
#include "v2x_msgs/msg/detail/lane_positions__functions.h"
// Member `text`
#include "v2x_msgs/msg/detail/text_lines__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `ivi_type`
#include "v2x_msgs/msg/detail/ivi_type__functions.h"
// Member `lane_status`
#include "v2x_msgs/msg/detail/lane_status__functions.h"
// Member `vehicle_characteristics`
#include "v2x_msgs/msg/detail/vehicle_characteristics_list__functions.h"

bool
v2x_msgs__msg__TcPart__init(v2x_msgs__msg__TcPart * msg)
{
  if (!msg) {
    return false;
  }
  // detection_zone_ids_present
  msg->detection_zone_ids_present = false;
  // detection_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->detection_zone_ids)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // relevance_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->relevance_zone_ids)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // direction_present
  msg->direction_present = false;
  // direction
  if (!v2x_msgs__msg__Direction__init(&msg->direction)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // driver_awareness_zone_ids_present
  msg->driver_awareness_zone_ids_present = false;
  // driver_awareness_zone_ids
  if (!v2x_msgs__msg__ZoneIds__init(&msg->driver_awareness_zone_ids)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // minimum_awareness_time_present
  msg->minimum_awareness_time_present = false;
  // minimum_awareness_time
  // applicable_lanes_present
  msg->applicable_lanes_present = false;
  // applicable_lanes
  if (!v2x_msgs__msg__LanePositions__init(&msg->applicable_lanes)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // layout_id_present
  msg->layout_id_present = false;
  // layout_id
  // pre_storedlayout_id_present
  msg->pre_storedlayout_id_present = false;
  // pre_storedlayout_id
  // text_present
  msg->text_present = false;
  // text
  if (!v2x_msgs__msg__TextLines__init(&msg->text)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->data, 0)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // ivi_type
  if (!v2x_msgs__msg__IviType__init(&msg->ivi_type)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // lane_status_present
  msg->lane_status_present = false;
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__init(&msg->lane_status)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  // vehicle_characteristics_present
  msg->vehicle_characteristics_present = false;
  // vehicle_characteristics
  if (!v2x_msgs__msg__VehicleCharacteristicsList__init(&msg->vehicle_characteristics)) {
    v2x_msgs__msg__TcPart__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TcPart__fini(v2x_msgs__msg__TcPart * msg)
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
  // driver_awareness_zone_ids_present
  // driver_awareness_zone_ids
  v2x_msgs__msg__ZoneIds__fini(&msg->driver_awareness_zone_ids);
  // minimum_awareness_time_present
  // minimum_awareness_time
  // applicable_lanes_present
  // applicable_lanes
  v2x_msgs__msg__LanePositions__fini(&msg->applicable_lanes);
  // layout_id_present
  // layout_id
  // pre_storedlayout_id_present
  // pre_storedlayout_id
  // text_present
  // text
  v2x_msgs__msg__TextLines__fini(&msg->text);
  // data
  rosidl_runtime_c__int64__Sequence__fini(&msg->data);
  // ivi_type
  v2x_msgs__msg__IviType__fini(&msg->ivi_type);
  // lane_status_present
  // lane_status
  v2x_msgs__msg__LaneStatus__fini(&msg->lane_status);
  // vehicle_characteristics_present
  // vehicle_characteristics
  v2x_msgs__msg__VehicleCharacteristicsList__fini(&msg->vehicle_characteristics);
}

bool
v2x_msgs__msg__TcPart__are_equal(const v2x_msgs__msg__TcPart * lhs, const v2x_msgs__msg__TcPart * rhs)
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
  // driver_awareness_zone_ids_present
  if (lhs->driver_awareness_zone_ids_present != rhs->driver_awareness_zone_ids_present) {
    return false;
  }
  // driver_awareness_zone_ids
  if (!v2x_msgs__msg__ZoneIds__are_equal(
      &(lhs->driver_awareness_zone_ids), &(rhs->driver_awareness_zone_ids)))
  {
    return false;
  }
  // minimum_awareness_time_present
  if (lhs->minimum_awareness_time_present != rhs->minimum_awareness_time_present) {
    return false;
  }
  // minimum_awareness_time
  if (lhs->minimum_awareness_time != rhs->minimum_awareness_time) {
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
  // layout_id_present
  if (lhs->layout_id_present != rhs->layout_id_present) {
    return false;
  }
  // layout_id
  if (lhs->layout_id != rhs->layout_id) {
    return false;
  }
  // pre_storedlayout_id_present
  if (lhs->pre_storedlayout_id_present != rhs->pre_storedlayout_id_present) {
    return false;
  }
  // pre_storedlayout_id
  if (lhs->pre_storedlayout_id != rhs->pre_storedlayout_id) {
    return false;
  }
  // text_present
  if (lhs->text_present != rhs->text_present) {
    return false;
  }
  // text
  if (!v2x_msgs__msg__TextLines__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // ivi_type
  if (!v2x_msgs__msg__IviType__are_equal(
      &(lhs->ivi_type), &(rhs->ivi_type)))
  {
    return false;
  }
  // lane_status_present
  if (lhs->lane_status_present != rhs->lane_status_present) {
    return false;
  }
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__are_equal(
      &(lhs->lane_status), &(rhs->lane_status)))
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
  return true;
}

bool
v2x_msgs__msg__TcPart__copy(
  const v2x_msgs__msg__TcPart * input,
  v2x_msgs__msg__TcPart * output)
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
  // driver_awareness_zone_ids_present
  output->driver_awareness_zone_ids_present = input->driver_awareness_zone_ids_present;
  // driver_awareness_zone_ids
  if (!v2x_msgs__msg__ZoneIds__copy(
      &(input->driver_awareness_zone_ids), &(output->driver_awareness_zone_ids)))
  {
    return false;
  }
  // minimum_awareness_time_present
  output->minimum_awareness_time_present = input->minimum_awareness_time_present;
  // minimum_awareness_time
  output->minimum_awareness_time = input->minimum_awareness_time;
  // applicable_lanes_present
  output->applicable_lanes_present = input->applicable_lanes_present;
  // applicable_lanes
  if (!v2x_msgs__msg__LanePositions__copy(
      &(input->applicable_lanes), &(output->applicable_lanes)))
  {
    return false;
  }
  // layout_id_present
  output->layout_id_present = input->layout_id_present;
  // layout_id
  output->layout_id = input->layout_id;
  // pre_storedlayout_id_present
  output->pre_storedlayout_id_present = input->pre_storedlayout_id_present;
  // pre_storedlayout_id
  output->pre_storedlayout_id = input->pre_storedlayout_id;
  // text_present
  output->text_present = input->text_present;
  // text
  if (!v2x_msgs__msg__TextLines__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // ivi_type
  if (!v2x_msgs__msg__IviType__copy(
      &(input->ivi_type), &(output->ivi_type)))
  {
    return false;
  }
  // lane_status_present
  output->lane_status_present = input->lane_status_present;
  // lane_status
  if (!v2x_msgs__msg__LaneStatus__copy(
      &(input->lane_status), &(output->lane_status)))
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
  return true;
}

v2x_msgs__msg__TcPart *
v2x_msgs__msg__TcPart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TcPart * msg = (v2x_msgs__msg__TcPart *)allocator.allocate(sizeof(v2x_msgs__msg__TcPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TcPart));
  bool success = v2x_msgs__msg__TcPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TcPart__destroy(v2x_msgs__msg__TcPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TcPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TcPart__Sequence__init(v2x_msgs__msg__TcPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TcPart * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TcPart *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TcPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TcPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TcPart__fini(&data[i - 1]);
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
v2x_msgs__msg__TcPart__Sequence__fini(v2x_msgs__msg__TcPart__Sequence * array)
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
      v2x_msgs__msg__TcPart__fini(&array->data[i]);
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

v2x_msgs__msg__TcPart__Sequence *
v2x_msgs__msg__TcPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TcPart__Sequence * array = (v2x_msgs__msg__TcPart__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TcPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TcPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TcPart__Sequence__destroy(v2x_msgs__msg__TcPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TcPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TcPart__Sequence__are_equal(const v2x_msgs__msg__TcPart__Sequence * lhs, const v2x_msgs__msg__TcPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TcPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TcPart__Sequence__copy(
  const v2x_msgs__msg__TcPart__Sequence * input,
  v2x_msgs__msg__TcPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TcPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TcPart * data =
      (v2x_msgs__msg__TcPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TcPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TcPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TcPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
