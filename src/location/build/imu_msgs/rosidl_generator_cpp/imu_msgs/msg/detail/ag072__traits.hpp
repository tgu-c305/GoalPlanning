// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from imu_msgs:msg/AG072.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG072__TRAITS_HPP_
#define IMU_MSGS__MSG__DETAIL__AG072__TRAITS_HPP_

#include "imu_msgs/msg/detail/ag072__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<imu_msgs::msg::AG072>()
{
  return "imu_msgs::msg::AG072";
}

template<>
inline const char * name<imu_msgs::msg::AG072>()
{
  return "imu_msgs/msg/AG072";
}

template<>
struct has_fixed_size<imu_msgs::msg::AG072>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<imu_msgs::msg::AG072>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<imu_msgs::msg::AG072>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMU_MSGS__MSG__DETAIL__AG072__TRAITS_HPP_
