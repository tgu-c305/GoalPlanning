# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imu_msgs:msg/Gnss.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gnss(type):
    """Metaclass of message 'Gnss'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imu_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imu_msgs.msg.Gnss')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gnss(metaclass=Metaclass_Gnss):
    """Message class 'Gnss'."""

    __slots__ = [
        '_header',
        '_gnss_lon',
        '_gnss_lat',
        '_gnss_alt',
        '_gnss_lon_sigma',
        '_gnss_lat_sigma',
        '_gnss_alt_sigma',
        '_gnss_ve',
        '_gnss_vn',
        '_gnss_vu',
        '_gnss_ve_sigma',
        '_gnss_vn_sigma',
        '_gnss_vu_sigma',
        '_gnss_age',
        '_gnss_hdop',
        '_gnss_vdop',
        '_gnss_mas_antusedsatnum',
        '_gnss_satnum',
        '_gnss_mas_anthighqualitysatnum',
        '_gnss_time',
        '_gnss_trk',
        '_gnss_stat',
        '_pos_up',
        '_pos_east',
        '_pos_north',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gnss_lon': 'double',
        'gnss_lat': 'double',
        'gnss_alt': 'double',
        'gnss_lon_sigma': 'float',
        'gnss_lat_sigma': 'float',
        'gnss_alt_sigma': 'float',
        'gnss_ve': 'float',
        'gnss_vn': 'float',
        'gnss_vu': 'float',
        'gnss_ve_sigma': 'float',
        'gnss_vn_sigma': 'float',
        'gnss_vu_sigma': 'float',
        'gnss_age': 'uint16',
        'gnss_hdop': 'float',
        'gnss_vdop': 'float',
        'gnss_mas_antusedsatnum': 'uint8',
        'gnss_satnum': 'uint8',
        'gnss_mas_anthighqualitysatnum': 'uint8',
        'gnss_time': 'uint64',
        'gnss_trk': 'float',
        'gnss_stat': 'uint8',
        'pos_up': 'float',
        'pos_east': 'float',
        'pos_north': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gnss_lon = kwargs.get('gnss_lon', float())
        self.gnss_lat = kwargs.get('gnss_lat', float())
        self.gnss_alt = kwargs.get('gnss_alt', float())
        self.gnss_lon_sigma = kwargs.get('gnss_lon_sigma', float())
        self.gnss_lat_sigma = kwargs.get('gnss_lat_sigma', float())
        self.gnss_alt_sigma = kwargs.get('gnss_alt_sigma', float())
        self.gnss_ve = kwargs.get('gnss_ve', float())
        self.gnss_vn = kwargs.get('gnss_vn', float())
        self.gnss_vu = kwargs.get('gnss_vu', float())
        self.gnss_ve_sigma = kwargs.get('gnss_ve_sigma', float())
        self.gnss_vn_sigma = kwargs.get('gnss_vn_sigma', float())
        self.gnss_vu_sigma = kwargs.get('gnss_vu_sigma', float())
        self.gnss_age = kwargs.get('gnss_age', int())
        self.gnss_hdop = kwargs.get('gnss_hdop', float())
        self.gnss_vdop = kwargs.get('gnss_vdop', float())
        self.gnss_mas_antusedsatnum = kwargs.get('gnss_mas_antusedsatnum', int())
        self.gnss_satnum = kwargs.get('gnss_satnum', int())
        self.gnss_mas_anthighqualitysatnum = kwargs.get('gnss_mas_anthighqualitysatnum', int())
        self.gnss_time = kwargs.get('gnss_time', int())
        self.gnss_trk = kwargs.get('gnss_trk', float())
        self.gnss_stat = kwargs.get('gnss_stat', int())
        self.pos_up = kwargs.get('pos_up', float())
        self.pos_east = kwargs.get('pos_east', float())
        self.pos_north = kwargs.get('pos_north', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.gnss_lon != other.gnss_lon:
            return False
        if self.gnss_lat != other.gnss_lat:
            return False
        if self.gnss_alt != other.gnss_alt:
            return False
        if self.gnss_lon_sigma != other.gnss_lon_sigma:
            return False
        if self.gnss_lat_sigma != other.gnss_lat_sigma:
            return False
        if self.gnss_alt_sigma != other.gnss_alt_sigma:
            return False
        if self.gnss_ve != other.gnss_ve:
            return False
        if self.gnss_vn != other.gnss_vn:
            return False
        if self.gnss_vu != other.gnss_vu:
            return False
        if self.gnss_ve_sigma != other.gnss_ve_sigma:
            return False
        if self.gnss_vn_sigma != other.gnss_vn_sigma:
            return False
        if self.gnss_vu_sigma != other.gnss_vu_sigma:
            return False
        if self.gnss_age != other.gnss_age:
            return False
        if self.gnss_hdop != other.gnss_hdop:
            return False
        if self.gnss_vdop != other.gnss_vdop:
            return False
        if self.gnss_mas_antusedsatnum != other.gnss_mas_antusedsatnum:
            return False
        if self.gnss_satnum != other.gnss_satnum:
            return False
        if self.gnss_mas_anthighqualitysatnum != other.gnss_mas_anthighqualitysatnum:
            return False
        if self.gnss_time != other.gnss_time:
            return False
        if self.gnss_trk != other.gnss_trk:
            return False
        if self.gnss_stat != other.gnss_stat:
            return False
        if self.pos_up != other.pos_up:
            return False
        if self.pos_east != other.pos_east:
            return False
        if self.pos_north != other.pos_north:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def gnss_lon(self):
        """Message field 'gnss_lon'."""
        return self._gnss_lon

    @gnss_lon.setter
    def gnss_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_lon' field must be of type 'float'"
        self._gnss_lon = value

    @property
    def gnss_lat(self):
        """Message field 'gnss_lat'."""
        return self._gnss_lat

    @gnss_lat.setter
    def gnss_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_lat' field must be of type 'float'"
        self._gnss_lat = value

    @property
    def gnss_alt(self):
        """Message field 'gnss_alt'."""
        return self._gnss_alt

    @gnss_alt.setter
    def gnss_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_alt' field must be of type 'float'"
        self._gnss_alt = value

    @property
    def gnss_lon_sigma(self):
        """Message field 'gnss_lon_sigma'."""
        return self._gnss_lon_sigma

    @gnss_lon_sigma.setter
    def gnss_lon_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_lon_sigma' field must be of type 'float'"
        self._gnss_lon_sigma = value

    @property
    def gnss_lat_sigma(self):
        """Message field 'gnss_lat_sigma'."""
        return self._gnss_lat_sigma

    @gnss_lat_sigma.setter
    def gnss_lat_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_lat_sigma' field must be of type 'float'"
        self._gnss_lat_sigma = value

    @property
    def gnss_alt_sigma(self):
        """Message field 'gnss_alt_sigma'."""
        return self._gnss_alt_sigma

    @gnss_alt_sigma.setter
    def gnss_alt_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_alt_sigma' field must be of type 'float'"
        self._gnss_alt_sigma = value

    @property
    def gnss_ve(self):
        """Message field 'gnss_ve'."""
        return self._gnss_ve

    @gnss_ve.setter
    def gnss_ve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_ve' field must be of type 'float'"
        self._gnss_ve = value

    @property
    def gnss_vn(self):
        """Message field 'gnss_vn'."""
        return self._gnss_vn

    @gnss_vn.setter
    def gnss_vn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vn' field must be of type 'float'"
        self._gnss_vn = value

    @property
    def gnss_vu(self):
        """Message field 'gnss_vu'."""
        return self._gnss_vu

    @gnss_vu.setter
    def gnss_vu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vu' field must be of type 'float'"
        self._gnss_vu = value

    @property
    def gnss_ve_sigma(self):
        """Message field 'gnss_ve_sigma'."""
        return self._gnss_ve_sigma

    @gnss_ve_sigma.setter
    def gnss_ve_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_ve_sigma' field must be of type 'float'"
        self._gnss_ve_sigma = value

    @property
    def gnss_vn_sigma(self):
        """Message field 'gnss_vn_sigma'."""
        return self._gnss_vn_sigma

    @gnss_vn_sigma.setter
    def gnss_vn_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vn_sigma' field must be of type 'float'"
        self._gnss_vn_sigma = value

    @property
    def gnss_vu_sigma(self):
        """Message field 'gnss_vu_sigma'."""
        return self._gnss_vu_sigma

    @gnss_vu_sigma.setter
    def gnss_vu_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vu_sigma' field must be of type 'float'"
        self._gnss_vu_sigma = value

    @property
    def gnss_age(self):
        """Message field 'gnss_age'."""
        return self._gnss_age

    @gnss_age.setter
    def gnss_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gnss_age' field must be an unsigned integer in [0, 65535]"
        self._gnss_age = value

    @property
    def gnss_hdop(self):
        """Message field 'gnss_hdop'."""
        return self._gnss_hdop

    @gnss_hdop.setter
    def gnss_hdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_hdop' field must be of type 'float'"
        self._gnss_hdop = value

    @property
    def gnss_vdop(self):
        """Message field 'gnss_vdop'."""
        return self._gnss_vdop

    @gnss_vdop.setter
    def gnss_vdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vdop' field must be of type 'float'"
        self._gnss_vdop = value

    @property
    def gnss_mas_antusedsatnum(self):
        """Message field 'gnss_mas_antusedsatnum'."""
        return self._gnss_mas_antusedsatnum

    @gnss_mas_antusedsatnum.setter
    def gnss_mas_antusedsatnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_mas_antusedsatnum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_mas_antusedsatnum' field must be an unsigned integer in [0, 255]"
        self._gnss_mas_antusedsatnum = value

    @property
    def gnss_satnum(self):
        """Message field 'gnss_satnum'."""
        return self._gnss_satnum

    @gnss_satnum.setter
    def gnss_satnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_satnum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_satnum' field must be an unsigned integer in [0, 255]"
        self._gnss_satnum = value

    @property
    def gnss_mas_anthighqualitysatnum(self):
        """Message field 'gnss_mas_anthighqualitysatnum'."""
        return self._gnss_mas_anthighqualitysatnum

    @gnss_mas_anthighqualitysatnum.setter
    def gnss_mas_anthighqualitysatnum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_mas_anthighqualitysatnum' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_mas_anthighqualitysatnum' field must be an unsigned integer in [0, 255]"
        self._gnss_mas_anthighqualitysatnum = value

    @property
    def gnss_time(self):
        """Message field 'gnss_time'."""
        return self._gnss_time

    @gnss_time.setter
    def gnss_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'gnss_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._gnss_time = value

    @property
    def gnss_trk(self):
        """Message field 'gnss_trk'."""
        return self._gnss_trk

    @gnss_trk.setter
    def gnss_trk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_trk' field must be of type 'float'"
        self._gnss_trk = value

    @property
    def gnss_stat(self):
        """Message field 'gnss_stat'."""
        return self._gnss_stat

    @gnss_stat.setter
    def gnss_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_stat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gnss_stat' field must be an unsigned integer in [0, 255]"
        self._gnss_stat = value

    @property
    def pos_up(self):
        """Message field 'pos_up'."""
        return self._pos_up

    @pos_up.setter
    def pos_up(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_up' field must be of type 'float'"
        self._pos_up = value

    @property
    def pos_east(self):
        """Message field 'pos_east'."""
        return self._pos_east

    @pos_east.setter
    def pos_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_east' field must be of type 'float'"
        self._pos_east = value

    @property
    def pos_north(self):
        """Message field 'pos_north'."""
        return self._pos_north

    @pos_north.setter
    def pos_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_north' field must be of type 'float'"
        self._pos_north = value
