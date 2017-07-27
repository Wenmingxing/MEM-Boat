/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/lukewen/heron_ws/src/heron/heron_msgs/msg/Sense.msg
 *
 */


#ifndef HERON_MSGS_MESSAGE_SENSE_H
#define HERON_MSGS_MESSAGE_SENSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace heron_msgs
{
template <class ContainerAllocator>
struct Sense_
{
  typedef Sense_<ContainerAllocator> Type;

  Sense_()
    : header()
    , battery(0.0)
    , current_left(0.0)
    , current_right(0.0)
    , rc(0)
    , rc_throttle(0)
    , rc_rotation(0)
    , rc_enable(0)  {
    }
  Sense_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , battery(0.0)
    , current_left(0.0)
    , current_right(0.0)
    , rc(0)
    , rc_throttle(0)
    , rc_rotation(0)
    , rc_enable(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _battery_type;
  _battery_type battery;

   typedef float _current_left_type;
  _current_left_type current_left;

   typedef float _current_right_type;
  _current_right_type current_right;

   typedef uint8_t _rc_type;
  _rc_type rc;

   typedef uint16_t _rc_throttle_type;
  _rc_throttle_type rc_throttle;

   typedef uint16_t _rc_rotation_type;
  _rc_rotation_type rc_rotation;

   typedef uint16_t _rc_enable_type;
  _rc_enable_type rc_enable;


    enum { RC_INRANGE = 1 };
     enum { RC_INUSE = 2 };
 

  typedef boost::shared_ptr< ::heron_msgs::Sense_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::heron_msgs::Sense_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Sense_

typedef ::heron_msgs::Sense_<std::allocator<void> > Sense;

typedef boost::shared_ptr< ::heron_msgs::Sense > SensePtr;
typedef boost::shared_ptr< ::heron_msgs::Sense const> SenseConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::heron_msgs::Sense_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::heron_msgs::Sense_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace heron_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'heron_msgs': ['/home/lukewen/heron_ws/src/heron/heron_msgs/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::heron_msgs::Sense_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::heron_msgs::Sense_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_msgs::Sense_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_msgs::Sense_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_msgs::Sense_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_msgs::Sense_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::heron_msgs::Sense_<ContainerAllocator> >
{
  static const char* value()
  {
    return "56d1cbddc5154c7883e86d1d6d7fe153";
  }

  static const char* value(const ::heron_msgs::Sense_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x56d1cbddc5154c78ULL;
  static const uint64_t static_value2 = 0x83e86d1d6d7fe153ULL;
};

template<class ContainerAllocator>
struct DataType< ::heron_msgs::Sense_<ContainerAllocator> >
{
  static const char* value()
  {
    return "heron_msgs/Sense";
  }

  static const char* value(const ::heron_msgs::Sense_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::heron_msgs::Sense_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# General MCU status for Heron transmitted from the MCU\n\
# to higher-level software on the /sense topic.\n\
\n\
Header header\n\
\n\
# Voltage level of battery, in volts\n\
float32 battery\n\
\n\
# Instantaneous current drawn by each motor, in amps.\n\
float32 current_left\n\
float32 current_right\n\
\n\
# Bitfield represents status of hobby R/C override.\n\
uint8 RC_INRANGE=1\n\
uint8 RC_INUSE=2\n\
uint8 rc\n\
\n\
# Pulse lengths received from the three R/C channels.\n\
uint16 rc_throttle\n\
uint16 rc_rotation\n\
uint16 rc_enable\n\
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
";
  }

  static const char* value(const ::heron_msgs::Sense_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::heron_msgs::Sense_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.battery);
      stream.next(m.current_left);
      stream.next(m.current_right);
      stream.next(m.rc);
      stream.next(m.rc_throttle);
      stream.next(m.rc_rotation);
      stream.next(m.rc_enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Sense_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::heron_msgs::Sense_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::heron_msgs::Sense_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "battery: ";
    Printer<float>::stream(s, indent + "  ", v.battery);
    s << indent << "current_left: ";
    Printer<float>::stream(s, indent + "  ", v.current_left);
    s << indent << "current_right: ";
    Printer<float>::stream(s, indent + "  ", v.current_right);
    s << indent << "rc: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rc);
    s << indent << "rc_throttle: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rc_throttle);
    s << indent << "rc_rotation: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rc_rotation);
    s << indent << "rc_enable: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rc_enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERON_MSGS_MESSAGE_SENSE_H
