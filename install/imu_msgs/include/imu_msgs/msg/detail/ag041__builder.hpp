// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from imu_msgs:msg/AG041.idl
// generated code does not contain a copyright notice

#ifndef IMU_MSGS__MSG__DETAIL__AG041__BUILDER_HPP_
#define IMU_MSGS__MSG__DETAIL__AG041__BUILDER_HPP_

#include "imu_msgs/msg/detail/ag041__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace imu_msgs
{

namespace msg
{

namespace builder
{

class Init_AG041_ag041_type
{
public:
  explicit Init_AG041_ag041_type(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  ::imu_msgs::msg::AG041 ag041_type(::imu_msgs::msg::AG041::_ag041_type_type arg)
  {
    msg_.ag041_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_info_byte
{
public:
  explicit Init_AG041_info_byte(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ag041_type info_byte(::imu_msgs::msg::AG041::_info_byte_type arg)
  {
    msg_.info_byte = std::move(arg);
    return Init_AG041_ag041_type(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_ver_vel
{
public:
  explicit Init_AG041_ver_vel(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_info_byte ver_vel(::imu_msgs::msg::AG041::_ver_vel_type arg)
  {
    msg_.ver_vel = std::move(arg);
    return Init_AG041_info_byte(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_ver_pos
{
public:
  explicit Init_AG041_ver_pos(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ver_vel ver_pos(::imu_msgs::msg::AG041::_ver_pos_type arg)
  {
    msg_.ver_pos = std::move(arg);
    return Init_AG041_ver_vel(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_pdata
{
public:
  explicit Init_AG041_pdata(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ver_pos pdata(::imu_msgs::msg::AG041::_pdata_type arg)
  {
    msg_.pdata = std::move(arg);
    return Init_AG041_ver_pos(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_ptype
{
public:
  explicit Init_AG041_ptype(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_pdata ptype(::imu_msgs::msg::AG041::_ptype_type arg)
  {
    msg_.ptype = std::move(arg);
    return Init_AG041_pdata(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_gps_heading_status
{
public:
  explicit Init_AG041_gps_heading_status(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ptype gps_heading_status(::imu_msgs::msg::AG041::_gps_heading_status_type arg)
  {
    msg_.gps_heading_status = std::move(arg);
    return Init_AG041_ptype(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_gps_message
{
public:
  explicit Init_AG041_gps_message(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_gps_heading_status gps_message(::imu_msgs::msg::AG041::_gps_message_type arg)
  {
    msg_.gps_message = std::move(arg);
    return Init_AG041_gps_heading_status(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_time
{
public:
  explicit Init_AG041_time(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_gps_message time(::imu_msgs::msg::AG041::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_AG041_gps_message(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_temperature
{
public:
  explicit Init_AG041_temperature(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_time temperature(::imu_msgs::msg::AG041::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_AG041_time(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_az
{
public:
  explicit Init_AG041_az(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_temperature az(::imu_msgs::msg::AG041::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_AG041_temperature(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_ay
{
public:
  explicit Init_AG041_ay(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_az ay(::imu_msgs::msg::AG041::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_AG041_az(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_ax
{
public:
  explicit Init_AG041_ax(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ay ax(::imu_msgs::msg::AG041::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_AG041_ay(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_gz
{
public:
  explicit Init_AG041_gz(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_ax gz(::imu_msgs::msg::AG041::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return Init_AG041_ax(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_gy
{
public:
  explicit Init_AG041_gy(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_gz gy(::imu_msgs::msg::AG041::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_AG041_gz(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_gx
{
public:
  explicit Init_AG041_gx(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_gy gx(::imu_msgs::msg::AG041::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_AG041_gy(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_yaw
{
public:
  explicit Init_AG041_yaw(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_gx yaw(::imu_msgs::msg::AG041::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_AG041_gx(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_pitch
{
public:
  explicit Init_AG041_pitch(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_yaw pitch(::imu_msgs::msg::AG041::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AG041_yaw(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_roll
{
public:
  explicit Init_AG041_roll(::imu_msgs::msg::AG041 & msg)
  : msg_(msg)
  {}
  Init_AG041_pitch roll(::imu_msgs::msg::AG041::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AG041_pitch(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

class Init_AG041_header
{
public:
  Init_AG041_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AG041_roll header(::imu_msgs::msg::AG041::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AG041_roll(msg_);
  }

private:
  ::imu_msgs::msg::AG041 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::imu_msgs::msg::AG041>()
{
  return imu_msgs::msg::builder::Init_AG041_header();
}

}  // namespace imu_msgs

#endif  // IMU_MSGS__MSG__DETAIL__AG041__BUILDER_HPP_
