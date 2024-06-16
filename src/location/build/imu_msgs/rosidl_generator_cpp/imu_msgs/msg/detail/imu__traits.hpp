// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
#define IMU_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_

#include "imu_msgs/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'imu_msg'
#include "imu_msgs/msg/detail/asensing__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<imu_msgs::msg::Imu>()
{
  return "imu_msgs::msg::Imu";
}

template<>
inline const char * name<imu_msgs::msg::Imu>()
{
  return "imu_msgs/msg/Imu";
}

template<>
struct has_fixed_size<imu_msgs::msg::Imu>
  : std::integral_constant<bool, has_fixed_size<imu_msgs::msg::ASENSING>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_msgs::msg::Imu>
  : std::integral_constant<bool, has_bounded_size<imu_msgs::msg::ASENSING>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_msgs::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
