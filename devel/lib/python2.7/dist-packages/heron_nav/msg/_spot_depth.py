"""autogenerated by genpy from heron_nav/spot_depth.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class spot_depth(genpy.Message):
  _md5sum = "01258744ab691c1e7c1bc57483923e07"
  _type = "heron_nav/spot_depth"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """#The depth for the spot
float64 depth

#The latitude for the spot
float64 lat_spot

#The longtitude for the spot
float64 long_spot

"""
  __slots__ = ['depth','lat_spot','long_spot']
  _slot_types = ['float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       depth,lat_spot,long_spot

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(spot_depth, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.depth is None:
        self.depth = 0.
      if self.lat_spot is None:
        self.lat_spot = 0.
      if self.long_spot is None:
        self.long_spot = 0.
    else:
      self.depth = 0.
      self.lat_spot = 0.
      self.long_spot = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3d.pack(_x.depth, _x.lat_spot, _x.long_spot))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.depth, _x.lat_spot, _x.long_spot,) = _struct_3d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3d.pack(_x.depth, _x.lat_spot, _x.long_spot))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.depth, _x.lat_spot, _x.long_spot,) = _struct_3d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3d = struct.Struct("<3d")
