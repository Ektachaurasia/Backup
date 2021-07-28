// Generated by gencpp from file i2cpwm_board/ServosConfigResponse.msg
// DO NOT EDIT!


#ifndef I2CPWM_BOARD_MESSAGE_SERVOSCONFIGRESPONSE_H
#define I2CPWM_BOARD_MESSAGE_SERVOSCONFIGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace i2cpwm_board
{
template <class ContainerAllocator>
struct ServosConfigResponse_
{
  typedef ServosConfigResponse_<ContainerAllocator> Type;

  ServosConfigResponse_()
    : error(0)  {
    }
  ServosConfigResponse_(const ContainerAllocator& _alloc)
    : error(0)  {
  (void)_alloc;
    }



   typedef int16_t _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServosConfigResponse_

typedef ::i2cpwm_board::ServosConfigResponse_<std::allocator<void> > ServosConfigResponse;

typedef boost::shared_ptr< ::i2cpwm_board::ServosConfigResponse > ServosConfigResponsePtr;
typedef boost::shared_ptr< ::i2cpwm_board::ServosConfigResponse const> ServosConfigResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator1> & lhs, const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator2> & rhs)
{
  return lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator1> & lhs, const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace i2cpwm_board

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62df06fbed46eb687891e363579eb0f0";
  }

  static const char* value(const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62df06fbed46eb68ULL;
  static const uint64_t static_value2 = 0x7891e363579eb0f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "i2cpwm_board/ServosConfigResponse";
  }

  static const char* value(const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 error\n"
"\n"
;
  }

  static const char* value(const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServosConfigResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::i2cpwm_board::ServosConfigResponse_<ContainerAllocator>& v)
  {
    s << indent << "error: ";
    Printer<int16_t>::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // I2CPWM_BOARD_MESSAGE_SERVOSCONFIGRESPONSE_H