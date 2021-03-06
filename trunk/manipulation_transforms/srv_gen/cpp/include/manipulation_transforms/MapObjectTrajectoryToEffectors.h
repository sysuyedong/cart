/* Auto-generated by genmsg_cpp for file /home/diro/ros_workspace/final_project/trunk/manipulation_transforms/srv/MapObjectTrajectoryToEffectors.srv */
#ifndef MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTTRAJECTORYTOEFFECTORS_H
#define MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTTRAJECTORYTOEFFECTORS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/TwistStamped.h"


#include "manipulation_transforms/EffectorTrajectories.h"

namespace manipulation_transforms
{
template <class ContainerAllocator>
struct MapObjectTrajectoryToEffectorsRequest_ {
  typedef MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> Type;

  MapObjectTrajectoryToEffectorsRequest_()
  : object_poses()
  , object_twists()
  {
  }

  MapObjectTrajectoryToEffectorsRequest_(const ContainerAllocator& _alloc)
  : object_poses(_alloc)
  , object_twists(_alloc)
  {
  }

  typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _object_poses_type;
  std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  object_poses;

  typedef std::vector< ::geometry_msgs::TwistStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::TwistStamped_<ContainerAllocator> >::other >  _object_twists_type;
  std::vector< ::geometry_msgs::TwistStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::TwistStamped_<ContainerAllocator> >::other >  object_twists;


  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MapObjectTrajectoryToEffectorsRequest
typedef  ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<std::allocator<void> > MapObjectTrajectoryToEffectorsRequest;

typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest> MapObjectTrajectoryToEffectorsRequestPtr;
typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest const> MapObjectTrajectoryToEffectorsRequestConstPtr;


template <class ContainerAllocator>
struct MapObjectTrajectoryToEffectorsResponse_ {
  typedef MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> Type;

  MapObjectTrajectoryToEffectorsResponse_()
  : effector_traj()
  {
  }

  MapObjectTrajectoryToEffectorsResponse_(const ContainerAllocator& _alloc)
  : effector_traj(_alloc)
  {
  }

  typedef  ::manipulation_transforms::EffectorTrajectories_<ContainerAllocator>  _effector_traj_type;
   ::manipulation_transforms::EffectorTrajectories_<ContainerAllocator>  effector_traj;


  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MapObjectTrajectoryToEffectorsResponse
typedef  ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<std::allocator<void> > MapObjectTrajectoryToEffectorsResponse;

typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse> MapObjectTrajectoryToEffectorsResponsePtr;
typedef boost::shared_ptr< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse const> MapObjectTrajectoryToEffectorsResponseConstPtr;

struct MapObjectTrajectoryToEffectors
{

typedef MapObjectTrajectoryToEffectorsRequest Request;
typedef MapObjectTrajectoryToEffectorsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct MapObjectTrajectoryToEffectors
} // namespace manipulation_transforms

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2caf2e26fbc4770512bd547f13c7a55b";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2caf2e26fbc47705ULL;
  static const uint64_t static_value2 = 0x12bd547f13c7a55bULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectTrajectoryToEffectorsRequest";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
geometry_msgs/PoseStamped[] object_poses\n\
geometry_msgs/TwistStamped[] object_twists\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistStamped\n\
# A twist with reference coordinate frame and timestamp\n\
Header header\n\
Twist twist\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into it's linear and angular parts. \n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5fcfcb6c0e23fcb5dc96ace4651de849";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5fcfcb6c0e23fcb5ULL;
  static const uint64_t static_value2 = 0xdc96ace4651de849ULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectTrajectoryToEffectorsResponse";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
EffectorTrajectories effector_traj\n\
\n\
\n\
================================================================================\n\
MSG: manipulation_transforms/EffectorTrajectories\n\
# Array of EffectorTrajectoriesPoints of arbitrary length\n\
EffectorTrajectoriesPoint[] pt\n\
\n\
# Optional effector names\n\
string[] names\n\
\n\
================================================================================\n\
MSG: manipulation_transforms/EffectorTrajectoriesPoint\n\
# Array of poses, one for each effector\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
# Array of twists, one for each effector\n\
geometry_msgs/TwistStamped[] twists\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistStamped\n\
# A twist with reference coordinate frame and timestamp\n\
Header header\n\
Twist twist\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into it's linear and angular parts. \n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.object_poses);
    stream.next(m.object_twists);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MapObjectTrajectoryToEffectorsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.effector_traj);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MapObjectTrajectoryToEffectorsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<manipulation_transforms::MapObjectTrajectoryToEffectors> {
  static const char* value() 
  {
    return "4826779f151f916da731426fc4355b7a";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectors&) { return value(); } 
};

template<>
struct DataType<manipulation_transforms::MapObjectTrajectoryToEffectors> {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectTrajectoryToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectors&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4826779f151f916da731426fc4355b7a";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectTrajectoryToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4826779f151f916da731426fc4355b7a";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectTrajectoryToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectTrajectoryToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTTRAJECTORYTOEFFECTORS_H

