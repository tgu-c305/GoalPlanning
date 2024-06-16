# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rslidar_msg:msg/RslidarPacket.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RslidarPacket(type):
    """Metaclass of message 'RslidarPacket'."""

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
            module = import_type_support('rslidar_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rslidar_msg.msg.RslidarPacket')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rslidar_packet
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rslidar_packet
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rslidar_packet
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rslidar_packet
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rslidar_packet

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


class RslidarPacket(metaclass=Metaclass_RslidarPacket):
    """Message class 'RslidarPacket'."""

    __slots__ = [
        '_header',
        '_is_difop',
        '_is_frame_begin',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'is_difop': 'uint8',
        'is_frame_begin': 'uint8',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.is_difop = kwargs.get('is_difop', int())
        self.is_frame_begin = kwargs.get('is_frame_begin', int())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.is_difop != other.is_difop:
            return False
        if self.is_frame_begin != other.is_frame_begin:
            return False
        if self.data != other.data:
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
    def is_difop(self):
        """Message field 'is_difop'."""
        return self._is_difop

    @is_difop.setter
    def is_difop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_difop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_difop' field must be an unsigned integer in [0, 255]"
        self._is_difop = value

    @property
    def is_frame_begin(self):
        """Message field 'is_frame_begin'."""
        return self._is_frame_begin

    @is_frame_begin.setter
    def is_frame_begin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_frame_begin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_frame_begin' field must be an unsigned integer in [0, 255]"
        self._is_frame_begin = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
