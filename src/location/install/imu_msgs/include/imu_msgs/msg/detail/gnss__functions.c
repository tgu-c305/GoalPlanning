// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice
#include "imu_msgs/msg/detail/gnss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
imu_msgs__msg__Gnss__init(imu_msgs__msg__Gnss * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    imu_msgs__msg__Gnss__fini(msg);
    return false;
  }
  // gnss_lon
  // gnss_lat
  // gnss_alt
  // gnss_lon_sigma
  // gnss_lat_sigma
  // gnss_alt_sigma
  // gnss_ve
  // gnss_vn
  // gnss_vu
  // gnss_ve_sigma
  // gnss_vn_sigma
  // gnss_vu_sigma
  // gnss_age
  // gnss_hdop
  // gnss_vdop
  // gnss_mas_antusedsatnum
  // gnss_satnum
  // gnss_mas_anthighqualitysatnum
  // gnss_time
  // gnss_trk
  // gnss_stat
  // pos_up
  // pos_east
  // pos_north
  return true;
}

void
imu_msgs__msg__Gnss__fini(imu_msgs__msg__Gnss * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gnss_lon
  // gnss_lat
  // gnss_alt
  // gnss_lon_sigma
  // gnss_lat_sigma
  // gnss_alt_sigma
  // gnss_ve
  // gnss_vn
  // gnss_vu
  // gnss_ve_sigma
  // gnss_vn_sigma
  // gnss_vu_sigma
  // gnss_age
  // gnss_hdop
  // gnss_vdop
  // gnss_mas_antusedsatnum
  // gnss_satnum
  // gnss_mas_anthighqualitysatnum
  // gnss_time
  // gnss_trk
  // gnss_stat
  // pos_up
  // pos_east
  // pos_north
}

bool
imu_msgs__msg__Gnss__are_equal(const imu_msgs__msg__Gnss * lhs, const imu_msgs__msg__Gnss * rhs)
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
  // gnss_lon
  if (lhs->gnss_lon != rhs->gnss_lon) {
    return false;
  }
  // gnss_lat
  if (lhs->gnss_lat != rhs->gnss_lat) {
    return false;
  }
  // gnss_alt
  if (lhs->gnss_alt != rhs->gnss_alt) {
    return false;
  }
  // gnss_lon_sigma
  if (lhs->gnss_lon_sigma != rhs->gnss_lon_sigma) {
    return false;
  }
  // gnss_lat_sigma
  if (lhs->gnss_lat_sigma != rhs->gnss_lat_sigma) {
    return false;
  }
  // gnss_alt_sigma
  if (lhs->gnss_alt_sigma != rhs->gnss_alt_sigma) {
    return false;
  }
  // gnss_ve
  if (lhs->gnss_ve != rhs->gnss_ve) {
    return false;
  }
  // gnss_vn
  if (lhs->gnss_vn != rhs->gnss_vn) {
    return false;
  }
  // gnss_vu
  if (lhs->gnss_vu != rhs->gnss_vu) {
    return false;
  }
  // gnss_ve_sigma
  if (lhs->gnss_ve_sigma != rhs->gnss_ve_sigma) {
    return false;
  }
  // gnss_vn_sigma
  if (lhs->gnss_vn_sigma != rhs->gnss_vn_sigma) {
    return false;
  }
  // gnss_vu_sigma
  if (lhs->gnss_vu_sigma != rhs->gnss_vu_sigma) {
    return false;
  }
  // gnss_age
  if (lhs->gnss_age != rhs->gnss_age) {
    return false;
  }
  // gnss_hdop
  if (lhs->gnss_hdop != rhs->gnss_hdop) {
    return false;
  }
  // gnss_vdop
  if (lhs->gnss_vdop != rhs->gnss_vdop) {
    return false;
  }
  // gnss_mas_antusedsatnum
  if (lhs->gnss_mas_antusedsatnum != rhs->gnss_mas_antusedsatnum) {
    return false;
  }
  // gnss_satnum
  if (lhs->gnss_satnum != rhs->gnss_satnum) {
    return false;
  }
  // gnss_mas_anthighqualitysatnum
  if (lhs->gnss_mas_anthighqualitysatnum != rhs->gnss_mas_anthighqualitysatnum) {
    return false;
  }
  // gnss_time
  if (lhs->gnss_time != rhs->gnss_time) {
    return false;
  }
  // gnss_trk
  if (lhs->gnss_trk != rhs->gnss_trk) {
    return false;
  }
  // gnss_stat
  if (lhs->gnss_stat != rhs->gnss_stat) {
    return false;
  }
  // pos_up
  if (lhs->pos_up != rhs->pos_up) {
    return false;
  }
  // pos_east
  if (lhs->pos_east != rhs->pos_east) {
    return false;
  }
  // pos_north
  if (lhs->pos_north != rhs->pos_north) {
    return false;
  }
  return true;
}

bool
imu_msgs__msg__Gnss__copy(
  const imu_msgs__msg__Gnss * input,
  imu_msgs__msg__Gnss * output)
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
  // gnss_lon
  output->gnss_lon = input->gnss_lon;
  // gnss_lat
  output->gnss_lat = input->gnss_lat;
  // gnss_alt
  output->gnss_alt = input->gnss_alt;
  // gnss_lon_sigma
  output->gnss_lon_sigma = input->gnss_lon_sigma;
  // gnss_lat_sigma
  output->gnss_lat_sigma = input->gnss_lat_sigma;
  // gnss_alt_sigma
  output->gnss_alt_sigma = input->gnss_alt_sigma;
  // gnss_ve
  output->gnss_ve = input->gnss_ve;
  // gnss_vn
  output->gnss_vn = input->gnss_vn;
  // gnss_vu
  output->gnss_vu = input->gnss_vu;
  // gnss_ve_sigma
  output->gnss_ve_sigma = input->gnss_ve_sigma;
  // gnss_vn_sigma
  output->gnss_vn_sigma = input->gnss_vn_sigma;
  // gnss_vu_sigma
  output->gnss_vu_sigma = input->gnss_vu_sigma;
  // gnss_age
  output->gnss_age = input->gnss_age;
  // gnss_hdop
  output->gnss_hdop = input->gnss_hdop;
  // gnss_vdop
  output->gnss_vdop = input->gnss_vdop;
  // gnss_mas_antusedsatnum
  output->gnss_mas_antusedsatnum = input->gnss_mas_antusedsatnum;
  // gnss_satnum
  output->gnss_satnum = input->gnss_satnum;
  // gnss_mas_anthighqualitysatnum
  output->gnss_mas_anthighqualitysatnum = input->gnss_mas_anthighqualitysatnum;
  // gnss_time
  output->gnss_time = input->gnss_time;
  // gnss_trk
  output->gnss_trk = input->gnss_trk;
  // gnss_stat
  output->gnss_stat = input->gnss_stat;
  // pos_up
  output->pos_up = input->pos_up;
  // pos_east
  output->pos_east = input->pos_east;
  // pos_north
  output->pos_north = input->pos_north;
  return true;
}

imu_msgs__msg__Gnss *
imu_msgs__msg__Gnss__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__Gnss * msg = (imu_msgs__msg__Gnss *)allocator.allocate(sizeof(imu_msgs__msg__Gnss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imu_msgs__msg__Gnss));
  bool success = imu_msgs__msg__Gnss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imu_msgs__msg__Gnss__destroy(imu_msgs__msg__Gnss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imu_msgs__msg__Gnss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imu_msgs__msg__Gnss__Sequence__init(imu_msgs__msg__Gnss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__Gnss * data = NULL;

  if (size) {
    data = (imu_msgs__msg__Gnss *)allocator.zero_allocate(size, sizeof(imu_msgs__msg__Gnss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imu_msgs__msg__Gnss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imu_msgs__msg__Gnss__fini(&data[i - 1]);
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
imu_msgs__msg__Gnss__Sequence__fini(imu_msgs__msg__Gnss__Sequence * array)
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
      imu_msgs__msg__Gnss__fini(&array->data[i]);
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

imu_msgs__msg__Gnss__Sequence *
imu_msgs__msg__Gnss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imu_msgs__msg__Gnss__Sequence * array = (imu_msgs__msg__Gnss__Sequence *)allocator.allocate(sizeof(imu_msgs__msg__Gnss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imu_msgs__msg__Gnss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imu_msgs__msg__Gnss__Sequence__destroy(imu_msgs__msg__Gnss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imu_msgs__msg__Gnss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imu_msgs__msg__Gnss__Sequence__are_equal(const imu_msgs__msg__Gnss__Sequence * lhs, const imu_msgs__msg__Gnss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imu_msgs__msg__Gnss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imu_msgs__msg__Gnss__Sequence__copy(
  const imu_msgs__msg__Gnss__Sequence * input,
  imu_msgs__msg__Gnss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imu_msgs__msg__Gnss);
    imu_msgs__msg__Gnss * data =
      (imu_msgs__msg__Gnss *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imu_msgs__msg__Gnss__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          imu_msgs__msg__Gnss__fini(&data[i]);
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
    if (!imu_msgs__msg__Gnss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
