#include <chrono>
#include <memory>
#include <serial/serial.h>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "imu_node/imu_pub.hpp"
#include "imu_msgs/msg/asensing.hpp"
#include "imu_msgs/msg/imu.hpp"
#include "imu_msgs/msg/gnss.hpp"
#include <utility>
#include "imu_node/protocol_asensing.h"
#include "imu_node/TinyLog.h"
#include <algorithm>
#include <unistd.h>

using namespace std;

#define E_NOT_OK -1
#define E_OK 0
// #define BAUDRATE B38400
#define BAUDRATE B230400
#define HEADER_SIZE 3
#define MIN(x,y) (x)>(y)?(y):(x)

// constexpr int Length_0B = 63;//according to pdf
// constexpr int Length_0A = 34;//according to pdf
// constexpr int Length_10 = 83;//according to pdf
// auto message = std::make_unique<imu_msgs::msg::Imu>();
// auto message_gnss = std::make_unique<imu_msgs::msg::Gnss>();
imu_msgs::msg::Imu message;
imu_msgs::msg::Gnss message_gnss;
imu_msgs::msg::AG041 message_AG041;
imu_msgs::msg::AG072 message_AG072;
imu_msgs::msg::AG051 message_AG051;
ProtocolAsensing connect_manager;

void Imu_Pub::updateInsData(void *origin_id)
{
  //sleep(0.5);
  //std::flush(std::cout);
  //std::cout << "进入updateInsData" << std::endl;
  LooselyDataStruct *pLoosely = (LooselyDataStruct*)origin_id;
  if(pLoosely->type == 0x04)
  {
    //std::cout << "pLoosely->type == 0x04" << std::endl;
    updateAG041Data(origin_id);
  }  
  else if(pLoosely->type == 0x0A)
  {
    //std::cout << "pLoosely->type == 0x0A" << std::endl;
    updateAG072Data(origin_id);
  }
  else if(pLoosely->type == 0x8B)
  {
    //std::cout << "pLoosely->type == 0x8B" << std::endl;
    updateAG051Data(origin_id);
  }
  else if(pLoosely->type == 0x0B)
  {


    //std::cout << "pLoosely->type == 0x0B" << std::endl;
    message.imu_msg.latitude = pLoosely->lat;
    message.imu_msg.longitude = pLoosely->lon;
    message.imu_msg.altitude = pLoosely->h;

    message.imu_msg.north_velocity = pLoosely->vn;
    message.imu_msg.east_velocity = pLoosely->ve;
    message.imu_msg.ground_velocity = pLoosely->vd;

    message.imu_msg.roll = pLoosely->roll;
    message.imu_msg.pitch = pLoosely->pitch;
    message.imu_msg.azimuth = pLoosely->yaw;

    message.imu_msg.x_angular_velocity = pLoosely->gx;
    message.imu_msg.y_angular_velocity = pLoosely->gy;
    message.imu_msg.z_angular_velocity = pLoosely->gz;

    //std::cout << "message.imu_msg.x_angular_velocity: " << message.imu_msg.x_angular_velocity << std::endl;

    message.imu_msg.x_acc = pLoosely->ax;
    message.imu_msg.y_acc = pLoosely->ay;
    message.imu_msg.z_acc = pLoosely->az;

    message.imu_msg.latitude_std = pLoosely->xlat;
    message.imu_msg.longitude_std = pLoosely->xlon;
    message.imu_msg.altitude_std = pLoosely->xh;

    message.imu_msg.north_velocity_std = pLoosely->xvn;
    message.imu_msg.east_velocity_std = pLoosely->xve;
    message.imu_msg.ground_velocity_std = pLoosely->xvd;

    message.imu_msg.roll_std = pLoosely->xroll;
    message.imu_msg.pitch_std = pLoosely->xpitch;
    message.imu_msg.azimuth_std = pLoosely->xyaw;

    message.imu_msg.sec_of_week = pLoosely->gps_second_of_week;
    message.imu_msg.gps_week_number = pLoosely->gps_week;

    message.imu_msg.temperature = pLoosely->temp;
    message.imu_msg.wheel_speed_status = pLoosely->wheelselectr;
    message.imu_msg.ins_status = pLoosely->IMUState;
    message.imu_msg.position_type = pLoosely->stater;
    message.imu_msg.heading_type = pLoosely->stater;
    message.imu_msg.numsv = pLoosely->numSV;

    message.header.stamp = rclcpp::Clock().now();
    publisher_->publish(std::move(message));
  }
}

 void Imu_Pub::WGS_TO_ENU(GPSPoint& currentGps, GPSPoint& referenceGps, ENUPoint& currentEnu)
{
    double lat = currentGps.latitude;
    double lon = currentGps.longitude;
    double h = currentGps.altitude;
    double lat0 = referenceGps.latitude;
    double lon0 = referenceGps.longitude;
    double h0 = referenceGps.altitude;

    double a, b, f, e_sq, pi;
    pi = 3.14159265359;
    a = 6378137;
    b = 6356752.3142;
    f = (a - b) / a;
    e_sq = f * (2 - f);
    // 站点（非原点）
    double lamb, phi, s, N, sin_lambda, cos_lambda, sin_phi, cos_phi, x, y, z;
    lamb = lat/180.0*pi;  
    phi = lon/180.0*pi;
    s = sin(lamb);
    N = a / sqrt(1 - e_sq * s * s);

    sin_lambda = sin(lamb);
    cos_lambda = cos(lamb);
    sin_phi = sin(phi);
    cos_phi = cos(phi);

    x = (h + N) * cos_lambda * cos_phi;
    y = (h + N) * cos_lambda * sin_phi;
    z = (h + (1 - e_sq) * N) * sin_lambda;
    // 原点坐标转换
    double lamb0, phi0, s0, N0, sin_lambda0, cos_lambda0, sin_phi0, cos_phi0, x0, y0, z0;
    lamb0 = lat0/180.0*pi;
    phi0 = lon0/180.0*pi;
    s0 = sin(lamb0);
    N0 = a / sqrt(1 - e_sq * s0 * s0);

    sin_lambda0 = sin(lamb0);
    cos_lambda0 = cos(lamb0);
    sin_phi0 = sin(phi0);
    cos_phi0 = cos(phi0);

    x0 = (h0 + N0) * cos_lambda0 * cos_phi0;
    y0 = (h0 + N0) * cos_lambda0 * sin_phi0;
    z0 = (h0 + (1 - e_sq) * N0) * sin_lambda0;
    // ECEF 转 ENU
    double xd, yd, zd, t;
    xd = x - x0;
    yd = y - y0;
    zd = z - z0;
    t = -cos_phi0 * xd - sin_phi0 * yd;

    currentEnu.east = -sin_phi0 * xd + cos_phi0 * yd;
    currentEnu.north = t * sin_lambda0 + cos_lambda0 * zd;
    currentEnu.up = cos_lambda0 * cos_phi0 * xd + cos_lambda0 * sin_phi0 * yd + sin_lambda0 * zd;

}
void Imu_Pub::updateGnssData(void *origin_id)
{
  GnssStruct *pGnss = (GnssStruct *)origin_id;
  //if(pLoosely->protocol == 0x04)
  {
    // GNSS经度
    message_gnss.gnss_lon = pGnss->lon;
    //std::cout << "message_gnss.gnss_lon: " << message_gnss.gnss_lon << std::endl;
    // GNSS纬度
    message_gnss.gnss_lat = pGnss->lat;
    // GNSS高度
    message_gnss.gnss_alt = pGnss->h; 
    // GNSS经度精度
    message_gnss.gnss_lon_sigma=pGnss->lonstd;
    // GNSS纬度精度
    message_gnss.gnss_lat_sigma=pGnss->latstd;
    // GNSS高度精度
    message_gnss.gnss_alt_sigma=pGnss->hMSLstd;
    // GnssVe
    message_gnss.gnss_ve=pGnss->ve;
    // GnssVn
    message_gnss.gnss_vn=pGnss->vn;
    // GnssVu
    message_gnss.gnss_vu=pGnss->vd;
    // GnssVe精度
    message_gnss.gnss_ve_sigma=0;
    // GnssVn精度
    message_gnss.gnss_vn_sigma=0;
    // GnssVu精度
    message_gnss.gnss_vu_sigma=0;
    // RTKAge
    message_gnss.gnss_age=pGnss->age;
    // HDOP
    message_gnss.gnss_hdop=pGnss->hDOP;
    // VDOP
    message_gnss.gnss_vdop=pGnss->vDOP;
    // NumSV used
    //message_gnss.gnss_mas_antusedsatnum=((uint8_t)GnssMasAntUsedSatNum);
    // NumSV  Visible
    message_gnss.gnss_satnum=pGnss->numSV;
    // NumSV sn0>40db
    //message_gnss.gnss_mas_anthighqualitysatnum=((uint8_t)GnssMasAntHighQualitySatNum);
    // GNSS Time
    message_gnss.gnss_time=pGnss->ts;
    // GNSS Trk
    message_gnss.gnss_trk=pGnss->Trk;



//这里开始实现转换ENU坐标
      GPSPoint currentGps;
      currentGps.latitude = message_gnss.gnss_lat;
      currentGps.longitude = message_gnss.gnss_lon;
      currentGps.altitude = message_gnss.gnss_alt;

//注意这里初始位置的设定，我选用的是第一次录取到的位置，使用时可以根据需要更改
//比如预先定义一个位置，之后都用这个位置
    static bool initial_Reference_point = false;
    if (!initial_Reference_point)
    {
      initial_Reference_point = true;
      referenceGps = currentGps;
     }

    ENUPoint currentEnu;

    WGS_TO_ENU(currentGps, referenceGps, currentEnu);
      
    message_gnss.pos_up = currentEnu.up;
    message_gnss.pos_north = currentEnu.north;
    message_gnss.pos_east = currentEnu.east;

    // GNSS Status
    //message_gnss.gnss_stat=((uint8_t)GnssStat);
    message.header.stamp = rclcpp::Clock().now();
    gnss_publisher_->publish(std::move(message_gnss));
    if (RecordPosition)
    {
      //记录GPS坐标
      std::fstream SaveGPSPosition(WGSPosPath, ios::app);
      SaveGPSPosition << currentGps.latitude << " " << currentGps.longitude << " " << currentGps.altitude << std::endl;
      //记录转换后的ENU坐标
      std::fstream SaveENUPosition(ENUPosPath, ios::app);
      SaveENUPosition << currentEnu.east << " " << currentEnu.north << " " << currentEnu.up << std::endl;
    }

  }
}



void Imu_Pub::updateAG041Data(void *origin_id)
{
  LooselyDataStruct *pLoosely = (LooselyDataStruct *)origin_id;
  message_AG041.roll = pLoosely->roll;
  message_AG041.pitch = pLoosely->pitch;
  message_AG041.yaw = pLoosely->yaw;
  message_AG041.gx = pLoosely->gx;
  message_AG041.gy = pLoosely->gy;
  message_AG041.gz = pLoosely->gz;
  message_AG041.ax = pLoosely->ax;
  message_AG041.ay = pLoosely->ay;
  message_AG041.az = pLoosely->az;
  message_AG041.temperature = pLoosely->temp;
  message_AG041.time = pLoosely->ts;
  memcpy((uint8_t*)&message_AG041.gps_message,(uint8_t*)pLoosely->gps_message,sizeof(message_AG041.gps_message));
  message_AG041.gps_heading_status = pLoosely->gps_heading_status;
  message_AG041.ptype = pLoosely->ptype;
  message_AG041.pdata = pLoosely->pdata;
  message_AG041.ver_pos = pLoosely->ver_pos;
  message_AG041.ver_vel = pLoosely->ver_vel;
  message_AG041.info_byte = pLoosely->info_byte;
  message_AG041.ag041_type = pLoosely->ag041_type;

  message_AG041.header.stamp = rclcpp::Clock().now();
  ag041_publisher_->publish(std::move(message_AG041));
}

void Imu_Pub::updateAG072Data(void *orignin_id)
{
  LooselyDataStruct *pLoosely = (LooselyDataStruct*)orignin_id;
  message_AG072.gx = pLoosely->gx;
  message_AG072.gy = pLoosely->gy;
  message_AG072.gz = pLoosely->gz;
  message_AG072.ax = pLoosely->ax;
  message_AG072.ay = pLoosely->ay;
  message_AG072.az = pLoosely->az;
  message_AG072.temperature = pLoosely->temp;
  message_AG072.status = pLoosely->ptype;
  message_AG072.frame_count = pLoosely->frame_count;

  ag072_publisher_->publish(std::move(message_AG072));
}
void Imu_Pub::updateAG051Data(void *orignin_id)
{
  LooselyDataStruct *pLoosely = (LooselyDataStruct*)orignin_id;
  message_AG051.type = pLoosely->type;
  message_AG051.data_length = pLoosely->pdata;
  message_AG051.frame_count = pLoosely->gps_second_of_week;
  message_AG051.serial_number = pLoosely->ptype;
  message_AG051.gx = pLoosely->gx;
  message_AG051.gy = pLoosely->gy;
  message_AG051.gz = pLoosely->gz;
  message_AG051.ax = pLoosely->ax;
  message_AG051.ay = pLoosely->ay;
  message_AG051.az = pLoosely->az;
  message_AG051.temperature = pLoosely->temp;
  message_AG051.status = pLoosely->IMUState;
 
  ag051_publisher_->publish(std::move(message_AG051));
}

Imu_Pub::Imu_Pub() 
:Node("Imu_Pub_Node"), port(UART_PORT), frameid("imu_link")
{


  this->declare_parameter<std::string>("UART_Port", UART_PORT);
  this->declare_parameter<int>("UART_Baudrate", UART_BAUDRATE);
  this->declare_parameter<int>("AG041_Type", 0);
  this->declare_parameter<float>("AG041_Grange", 250);
  this->declare_parameter<float>("AG041_Arange", 4);
  this->declare_parameter<float>("570D_Grange", 250);
  this->declare_parameter<float>("570D_Arange", 4);
  this->declare_parameter<std::string>("LogInfo", "");
  this->declare_parameter<int>("LogLevel", 1);
  this->get_parameter("UART_Port",port);
  this->get_parameter("UART_Baudrate",baud);
  this->get_parameter("AG041_Type",connect_manager.ag041_param_dat.AG041_Type);
  this->get_parameter("AG041_Grange",connect_manager.ag041_param_dat.Grange);
  this->get_parameter("AG041_Arange",connect_manager.ag041_param_dat.Arange);
  this->get_parameter("570D_Grange",connect_manager.grange_scale);
  this->get_parameter("570D_Arange",connect_manager.arange_scale);
  /* set log config */
  std::string logInfo = "";
  int32_t logLevel = 1;
  this->get_parameter("LogInfo",logInfo);
  this->get_parameter("LogLevel",logLevel);
  TinyLog::setStorageDir(logInfo.c_str());
  TinyLog::setStorageLevel(logLevel);

  imu_ser.setPort(port);
  imu_ser.setBaudrate(baud);
  serial::Timeout to = serial::Timeout::simpleTimeout(0);
  imu_ser.setTimeout(to);
  imu_ser.open();
  if (imu_ser.isOpen())
  {
    TinyLog::info("imu_serial opened successfully!");
  }
  else 
  {
    TinyLog::error("imu_serial opened failed!");
    exit(0);
  }

  publisher_ = this->create_publisher<imu_msgs::msg::Imu>("Imu_Pub", 500);//500
  gnss_publisher_ = this->create_publisher<imu_msgs::msg::Gnss>("Gnss_Pub", 500);//500
  ag041_publisher_ = this->create_publisher<imu_msgs::msg::AG041>("AG041_Pub", 500);//500
  ag072_publisher_ = this->create_publisher<imu_msgs::msg::AG072>("AG072_Pub", 500);//500
  ag051_publisher_ = this->create_publisher<imu_msgs::msg::AG051>("AG051_Pub", 500);//500
  timer_ = this->create_wall_timer(1ms, std::bind(&Imu_Pub::timer_callback, this));

  _register_ins_fun = std::make_shared<std::function<void(void*)>>(std::bind(&Imu_Pub::updateInsData, this, std::placeholders::_1));
  connect_manager.addAnalysisLooselyDataCallback (_register_ins_fun);
  //std::cout << "运行至addAnalysisLooselyDataCallback" << std::endl;

   _register_gnss_fun = std::make_shared<std::function<void(void*)>>(std::bind(&Imu_Pub::updateGnssData, this, std::placeholders::_1));
  connect_manager.addAnalysisGnssDataCallback (_register_gnss_fun); 
}

void Imu_Pub::timer_callback()
{

    //auto message = std::make_unique<imu_msgs::msg::Imu>();
    // message.data = "Sending imu data...";
    // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
     std::flush(std::cout);
    // std::cout<<"callback imu_ser.open: "<< imu_ser.isOpen() <<"imu_ser.size: " <<imu_ser.available()<<"input.size: "<< input.size()<< std::endl;
    //std::cout<< "进入timer_callback";
    try
    {
      if (imu_ser.isOpen())
      {
        if(imu_ser.available())
        {
          //std::cout<<"available\n";
         // do
         // {
            /* code */
            read = imu_ser.read(imu_ser.available());
            // RCLCPP_DEBUG("read %i new characters from imu_ser.al port, adding to %i characters of old input.", (int)read.size(), (int)input.size());
            input += read;
          //} while (input.size() > HEADER_SIZE);
          connect_manager.addData(input);
          input.erase(0,input.size());
          #if 0
          while (input.size() >= .HEADER_SIZE)
          {
            auto pos_0B = input.find(BDDB0B,0,HEADER_SIZE);
            auto pos_10 = input.find(BDDB10,0,HEADER_SIZE);
            if(pos_0B==std::string::npos &&  pos_10==std::string::npos)//no header is found
            {
              input.erase(0,input.size());
              //std::cout<<"erase";
            }
            else//at least one header is found
            {
              auto pos_min=MIN(pos_0B,pos_10);//check who come first

              //std::cout<<"pos:"<<pos_0B<<'\t'<<pos_10<<'\t'<<pos_min<<std::endl;
              /************************************************************/
              /*0B process*/
              /************************************************************/
              if(pos_min==pos_0B)//0B first
              {
                if(pos_0B!=0)//there are surplus data
                {
                  input.erase(0,pos_0B);//delete surplus data
                  continue;
                }
                else//pos 0B=0, start parsing 0B
                {
                  if (input.size() < Length_0B)
                  {
                    break;//not enough data
                  }
                  if(crc_check(Length_0B,input)==0)//crc check
                  {
                    //std::cout<<"parsing_0B:"<< input.size() << std::endl;
                    parsing_0B(input);
                    //std::cout<<"[Publish!!!]  bytecount: "<< input.size() << std::endl;

                    message.header.stamp = rclcpp::Clock().now();
                    publisher_->publish(std::move(message));
                    // std::cout<<"[Publish!!!]  bytecount: "<< bytecount << "\n";
                    // INS_pub.publish(Asensing_msg); 
                  }
                  else
                  {
                    //std::cout<<"0B XOR check wrong! \n"<<std::endl;
                  }
                  input.erase(0,Length_0B);
                  continue;
                }
              }
              /**************************************************************/

              /************************************************************/
              /*0A process*/
              /************************************************************/
              if(pos_min==pos_10)//0A first
              {
                if(pos_10!=0)//there are surplus data
                  {
                    input.erase(0,pos_10);//delete surplus data
                    continue;
                  }
                  else//pos 0A=0, start parsing 0A
                  {
                    if(input.size() < Length_10)
                    {
                      break;//not enough data
                    }

                    if(crc_check(Length_10,input)==0)//crc check
                    {
                      //std::cout<<"parsing_10:"<< input.size() << std::endl;
                      parsing_10(input);
                      // std::cout<<"[Publish!!!]  bytecount: "<< bytecount << std::endl;

                      message_gnss.header.stamp = rclcpp::Clock().now();
                      gnss_publisher_->publish(std::move(message_gnss));
                      // std::cout<<"[Publish!!!]  bytecount: "<< bytecount << "\n";
                      // INS_pub.publish(Asensing_msg); 
                    }
                    else
                    {
                      //std::cout<<"10 XOR check wrong! \n"<<std::endl;
                    }
                    input.erase(0,Length_10);
                    continue;
                  }
              }
			        std::cout << "[Process COUNTER!]: Next byte: " << input.size() << endl;
            }
          }
          #endif 
        }
      }
      else
      {
        try
        {
          imu_ser.setPort(port);
          imu_ser.setBaudrate(baud);//115200  230400
          serial::Timeout to = serial::Timeout::simpleTimeout(0);
          imu_ser.setTimeout(to);
          imu_ser.open();
        }
        catch (serial::IOException& e)
        {
          std::cout << "Unable to open serial port " << imu_ser.getPort() << ". Trying again in 5 seconds.";
        //   ros::Duration(5).sleep();need rebuild
        }

        if( imu_ser.isOpen() )// imu_ser.SerialImpl::open()
        {
          std::cout << "serial port " << imu_ser.getPort() << " initialized and opened." << std::endl;
        }
        // std::cout<<"Error  lllllllllllllll"<<std::endl;
      }
    }
    catch (serial::IOException& e)
    {
      std::cout << "Error reading from the serial port " << imu_ser.getPort() << ". Closing connection.";
      imu_ser.close();
    }

    // message.header.stamp = rclcpp::Clock().now();
    // publisher_->publish(std::move(message));

    // std::cout<<"Error  lllllllllllllll"<<std::endl;

    // auto message = std_msgs::msg::String();
    // message.data = "Hello, world! ";
    // RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    // // std::flush(std::cout);
    // publisher_->publish(message);
}



int main(int argc, char** argv)
{
    //std::cout << "初始化开始" << std::endl;

    //初始化节点
    rclcpp::init(argc, argv);

    //td::cout << "初始化结束" << std::endl;

    //循环节点
    //Imu_Pub ppp;
    // 创建Imu_Pub的共享指针
    auto ppp = std::make_shared<Imu_Pub>();
    rclcpp::spin(ppp);
    //rclcpp::spin(std::make_shared<Imu_Pub>());


    rclcpp::shutdown();
    return 0;
}
