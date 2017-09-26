// Generated by gencpp from file nasa_r2_common_msgs/PDMCStatus.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_PDMCSTATUS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_PDMCSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct PDMCStatus_
{
  typedef PDMCStatus_<ContainerAllocator> Type;

  PDMCStatus_()
    : publisher()
    , registerValue(0)
    , logicEnabled(false)
    , motorEnabled(false)  {
    }
  PDMCStatus_(const ContainerAllocator& _alloc)
    : publisher(_alloc)
    , registerValue(0)
    , logicEnabled(false)
    , motorEnabled(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _publisher_type;
  _publisher_type publisher;

   typedef uint32_t _registerValue_type;
  _registerValue_type registerValue;

   typedef uint8_t _logicEnabled_type;
  _logicEnabled_type logicEnabled;

   typedef uint8_t _motorEnabled_type;
  _motorEnabled_type motorEnabled;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> const> ConstPtr;

}; // struct PDMCStatus_

typedef ::nasa_r2_common_msgs::PDMCStatus_<std::allocator<void> > PDMCStatus;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::PDMCStatus > PDMCStatusPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::PDMCStatus const> PDMCStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/bz6w8b/projects/ROS-Basics/src/deprecated_nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a68d9dc9991d8f304fc3adff90114aa5";
  }

  static const char* value(const ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa68d9dc9991d8f30ULL;
  static const uint64_t static_value2 = 0x4fc3adff90114aa5ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/PDMCStatus";
  }

  static const char* value(const ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string publisher\n\
uint32 registerValue\n\
bool logicEnabled\n\
bool motorEnabled\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.publisher);
      stream.next(m.registerValue);
      stream.next(m.logicEnabled);
      stream.next(m.motorEnabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PDMCStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::PDMCStatus_<ContainerAllocator>& v)
  {
    s << indent << "publisher: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.publisher);
    s << indent << "registerValue: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.registerValue);
    s << indent << "logicEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.logicEnabled);
    s << indent << "motorEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motorEnabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_PDMCSTATUS_H
