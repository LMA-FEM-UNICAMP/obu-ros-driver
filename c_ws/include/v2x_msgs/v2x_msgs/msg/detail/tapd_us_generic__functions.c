// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TAPDUsGeneric.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/tapd_us_generic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actionrequest`
#include "v2x_msgs/msg/detail/action_request__functions.h"
// Member `actionresponse`
#include "v2x_msgs/msg/detail/action_response__functions.h"
// Member `eventreportrequest`
#include "v2x_msgs/msg/detail/event_report_request__functions.h"
// Member `eventreportresponse`
#include "v2x_msgs/msg/detail/event_report_response__functions.h"
// Member `setrequest`
#include "v2x_msgs/msg/detail/set_request__functions.h"
// Member `setresponse`
#include "v2x_msgs/msg/detail/set_response__functions.h"
// Member `getrequest`
#include "v2x_msgs/msg/detail/get_request__functions.h"
// Member `getresponse`
#include "v2x_msgs/msg/detail/get_response__functions.h"
// Member `initialisationrequest`
#include "v2x_msgs/msg/detail/initialisation_request__functions.h"
// Member `initialisationresponse`
#include "v2x_msgs/msg/detail/initialisation_response__functions.h"

bool
v2x_msgs__msg__TAPDUsGeneric__init(v2x_msgs__msg__TAPDUsGeneric * msg)
{
  if (!msg) {
    return false;
  }
  // tapdusgeneric_container_select
  msg->tapdusgeneric_container_select = 0ll;
  // actionrequest
  if (!v2x_msgs__msg__ActionRequest__init(&msg->actionrequest)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // actionresponse
  if (!v2x_msgs__msg__ActionResponse__init(&msg->actionresponse)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // eventreportrequest
  if (!v2x_msgs__msg__EventReportRequest__init(&msg->eventreportrequest)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // eventreportresponse
  if (!v2x_msgs__msg__EventReportResponse__init(&msg->eventreportresponse)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // setrequest
  if (!v2x_msgs__msg__SetRequest__init(&msg->setrequest)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // setresponse
  if (!v2x_msgs__msg__SetResponse__init(&msg->setresponse)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // getrequest
  if (!v2x_msgs__msg__GetRequest__init(&msg->getrequest)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // getresponse
  if (!v2x_msgs__msg__GetResponse__init(&msg->getresponse)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // initialisationrequest
  if (!v2x_msgs__msg__InitialisationRequest__init(&msg->initialisationrequest)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  // initialisationresponse
  if (!v2x_msgs__msg__InitialisationResponse__init(&msg->initialisationresponse)) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TAPDUsGeneric__fini(v2x_msgs__msg__TAPDUsGeneric * msg)
{
  if (!msg) {
    return;
  }
  // tapdusgeneric_container_select
  // actionrequest
  v2x_msgs__msg__ActionRequest__fini(&msg->actionrequest);
  // actionresponse
  v2x_msgs__msg__ActionResponse__fini(&msg->actionresponse);
  // eventreportrequest
  v2x_msgs__msg__EventReportRequest__fini(&msg->eventreportrequest);
  // eventreportresponse
  v2x_msgs__msg__EventReportResponse__fini(&msg->eventreportresponse);
  // setrequest
  v2x_msgs__msg__SetRequest__fini(&msg->setrequest);
  // setresponse
  v2x_msgs__msg__SetResponse__fini(&msg->setresponse);
  // getrequest
  v2x_msgs__msg__GetRequest__fini(&msg->getrequest);
  // getresponse
  v2x_msgs__msg__GetResponse__fini(&msg->getresponse);
  // initialisationrequest
  v2x_msgs__msg__InitialisationRequest__fini(&msg->initialisationrequest);
  // initialisationresponse
  v2x_msgs__msg__InitialisationResponse__fini(&msg->initialisationresponse);
}

bool
v2x_msgs__msg__TAPDUsGeneric__are_equal(const v2x_msgs__msg__TAPDUsGeneric * lhs, const v2x_msgs__msg__TAPDUsGeneric * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tapdusgeneric_container_select
  if (lhs->tapdusgeneric_container_select != rhs->tapdusgeneric_container_select) {
    return false;
  }
  // actionrequest
  if (!v2x_msgs__msg__ActionRequest__are_equal(
      &(lhs->actionrequest), &(rhs->actionrequest)))
  {
    return false;
  }
  // actionresponse
  if (!v2x_msgs__msg__ActionResponse__are_equal(
      &(lhs->actionresponse), &(rhs->actionresponse)))
  {
    return false;
  }
  // eventreportrequest
  if (!v2x_msgs__msg__EventReportRequest__are_equal(
      &(lhs->eventreportrequest), &(rhs->eventreportrequest)))
  {
    return false;
  }
  // eventreportresponse
  if (!v2x_msgs__msg__EventReportResponse__are_equal(
      &(lhs->eventreportresponse), &(rhs->eventreportresponse)))
  {
    return false;
  }
  // setrequest
  if (!v2x_msgs__msg__SetRequest__are_equal(
      &(lhs->setrequest), &(rhs->setrequest)))
  {
    return false;
  }
  // setresponse
  if (!v2x_msgs__msg__SetResponse__are_equal(
      &(lhs->setresponse), &(rhs->setresponse)))
  {
    return false;
  }
  // getrequest
  if (!v2x_msgs__msg__GetRequest__are_equal(
      &(lhs->getrequest), &(rhs->getrequest)))
  {
    return false;
  }
  // getresponse
  if (!v2x_msgs__msg__GetResponse__are_equal(
      &(lhs->getresponse), &(rhs->getresponse)))
  {
    return false;
  }
  // initialisationrequest
  if (!v2x_msgs__msg__InitialisationRequest__are_equal(
      &(lhs->initialisationrequest), &(rhs->initialisationrequest)))
  {
    return false;
  }
  // initialisationresponse
  if (!v2x_msgs__msg__InitialisationResponse__are_equal(
      &(lhs->initialisationresponse), &(rhs->initialisationresponse)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TAPDUsGeneric__copy(
  const v2x_msgs__msg__TAPDUsGeneric * input,
  v2x_msgs__msg__TAPDUsGeneric * output)
{
  if (!input || !output) {
    return false;
  }
  // tapdusgeneric_container_select
  output->tapdusgeneric_container_select = input->tapdusgeneric_container_select;
  // actionrequest
  if (!v2x_msgs__msg__ActionRequest__copy(
      &(input->actionrequest), &(output->actionrequest)))
  {
    return false;
  }
  // actionresponse
  if (!v2x_msgs__msg__ActionResponse__copy(
      &(input->actionresponse), &(output->actionresponse)))
  {
    return false;
  }
  // eventreportrequest
  if (!v2x_msgs__msg__EventReportRequest__copy(
      &(input->eventreportrequest), &(output->eventreportrequest)))
  {
    return false;
  }
  // eventreportresponse
  if (!v2x_msgs__msg__EventReportResponse__copy(
      &(input->eventreportresponse), &(output->eventreportresponse)))
  {
    return false;
  }
  // setrequest
  if (!v2x_msgs__msg__SetRequest__copy(
      &(input->setrequest), &(output->setrequest)))
  {
    return false;
  }
  // setresponse
  if (!v2x_msgs__msg__SetResponse__copy(
      &(input->setresponse), &(output->setresponse)))
  {
    return false;
  }
  // getrequest
  if (!v2x_msgs__msg__GetRequest__copy(
      &(input->getrequest), &(output->getrequest)))
  {
    return false;
  }
  // getresponse
  if (!v2x_msgs__msg__GetResponse__copy(
      &(input->getresponse), &(output->getresponse)))
  {
    return false;
  }
  // initialisationrequest
  if (!v2x_msgs__msg__InitialisationRequest__copy(
      &(input->initialisationrequest), &(output->initialisationrequest)))
  {
    return false;
  }
  // initialisationresponse
  if (!v2x_msgs__msg__InitialisationResponse__copy(
      &(input->initialisationresponse), &(output->initialisationresponse)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__TAPDUsGeneric *
v2x_msgs__msg__TAPDUsGeneric__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TAPDUsGeneric * msg = (v2x_msgs__msg__TAPDUsGeneric *)allocator.allocate(sizeof(v2x_msgs__msg__TAPDUsGeneric), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TAPDUsGeneric));
  bool success = v2x_msgs__msg__TAPDUsGeneric__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TAPDUsGeneric__destroy(v2x_msgs__msg__TAPDUsGeneric * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TAPDUsGeneric__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TAPDUsGeneric__Sequence__init(v2x_msgs__msg__TAPDUsGeneric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TAPDUsGeneric * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TAPDUsGeneric *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TAPDUsGeneric), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TAPDUsGeneric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TAPDUsGeneric__fini(&data[i - 1]);
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
v2x_msgs__msg__TAPDUsGeneric__Sequence__fini(v2x_msgs__msg__TAPDUsGeneric__Sequence * array)
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
      v2x_msgs__msg__TAPDUsGeneric__fini(&array->data[i]);
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

v2x_msgs__msg__TAPDUsGeneric__Sequence *
v2x_msgs__msg__TAPDUsGeneric__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TAPDUsGeneric__Sequence * array = (v2x_msgs__msg__TAPDUsGeneric__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TAPDUsGeneric__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TAPDUsGeneric__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TAPDUsGeneric__Sequence__destroy(v2x_msgs__msg__TAPDUsGeneric__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TAPDUsGeneric__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TAPDUsGeneric__Sequence__are_equal(const v2x_msgs__msg__TAPDUsGeneric__Sequence * lhs, const v2x_msgs__msg__TAPDUsGeneric__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TAPDUsGeneric__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TAPDUsGeneric__Sequence__copy(
  const v2x_msgs__msg__TAPDUsGeneric__Sequence * input,
  v2x_msgs__msg__TAPDUsGeneric__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TAPDUsGeneric);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TAPDUsGeneric * data =
      (v2x_msgs__msg__TAPDUsGeneric *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TAPDUsGeneric__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TAPDUsGeneric__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TAPDUsGeneric__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
