// Generated by gencpp from file beginner_tutorials/changeBaseStringRequest.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRINGREQUEST_H
#define BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct changeBaseStringRequest_
{
  typedef changeBaseStringRequest_<ContainerAllocator> Type;

  changeBaseStringRequest_()
    : inputString()  {
    }
  changeBaseStringRequest_(const ContainerAllocator& _alloc)
    : inputString(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _inputString_type;
  _inputString_type inputString;





  typedef boost::shared_ptr< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct changeBaseStringRequest_

typedef ::beginner_tutorials::changeBaseStringRequest_<std::allocator<void> > changeBaseStringRequest;

typedef boost::shared_ptr< ::beginner_tutorials::changeBaseStringRequest > changeBaseStringRequestPtr;
typedef boost::shared_ptr< ::beginner_tutorials::changeBaseStringRequest const> changeBaseStringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "998e350d95d4a84f3e250cb220ede566";
  }

  static const char* value(const ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x998e350d95d4a84fULL;
  static const uint64_t static_value2 = 0x3e250cb220ede566ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/changeBaseStringRequest";
  }

  static const char* value(const ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string inputString\n\
\n\
";
  }

  static const char* value(const ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.inputString);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct changeBaseStringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::changeBaseStringRequest_<ContainerAllocator>& v)
  {
    s << indent << "inputString: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.inputString);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRINGREQUEST_H