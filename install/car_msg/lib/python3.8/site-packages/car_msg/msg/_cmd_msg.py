# generated from rosidl_generator_py/resource/_idl.py.em
# with input from car_msg:msg/CmdMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CmdMsg(type):
    """Metaclass of message 'CmdMsg'."""

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
            module = import_type_support('car_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'car_msg.msg.CmdMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cmd_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cmd_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cmd_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cmd_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cmd_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CmdMsg(metaclass=Metaclass_CmdMsg):
    """Message class 'CmdMsg'."""

    __slots__ = [
        '_velocity',
        '_steering',
        '_brake',
        '_gears',
        '_led',
    ]

    _fields_and_field_types = {
        'velocity': 'int32',
        'steering': 'int32',
        'brake': 'int32',
        'gears': 'int32',
        'led': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.velocity = kwargs.get('velocity', int())
        self.steering = kwargs.get('steering', int())
        self.brake = kwargs.get('brake', int())
        self.gears = kwargs.get('gears', int())
        self.led = kwargs.get('led', str())

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
        if self.velocity != other.velocity:
            return False
        if self.steering != other.steering:
            return False
        if self.brake != other.brake:
            return False
        if self.gears != other.gears:
            return False
        if self.led != other.led:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'velocity' field must be an integer in [-2147483648, 2147483647]"
        self._velocity = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'steering' field must be an integer in [-2147483648, 2147483647]"
        self._steering = value

    @property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brake' field must be an integer in [-2147483648, 2147483647]"
        self._brake = value

    @property
    def gears(self):
        """Message field 'gears'."""
        return self._gears

    @gears.setter
    def gears(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gears' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gears' field must be an integer in [-2147483648, 2147483647]"
        self._gears = value

    @property
    def led(self):
        """Message field 'led'."""
        return self._led

    @led.setter
    def led(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'led' field must be of type 'str'"
        self._led = value
