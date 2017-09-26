// Generated by gencpp from file nasa_r2_common_msgs/JointControl.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROL_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROL_H


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
struct JointControl_
{
  typedef JointControl_<ContainerAllocator> Type;

  JointControl_()
    : publisher()
    , timeStamp(0.0)
    , joint()
    , registerValue(0)
    , enableBridge(false)
    , enableMotor(false)
    , releaseBrake(false)
    , embeddedMotCom(false)
    , controlMode(0)
    , clearFaults(false)  {
    }
  JointControl_(const ContainerAllocator& _alloc)
    : publisher(_alloc)
    , timeStamp(0.0)
    , joint(_alloc)
    , registerValue(0)
    , enableBridge(false)
    , enableMotor(false)
    , releaseBrake(false)
    , embeddedMotCom(false)
    , controlMode(0)
    , clearFaults(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _publisher_type;
  _publisher_type publisher;

   typedef double _timeStamp_type;
  _timeStamp_type timeStamp;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_type;
  _joint_type joint;

   typedef uint32_t _registerValue_type;
  _registerValue_type registerValue;

   typedef uint8_t _enableBridge_type;
  _enableBridge_type enableBridge;

   typedef uint8_t _enableMotor_type;
  _enableMotor_type enableMotor;

   typedef uint8_t _releaseBrake_type;
  _releaseBrake_type releaseBrake;

   typedef uint8_t _embeddedMotCom_type;
  _embeddedMotCom_type embeddedMotCom;

   typedef uint16_t _controlMode_type;
  _controlMode_type controlMode;

   typedef uint8_t _clearFaults_type;
  _clearFaults_type clearFaults;




  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> const> ConstPtr;

}; // struct JointControl_

typedef ::nasa_r2_common_msgs::JointControl_<std::allocator<void> > JointControl;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControl > JointControlPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControl const> JointControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e38c02f4ffdedb57646a4576b7e0ccf6";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe38c02f4ffdedb57ULL;
  static const uint64_t static_value2 = 0x646a4576b7e0ccf6ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointControl";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string publisher\n\
float64 timeStamp\n\
string joint\n\
uint32 registerValue\n\
bool enableBridge\n\
bool enableMotor\n\
bool releaseBrake\n\
bool embeddedMotCom\n\
uint16 controlMode\n\
bool clearFaults\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.publisher);
      stream.next(m.timeStamp);
      stream.next(m.joint);
      stream.next(m.registerValue);
      stream.next(m.enableBridge);
      stream.next(m.enableMotor);
      stream.next(m.releaseBrake);
      stream.next(m.embeddedMotCom);
      stream.next(m.controlMode);
      stream.next(m.clearFaults);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointControl_<ContainerAllocator>& v)
  {
    s << indent << "publisher: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.publisher);
    s << indent << "timeStamp: ";
    Printer<double>::stream(s, indent + "  ", v.timeStamp);
    s << indent << "joint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint);
    s << indent << "registerValue: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.registerValue);
    s << indent << "enableBridge: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableBridge);
    s << indent << "enableMotor: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableMotor);
    s << indent << "releaseBrake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.releaseBrake);
    s << indent << "embeddedMotCom: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.embeddedMotCom);
    s << indent << "controlMode: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.controlMode);
    s << indent << "clearFaults: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clearFaults);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROL_H
