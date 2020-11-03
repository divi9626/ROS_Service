// Generated by gencpp from file beginner_tutorials/changeBaseString.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRING_H
#define BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRING_H

#include <ros/service_traits.h>


#include <beginner_tutorials/changeBaseStringRequest.h>
#include <beginner_tutorials/changeBaseStringResponse.h>


namespace beginner_tutorials
{

struct changeBaseString
{

typedef changeBaseStringRequest Request;
typedef changeBaseStringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct changeBaseString
} // namespace beginner_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::beginner_tutorials::changeBaseString > {
  static const char* value()
  {
    return "46f552d87d2d70b2ba3ed0f446c8da6f";
  }

  static const char* value(const ::beginner_tutorials::changeBaseString&) { return value(); }
};

template<>
struct DataType< ::beginner_tutorials::changeBaseString > {
  static const char* value()
  {
    return "beginner_tutorials/changeBaseString";
  }

  static const char* value(const ::beginner_tutorials::changeBaseString&) { return value(); }
};


// service_traits::MD5Sum< ::beginner_tutorials::changeBaseStringRequest> should match 
// service_traits::MD5Sum< ::beginner_tutorials::changeBaseString > 
template<>
struct MD5Sum< ::beginner_tutorials::changeBaseStringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::changeBaseString >::value();
  }
  static const char* value(const ::beginner_tutorials::changeBaseStringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::changeBaseStringRequest> should match 
// service_traits::DataType< ::beginner_tutorials::changeBaseString > 
template<>
struct DataType< ::beginner_tutorials::changeBaseStringRequest>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::changeBaseString >::value();
  }
  static const char* value(const ::beginner_tutorials::changeBaseStringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::beginner_tutorials::changeBaseStringResponse> should match 
// service_traits::MD5Sum< ::beginner_tutorials::changeBaseString > 
template<>
struct MD5Sum< ::beginner_tutorials::changeBaseStringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::beginner_tutorials::changeBaseString >::value();
  }
  static const char* value(const ::beginner_tutorials::changeBaseStringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::beginner_tutorials::changeBaseStringResponse> should match 
// service_traits::DataType< ::beginner_tutorials::changeBaseString > 
template<>
struct DataType< ::beginner_tutorials::changeBaseStringResponse>
{
  static const char* value()
  {
    return DataType< ::beginner_tutorials::changeBaseString >::value();
  }
  static const char* value(const ::beginner_tutorials::changeBaseStringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_CHANGEBASESTRING_H