// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_H_
#define IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Gnss in the package imu_msgs.
typedef struct imu_msgs__msg__Gnss
{
  std_msgs__msg__Header header;
  double gnss_lon;
  double gnss_lat;
  double gnss_alt;
  float gnss_lon_sigma;
  float gnss_lat_sigma;
  float gnss_alt_sigma;
  float gnss_ve;
  float gnss_vn;
  float gnss_vu;
  float gnss_ve_sigma;
  float gnss_vn_sigma;
  float gnss_vu_sigma;
  uint16_t gnss_age;
  float gnss_hdop;
  float gnss_vdop;
  uint8_t gnss_mas_antusedsatnum;
  uint8_t gnss_satnum;
  uint8_t gnss_mas_anthighqualitysatnum;
  uint64_t gnss_time;
  float gnss_trk;
  uint8_t gnss_stat;
  float pos_up;
  float pos_east;
  float pos_north;
} imu_msgs__msg__Gnss;

// Struct for a sequence of imu_msgs__msg__Gnss.
typedef struct imu_msgs__msg__Gnss__Sequence
{
  imu_msgs__msg__Gnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_msgs__msg__Gnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_MSGS__MSG__DETAIL__GNSS__STRUCT_H_
