/* Auto-generated by genmsg_cpp for file /home/diro/ros_workspace/final_project/trunk/manipulation_transforms/srv/MapObjectPoseToEffectors.srv */
#ifndef MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTPOSETOEFFECTORS_H
#define MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTPOSETOEFFECTORS_H
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


#include "geometry_msgs/PoseStamped.h"

namespace manipulation_transforms
{
template <class ContainerAllocator>
struct MapObjectPoseToEffectorsRequest_ {
  typedef MapObjectPoseToEffectorsRequest_<ContainerAllocator> Type;

  MapObjectPoseToEffectorsRequest_()
  : object_pose()
  {
  }

  MapObjectPoseToEffectorsRequest_(const ContainerAllocator& _alloc)
  : object_pose(_alloc)
  {
  }

  typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _object_pose_type;
   ::geometry_msgs::PoseStamped_<ContainerAllocator>  object_pose;


  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MapObjectPoseToEffectorsRequest
typedef  ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<std::allocator<void> > MapObjectPoseToEffectorsRequest;

typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsRequest> MapObjectPoseToEffectorsRequestPtr;
typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsRequest const> MapObjectPoseToEffectorsRequestConstPtr;


template <class ContainerAllocator>
struct MapObjectPoseToEffectorsResponse_ {
  typedef MapObjectPoseToEffectorsResponse_<ContainerAllocator> Type;

  MapObjectPoseToEffectorsResponse_()
  : effector_poses()
  {
  }

  MapObjectPoseToEffectorsResponse_(const ContainerAllocator& _alloc)
  : effector_poses(_alloc)
  {
  }

  typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _effector_poses_type;
  std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  effector_poses;


  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MapObjectPoseToEffectorsResponse
typedef  ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<std::allocator<void> > MapObjectPoseToEffectorsResponse;

typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsResponse> MapObjectPoseToEffectorsResponsePtr;
typedef boost::shared_ptr< ::manipulation_transforms::MapObjectPoseToEffectorsResponse const> MapObjectPoseToEffectorsResponseConstPtr;

struct MapObjectPoseToEffectors
{

typedef MapObjectPoseToEffectorsRequest Request;
typedef MapObjectPoseToEffectorsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct MapObjectPoseToEffectors
} // namespace manipulation_transforms

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ce62f562fe862ddbebe5377023767cb7";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xce62f562fe862ddbULL;
  static const uint64_t static_value2 = 0xebe5377023767cb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectPoseToEffectorsRequest";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
geometry_msgs/PoseStamped object_pose\n\
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
";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "175b382c67666ecb6c87e1a22c5729fc";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x175b382c67666ecbULL;
  static const uint64_t static_value2 = 0x6c87e1a22c5729fcULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectPoseToEffectorsResponse";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
geometry_msgs/PoseStamped[] effector_poses\n\
\n\
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
";
  }

  static const char* value(const  ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.object_pose);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MapObjectPoseToEffectorsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.effector_poses);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MapObjectPoseToEffectorsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<manipulation_transforms::MapObjectPoseToEffectors> {
  static const char* value() 
  {
    return "fe420bd1f193579a27ccff2bf656fb54";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectors&) { return value(); } 
};

template<>
struct DataType<manipulation_transforms::MapObjectPoseToEffectors> {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectPoseToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectors&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fe420bd1f193579a27ccff2bf656fb54";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectPoseToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fe420bd1f193579a27ccff2bf656fb54";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manipulation_transforms/MapObjectPoseToEffectors";
  }

  static const char* value(const manipulation_transforms::MapObjectPoseToEffectorsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MANIPULATION_TRANSFORMS_SERVICE_MAPOBJECTPOSETOEFFECTORS_H

