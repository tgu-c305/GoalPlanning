// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_msgs:msg/AG072.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG072__BUILDER_HPP_
#define IMU_MSGS__MSG__DETAIL__AG072__BUILDER_HPP_

#include "imu_msgs/msg/detail/ag072__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace imu_msgs
{

namespace msg
{

namespace builder
{

class Init_AG072_frame_count
{
public:
  explicit Init_AG072_frame_count(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  ::imu_msgs::msg::AG072 frame_count(::imu_msgs::msg::AG072::_frame_count_type arg)
  {
    msg_.frame_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_status
{
public:
  explicit Init_AG072_status(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_frame_count status(::imu_msgs::msg::AG072::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AG072_frame_count(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_temperature
{
public:
  explicit Init_AG072_temperature(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_status temperature(::imu_msgs::msg::AG072::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_AG072_status(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_az
{
public:
  explicit Init_AG072_az(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_temperature az(::imu_msgs::msg::AG072::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_AG072_temperature(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_ay
{
public:
  explicit Init_AG072_ay(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_az ay(::imu_msgs::msg::AG072::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_AG072_az(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_ax
{
public:
  explicit Init_AG072_ax(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_ay ax(::imu_msgs::msg::AG072::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_AG072_ay(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_gz
{
public:
  explicit Init_AG072_gz(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_ax gz(::imu_msgs::msg::AG072::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return Init_AG072_ax(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_gy
{
public:
  explicit Init_AG072_gy(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_gz gy(::imu_msgs::msg::AG072::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_AG072_gz(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_gx
{
public:
  explicit Init_AG072_gx(::imu_msgs::msg::AG072 & msg)
  : msg_(msg)
  {}
  Init_AG072_gy gx(::imu_msgs::msg::AG072::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_AG072_gy(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

class Init_AG072_header
{
public:
  Init_AG072_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AG072_gx header(::imu_msgs::msg::AG072::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AG072_gx(msg_);
  }

private:
  ::imu_msgs::msg::AG072 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_msgs::msg::AG072>()
{
  return imu_msgs::msg::builder::Init_AG072_header();
}

}  // namespace imu_msgs

#endif  // IMU_MSGS__MSG__DETAIL__AG072__BUILDER_HPP_
