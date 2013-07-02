"""autogenerated by genpy from manipulation_transforms/MapEffectorTrajectoriesToObjectRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import manipulation_transforms.msg
import geometry_msgs.msg
import std_msgs.msg

class MapEffectorTrajectoriesToObjectRequest(genpy.Message):
  _md5sum = "5fcfcb6c0e23fcb5dc96ace4651de849"
  _type = "manipulation_transforms/MapEffectorTrajectoriesToObjectRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
EffectorTrajectories effector_traj

================================================================================
MSG: manipulation_transforms/EffectorTrajectories
# Array of EffectorTrajectoriesPoints of arbitrary length
EffectorTrajectoriesPoint[] pt

# Optional effector names
string[] names

================================================================================
MSG: manipulation_transforms/EffectorTrajectoriesPoint
# Array of poses, one for each effector
geometry_msgs/PoseStamped[] poses

# Array of twists, one for each effector
geometry_msgs/TwistStamped[] twists


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistStamped
# A twist with reference coordinate frame and timestamp
Header header
Twist twist

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into it's linear and angular parts. 
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['effector_traj']
  _slot_types = ['manipulation_transforms/EffectorTrajectories']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       effector_traj

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MapEffectorTrajectoriesToObjectRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.effector_traj is None:
        self.effector_traj = manipulation_transforms.msg.EffectorTrajectories()
    else:
      self.effector_traj = manipulation_transforms.msg.EffectorTrajectories()

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
      length = len(self.effector_traj.pt)
      buff.write(_struct_I.pack(length))
      for val1 in self.effector_traj.pt:
        length = len(val1.poses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.poses:
          _v1 = val2.header
          buff.write(_struct_I.pack(_v1.seq))
          _v2 = _v1.stamp
          _x = _v2
          buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
          _x = _v1.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v3 = val2.pose
          _v4 = _v3.position
          _x = _v4
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
          _v5 = _v3.orientation
          _x = _v5
          buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        length = len(val1.twists)
        buff.write(_struct_I.pack(length))
        for val2 in val1.twists:
          _v6 = val2.header
          buff.write(_struct_I.pack(_v6.seq))
          _v7 = _v6.stamp
          _x = _v7
          buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
          _x = _v6.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v8 = val2.twist
          _v9 = _v8.linear
          _x = _v9
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
          _v10 = _v8.angular
          _x = _v10
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
      length = len(self.effector_traj.names)
      buff.write(_struct_I.pack(length))
      for val1 in self.effector_traj.names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.effector_traj is None:
        self.effector_traj = manipulation_transforms.msg.EffectorTrajectories()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.effector_traj.pt = []
      for i in range(0, length):
        val1 = manipulation_transforms.msg.EffectorTrajectoriesPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.poses = []
        for i in range(0, length):
          val2 = geometry_msgs.msg.PoseStamped()
          _v11 = val2.header
          start = end
          end += 4
          (_v11.seq,) = _struct_I.unpack(str[start:end])
          _v12 = _v11.stamp
          _x = _v12
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v11.frame_id = str[start:end].decode('utf-8')
          else:
            _v11.frame_id = str[start:end]
          _v13 = val2.pose
          _v14 = _v13.position
          _x = _v14
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          _v15 = _v13.orientation
          _x = _v15
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
          val1.poses.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.twists = []
        for i in range(0, length):
          val2 = geometry_msgs.msg.TwistStamped()
          _v16 = val2.header
          start = end
          end += 4
          (_v16.seq,) = _struct_I.unpack(str[start:end])
          _v17 = _v16.stamp
          _x = _v17
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v16.frame_id = str[start:end].decode('utf-8')
          else:
            _v16.frame_id = str[start:end]
          _v18 = val2.twist
          _v19 = _v18.linear
          _x = _v19
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          _v20 = _v18.angular
          _x = _v20
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          val1.twists.append(val2)
        self.effector_traj.pt.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.effector_traj.names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.effector_traj.names.append(val1)
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
      length = len(self.effector_traj.pt)
      buff.write(_struct_I.pack(length))
      for val1 in self.effector_traj.pt:
        length = len(val1.poses)
        buff.write(_struct_I.pack(length))
        for val2 in val1.poses:
          _v21 = val2.header
          buff.write(_struct_I.pack(_v21.seq))
          _v22 = _v21.stamp
          _x = _v22
          buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
          _x = _v21.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v23 = val2.pose
          _v24 = _v23.position
          _x = _v24
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
          _v25 = _v23.orientation
          _x = _v25
          buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        length = len(val1.twists)
        buff.write(_struct_I.pack(length))
        for val2 in val1.twists:
          _v26 = val2.header
          buff.write(_struct_I.pack(_v26.seq))
          _v27 = _v26.stamp
          _x = _v27
          buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
          _x = _v26.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v28 = val2.twist
          _v29 = _v28.linear
          _x = _v29
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
          _v30 = _v28.angular
          _x = _v30
          buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
      length = len(self.effector_traj.names)
      buff.write(_struct_I.pack(length))
      for val1 in self.effector_traj.names:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.effector_traj is None:
        self.effector_traj = manipulation_transforms.msg.EffectorTrajectories()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.effector_traj.pt = []
      for i in range(0, length):
        val1 = manipulation_transforms.msg.EffectorTrajectoriesPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.poses = []
        for i in range(0, length):
          val2 = geometry_msgs.msg.PoseStamped()
          _v31 = val2.header
          start = end
          end += 4
          (_v31.seq,) = _struct_I.unpack(str[start:end])
          _v32 = _v31.stamp
          _x = _v32
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v31.frame_id = str[start:end].decode('utf-8')
          else:
            _v31.frame_id = str[start:end]
          _v33 = val2.pose
          _v34 = _v33.position
          _x = _v34
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          _v35 = _v33.orientation
          _x = _v35
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
          val1.poses.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.twists = []
        for i in range(0, length):
          val2 = geometry_msgs.msg.TwistStamped()
          _v36 = val2.header
          start = end
          end += 4
          (_v36.seq,) = _struct_I.unpack(str[start:end])
          _v37 = _v36.stamp
          _x = _v37
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v36.frame_id = str[start:end].decode('utf-8')
          else:
            _v36.frame_id = str[start:end]
          _v38 = val2.twist
          _v39 = _v38.linear
          _x = _v39
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          _v40 = _v38.angular
          _x = _v40
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
          val1.twists.append(val2)
        self.effector_traj.pt.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.effector_traj.names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8')
        else:
          val1 = str[start:end]
        self.effector_traj.names.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4d = struct.Struct("<4d")
_struct_2I = struct.Struct("<2I")
_struct_3d = struct.Struct("<3d")
"""autogenerated by genpy from manipulation_transforms/MapEffectorTrajectoriesToObjectResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class MapEffectorTrajectoriesToObjectResponse(genpy.Message):
  _md5sum = "6bdbe02a311e18b1367605cff2d93e69"
  _type = "manipulation_transforms/MapEffectorTrajectoriesToObjectResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
geometry_msgs/PoseStamped[] object_poses
geometry_msgs/TwistStamped[] object_twists


float64[] error


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistStamped
# A twist with reference coordinate frame and timestamp
Header header
Twist twist

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into it's linear and angular parts. 
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['object_poses','object_twists','error']
  _slot_types = ['geometry_msgs/PoseStamped[]','geometry_msgs/TwistStamped[]','float64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object_poses,object_twists,error

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MapEffectorTrajectoriesToObjectResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.object_poses is None:
        self.object_poses = []
      if self.object_twists is None:
        self.object_twists = []
      if self.error is None:
        self.error = []
    else:
      self.object_poses = []
      self.object_twists = []
      self.error = []

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
      length = len(self.object_poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_poses:
        _v41 = val1.header
        buff.write(_struct_I.pack(_v41.seq))
        _v42 = _v41.stamp
        _x = _v42
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v41.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v43 = val1.pose
        _v44 = _v43.position
        _x = _v44
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v45 = _v43.orientation
        _x = _v45
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.object_twists)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_twists:
        _v46 = val1.header
        buff.write(_struct_I.pack(_v46.seq))
        _v47 = _v46.stamp
        _x = _v47
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v46.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v48 = val1.twist
        _v49 = _v48.linear
        _x = _v49
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v50 = _v48.angular
        _x = _v50
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
      length = len(self.error)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.error))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.object_poses is None:
        self.object_poses = None
      if self.object_twists is None:
        self.object_twists = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.PoseStamped()
        _v51 = val1.header
        start = end
        end += 4
        (_v51.seq,) = _struct_I.unpack(str[start:end])
        _v52 = _v51.stamp
        _x = _v52
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v51.frame_id = str[start:end].decode('utf-8')
        else:
          _v51.frame_id = str[start:end]
        _v53 = val1.pose
        _v54 = _v53.position
        _x = _v54
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v55 = _v53.orientation
        _x = _v55
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        self.object_poses.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_twists = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.TwistStamped()
        _v56 = val1.header
        start = end
        end += 4
        (_v56.seq,) = _struct_I.unpack(str[start:end])
        _v57 = _v56.stamp
        _x = _v57
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v56.frame_id = str[start:end].decode('utf-8')
        else:
          _v56.frame_id = str[start:end]
        _v58 = val1.twist
        _v59 = _v58.linear
        _x = _v59
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v60 = _v58.angular
        _x = _v60
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        self.object_twists.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.error = struct.unpack(pattern, str[start:end])
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
      length = len(self.object_poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_poses:
        _v61 = val1.header
        buff.write(_struct_I.pack(_v61.seq))
        _v62 = _v61.stamp
        _x = _v62
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v61.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v63 = val1.pose
        _v64 = _v63.position
        _x = _v64
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v65 = _v63.orientation
        _x = _v65
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.object_twists)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_twists:
        _v66 = val1.header
        buff.write(_struct_I.pack(_v66.seq))
        _v67 = _v66.stamp
        _x = _v67
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v66.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v68 = val1.twist
        _v69 = _v68.linear
        _x = _v69
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v70 = _v68.angular
        _x = _v70
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
      length = len(self.error)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.error.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.object_poses is None:
        self.object_poses = None
      if self.object_twists is None:
        self.object_twists = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.PoseStamped()
        _v71 = val1.header
        start = end
        end += 4
        (_v71.seq,) = _struct_I.unpack(str[start:end])
        _v72 = _v71.stamp
        _x = _v72
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v71.frame_id = str[start:end].decode('utf-8')
        else:
          _v71.frame_id = str[start:end]
        _v73 = val1.pose
        _v74 = _v73.position
        _x = _v74
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v75 = _v73.orientation
        _x = _v75
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        self.object_poses.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_twists = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.TwistStamped()
        _v76 = val1.header
        start = end
        end += 4
        (_v76.seq,) = _struct_I.unpack(str[start:end])
        _v77 = _v76.stamp
        _x = _v77
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v76.frame_id = str[start:end].decode('utf-8')
        else:
          _v76.frame_id = str[start:end]
        _v78 = val1.twist
        _v79 = _v78.linear
        _x = _v79
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v80 = _v78.angular
        _x = _v80
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        self.object_twists.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.error = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4d = struct.Struct("<4d")
_struct_2I = struct.Struct("<2I")
_struct_3d = struct.Struct("<3d")
class MapEffectorTrajectoriesToObject(object):
  _type          = 'manipulation_transforms/MapEffectorTrajectoriesToObject'
  _md5sum = '15f599d66139397f83e4e0cee99f00bc'
  _request_class  = MapEffectorTrajectoriesToObjectRequest
  _response_class = MapEffectorTrajectoriesToObjectResponse
