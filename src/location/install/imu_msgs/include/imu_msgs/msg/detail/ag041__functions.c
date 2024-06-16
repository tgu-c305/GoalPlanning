// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_msgs:msg/AG041.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/ag041__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
imu_msgs__msg__AG041__init(imu_msgs__msg__AG041 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_msgs__msg__AG041__fini(msg);
    return false;
  }
  // roll
  // pitch
  // yaw
  // gx
  // gy
  // gz
  // ax
  // ay
  // az
  // temperature
  // time
  // gps_message
  // gps_heading_status
  // ptype
  // pdata
  // ver_pos
  // ver_vel
  // info_byte
  // ag041_type
  return true;
}

void
imu_msgs__msg__AG041__fini(imu_msgs__msg__AG041 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // roll
  // pitch
  // yaw
  // gx
  // gy
  // gz
  // ax
  // ay
  // az
  // temperature
  // time
  // gps_message
  // gps_heading_status
  // ptype
  // pdata
  // ver_pos
  // ver_vel
  // info_byte
  // ag041_type
}

bool
imu_msgs__msg__AG041__are_equal(const imu_msgs__msg__AG041 * lhs, const imu_msgs__msg__AG041 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // gx
  if (lhs->gx != rhs->gx) {
    return false;
  }
  // gy
  if (lhs->gy != rhs->gy) {
    return false;
  }
  // gz
  if (lhs->gz != rhs->gz) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // gps_message
  for (size_t i = 0; i < 13; ++i) {
    if (lhs->gps_message[i] != rhs->gps_message[i]) {
      return false;
    }
  }
  // gps_heading_status
  if (lhs->gps_heading_status != rhs->gps_heading_status) {
    return false;
  }
  // ptype
  if (lhs->ptype != rhs->ptype) {
    return false;
  }
  // pdata
  if (lhs->pdata != rhs->pdata) {
    return false;
  }
  // ver_pos
  if (lhs->ver_pos != rhs->ver_pos) {
    return false;
  }
  // ver_vel
  if (lhs->ver_vel != rhs->ver_vel) {
    return false;
  }
  // info_byte
  if (lhs->info_byte != rhs->info_byte) {
    return false;
  }
  // ag041_type
  if (lhs->ag041_type != rhs->ag041_type) {
    return false;
  }
  return true;
}

bool
imu_msgs__msg__AG041__copy(
  const imu_msgs__msg__AG041 * input,
  imu_msgs__msg__AG041 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // gx
  output->gx = input->gx;
  // gy
  output->gy = input->gy;
  // gz
  output->gz = input->gz;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // temperature
  output->temperature = input->temperature;
  // time
  output->time = input->time;
  // gps_message
  for (size_t i = 0; i < 13; ++i) {
    output->gps_message[i] = input->gps_message[i];
  }
  // gps_heading_status
  output->gps_heading_status = input->gps_heading_status;
  // ptype
  output->ptype = input->ptype;
  // pdata
  output->pdata = input->pdata;
  // ver_pos
  output->ver_pos = input->ver_pos;
  // ver_vel
  output->ver_vel = input->ver_vel;
  // info_byte
  output->info_byte = input->info_byte;
  // ag041_type
  output->ag041_type = input->ag041_type;
  return true;
}

imu_msgs__msg__AG041 *
imu_msgs__msg__AG041__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG041 * msg = (imu_msgs__msg__AG041 *)allocator.allocate(sizeof(imu_msgs__msg__AG041), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_msgs__msg__AG041));
  bool success = imu_msgs__msg__AG041__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_msgs__msg__AG041__destroy(imu_msgs__msg__AG041 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_msgs__msg__AG041__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_msgs__msg__AG041__Sequence__init(imu_msgs__msg__AG041__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG041 * data = NULL;

  if (size) {
    data = (imu_msgs__msg__AG041 *)allocator.zero_allocate(size, sizeof(imu_msgs__msg__AG041), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_msgs__msg__AG041__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_msgs__msg__AG041__fini(&data[i - 1]);
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
imu_msgs__msg__AG041__Sequence__fini(imu_msgs__msg__AG041__Sequence * array)
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
      imu_msgs__msg__AG041__fini(&array->data[i]);
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

imu_msgs__msg__AG041__Sequence *
imu_msgs__msg__AG041__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__AG041__Sequence * array = (imu_msgs__msg__AG041__Sequence *)allocator.allocate(sizeof(imu_msgs__msg__AG041__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_msgs__msg__AG041__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_msgs__msg__AG041__Sequence__destroy(imu_msgs__msg__AG041__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_msgs__msg__AG041__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_msgs__msg__AG041__Sequence__are_equal(const imu_msgs__msg__AG041__Sequence * lhs, const imu_msgs__msg__AG041__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_msgs__msg__AG041__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_msgs__msg__AG041__Sequence__copy(
  const imu_msgs__msg__AG041__Sequence * input,
  imu_msgs__msg__AG041__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_msgs__msg__AG041);
    imu_msgs__msg__AG041 * data =
      (imu_msgs__msg__AG041 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_msgs__msg__AG041__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          imu_msgs__msg__AG041__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imu_msgs__msg__AG041__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
