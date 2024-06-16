// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from imu_msgs:msg/Gnss.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "imu_msgs/msg/detail/gnss__struct.h"
#include "imu_msgs/msg/detail/gnss__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool imu_msgs__msg__gnss__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("imu_msgs.msg._gnss.Gnss", full_classname_dest, 23) == 0);
  }
  imu_msgs__msg__Gnss * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gnss_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_alt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_lon_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_lon_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_lon_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_lat_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_lat_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_lat_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_alt_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_alt_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_alt_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_ve
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_ve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_ve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vn = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vu
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_ve_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_ve_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_ve_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vn_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vn_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vn_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vu_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vu_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vu_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_hdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_hdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_hdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_mas_antusedsatnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_mas_antusedsatnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_mas_antusedsatnum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_satnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_satnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_satnum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_mas_anthighqualitysatnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_mas_anthighqualitysatnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_mas_anthighqualitysatnum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // gnss_trk
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_trk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_trk = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_stat
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_stat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_stat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_up");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_up = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_east = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_north = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * imu_msgs__msg__gnss__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gnss */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("imu_msgs.msg._gnss");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gnss");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  imu_msgs__msg__Gnss * ros_message = (imu_msgs__msg__Gnss *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_lon_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_lon_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_lon_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_lat_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_lat_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_lat_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_alt_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_alt_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_alt_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_ve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_ve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_ve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_ve_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_ve_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_ve_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vn_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vn_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vn_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vu_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vu_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vu_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_hdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_hdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_hdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_mas_antusedsatnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_mas_antusedsatnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_mas_antusedsatnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_satnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_satnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_satnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_mas_anthighqualitysatnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_mas_anthighqualitysatnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_mas_anthighqualitysatnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->gnss_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_trk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_trk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_trk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_stat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_stat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_stat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_up
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
