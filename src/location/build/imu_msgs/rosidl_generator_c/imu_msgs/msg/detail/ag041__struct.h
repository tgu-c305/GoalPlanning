// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imu_msgs:msg/AG041.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG041__STRUCT_H_
#define IMU_MSGS__MSG__DETAIL__AG041__STRUCT_H_

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

// Struct defined in msg/AG041 in the package imu_msgs.
typedef struct imu_msgs__msg__AG041
{
  std_msgs__msg__Header header;
  float roll;
  float pitch;
  float yaw;
  float gx;
  float gy;
  float gz;
  float ax;
  float ay;
  float az;
  float temperature;
  float time;
  uint8_t gps_message[13];
  uint8_t gps_heading_status;
  uint8_t ptype;
  uint16_t pdata;
  float ver_pos;
  float ver_vel;
  uint16_t info_byte;
  uint8_t ag041_type;
} imu_msgs__msg__AG041;

// Struct for a sequence of imu_msgs__msg__AG041.
typedef struct imu_msgs__msg__AG041__Sequence
{
  imu_msgs__msg__AG041 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imu_msgs__msg__AG041__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMU_MSGS__MSG__DETAIL__AG041__STRUCT_H_
