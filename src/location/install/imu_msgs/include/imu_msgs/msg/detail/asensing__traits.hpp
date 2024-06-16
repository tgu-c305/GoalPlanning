// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_msgs:msg/ASENSING.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__ASENSING__TRAITS_HPP_
#define IMU_MSGS__MSG__DETAIL__ASENSING__TRAITS_HPP_

#include "imu_msgs/msg/detail/asensing__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<imu_msgs::msg::ASENSING>()
{
  return "imu_msgs::msg::ASENSING";
}

template<>
inline const char * name<imu_msgs::msg::ASENSING>()
{
  return "imu_msgs/msg/ASENSING";
}

template<>
struct has_fixed_size<imu_msgs::msg::ASENSING>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<imu_msgs::msg::ASENSING>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<imu_msgs::msg::ASENSING>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_MSGS__MSG__DETAIL__ASENSING__TRAITS_HPP_
