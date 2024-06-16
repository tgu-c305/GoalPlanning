// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_msgs:msg/AG051.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG051__BUILDER_HPP_
#define IMU_MSGS__MSG__DETAIL__AG051__BUILDER_HPP_

#include "imu_msgs/msg/detail/ag051__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace imu_msgs
{

namespace msg
{

namespace builder
{

class Init_AG051_status
{
public:
  explicit Init_AG051_status(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  ::imu_msgs::msg::AG051 status(::imu_msgs::msg::AG051::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_temperature
{
public:
  explicit Init_AG051_temperature(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_status temperature(::imu_msgs::msg::AG051::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_AG051_status(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_az
{
public:
  explicit Init_AG051_az(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_temperature az(::imu_msgs::msg::AG051::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_AG051_temperature(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_ay
{
public:
  explicit Init_AG051_ay(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_az ay(::imu_msgs::msg::AG051::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_AG051_az(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_ax
{
public:
  explicit Init_AG051_ax(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_ay ax(::imu_msgs::msg::AG051::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_AG051_ay(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_gz
{
public:
  explicit Init_AG051_gz(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_ax gz(::imu_msgs::msg::AG051::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return Init_AG051_ax(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_gy
{
public:
  explicit Init_AG051_gy(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_gz gy(::imu_msgs::msg::AG051::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_AG051_gz(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_gx
{
public:
  explicit Init_AG051_gx(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_gy gx(::imu_msgs::msg::AG051::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_AG051_gy(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_serial_number
{
public:
  explicit Init_AG051_serial_number(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_gx serial_number(::imu_msgs::msg::AG051::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_AG051_gx(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_frame_count
{
public:
  explicit Init_AG051_frame_count(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_serial_number frame_count(::imu_msgs::msg::AG051::_frame_count_type arg)
  {
    msg_.frame_count = std::move(arg);
    return Init_AG051_serial_number(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_data_length
{
public:
  explicit Init_AG051_data_length(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_frame_count data_length(::imu_msgs::msg::AG051::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return Init_AG051_frame_count(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_type
{
public:
  explicit Init_AG051_type(::imu_msgs::msg::AG051 & msg)
  : msg_(msg)
  {}
  Init_AG051_data_length type(::imu_msgs::msg::AG051::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AG051_data_length(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

class Init_AG051_header
{
public:
  Init_AG051_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AG051_type header(::imu_msgs::msg::AG051::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AG051_type(msg_);
  }

private:
  ::imu_msgs::msg::AG051 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_msgs::msg::AG051>()
{
  return imu_msgs::msg::builder::Init_AG051_header();
}

}  // namespace imu_msgs

#endif  // IMU_MSGS__MSG__DETAIL__AG051__BUILDER_HPP_
