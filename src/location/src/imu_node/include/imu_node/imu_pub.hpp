#ifndef _IMU_PUB_HPP_
#define _IMU_PUB_HPP_

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <memory>
#include <cstring>
#include <cmath>

// #include "imu_node/serial.h"
// #include "imu_node/v8stdint.h"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "imu_msgs/msg/asensing.hpp"
#include "imu_msgs/msg/imu.hpp"
#include "imu_msgs/msg/gnss.hpp"
#include "imu_msgs/msg/ag041.hpp"
#include "imu_msgs/msg/ag051.hpp"
#include "imu_msgs/msg/ag072.hpp"

using namespace std;
using namespace std::chrono_literals;
using namespace serial;


#define UART_PORT       "/dev/ttyUSB0"
#define UART_BAUDRATE   (115200)
struct GPSPoint {
    double latitude; // 纬度，单位：度
    double longitude; // 经度，单位：度
    double altitude; // 高度，单位：米
};
struct ENUPoint {
    double east; // 东坐标，单位：米
    double north; // 北坐标，单位：米
    double up; // 上坐标，单位：米
};

class Imu_Pub : public rclcpp::Node
{
public:
    std::string input;
    std::string read;
    // double long i=0;
    //int Length=58;
    //double gpswf;
    //float latstd,lonstd,hstd,vnstd,vestd,vdstd,pitchstd,yawstd,rollstd,temperature,wheel_speed_status,numsv,position_type,heading_type;
    //bool received_message = false;
    serial::Serial imu_ser;
	//int bytecount=0;
    GPSPoint referenceGps;
    bool RecordPosition = false;
    string WGSPosPath = "/home/nvidia/GoalPlanning/src/location/src/location/src/data/WGSPos.txt";
    string ENUPosPath = "/home/nvidia/GoalPlanning/src/location/src/location/src/data/ENUPos.txt";

public: 
    Imu_Pub();
     void WGS_TO_ENU(GPSPoint& currentGps, GPSPoint& referenceGps, ENUPoint& currentEnu);


private:
    std::string port;
    int baud;
    std::string frameid;
    void timer_callback();
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<imu_msgs::msg::Imu>::SharedPtr publisher_;
    rclcpp::Publisher<imu_msgs::msg::Gnss>::SharedPtr gnss_publisher_;
    rclcpp::Publisher<imu_msgs::msg::AG041>::SharedPtr ag041_publisher_;
    /* add AG072 & AG051 publisher */
    rclcpp::Publisher<imu_msgs::msg::AG072>::SharedPtr ag072_publisher_;
    rclcpp::Publisher<imu_msgs::msg::AG051>::SharedPtr ag051_publisher_;

    std::shared_ptr<std::function<void(void*)>> _register_ins_fun;
    std::shared_ptr<std::function<void(void*)>> _register_gnss_fun;

    int crc_check(int length, const std::string &input);
    void parsing_0B(const std::string& input);
    void parsing_10(const std::string& input);
    void parsing_04(const std::string& input);
    void updateInsData(void *origin_id);
    void updateGnssData(void *orignin_id);
    void updateAG041Data(void *orignin_id);
    void updateAG072Data(void *orignin_id);
    void updateAG051Data(void *orignin_id);
};

#endif /* _IMU_PUB_HPP_ */
