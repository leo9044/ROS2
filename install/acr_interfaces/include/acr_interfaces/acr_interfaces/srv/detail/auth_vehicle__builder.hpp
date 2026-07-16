// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/srv/auth_vehicle.hpp"


#ifndef ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__BUILDER_HPP_
#define ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acr_interfaces/srv/detail/auth_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acr_interfaces
{

namespace srv
{

namespace builder
{

class Init_AuthVehicle_Request_vin_number
{
public:
  Init_AuthVehicle_Request_vin_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::srv::AuthVehicle_Request vin_number(::acr_interfaces::srv::AuthVehicle_Request::_vin_number_type arg)
  {
    msg_.vin_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::srv::AuthVehicle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::srv::AuthVehicle_Request>()
{
  return acr_interfaces::srv::builder::Init_AuthVehicle_Request_vin_number();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace srv
{

namespace builder
{

class Init_AuthVehicle_Response_is_approved
{
public:
  Init_AuthVehicle_Response_is_approved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::srv::AuthVehicle_Response is_approved(::acr_interfaces::srv::AuthVehicle_Response::_is_approved_type arg)
  {
    msg_.is_approved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::srv::AuthVehicle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::srv::AuthVehicle_Response>()
{
  return acr_interfaces::srv::builder::Init_AuthVehicle_Response_is_approved();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace srv
{

namespace builder
{

class Init_AuthVehicle_Event_response
{
public:
  explicit Init_AuthVehicle_Event_response(::acr_interfaces::srv::AuthVehicle_Event & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::srv::AuthVehicle_Event response(::acr_interfaces::srv::AuthVehicle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::srv::AuthVehicle_Event msg_;
};

class Init_AuthVehicle_Event_request
{
public:
  explicit Init_AuthVehicle_Event_request(::acr_interfaces::srv::AuthVehicle_Event & msg)
  : msg_(msg)
  {}
  Init_AuthVehicle_Event_response request(::acr_interfaces::srv::AuthVehicle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AuthVehicle_Event_response(msg_);
  }

private:
  ::acr_interfaces::srv::AuthVehicle_Event msg_;
};

class Init_AuthVehicle_Event_info
{
public:
  Init_AuthVehicle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuthVehicle_Event_request info(::acr_interfaces::srv::AuthVehicle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AuthVehicle_Event_request(msg_);
  }

private:
  ::acr_interfaces::srv::AuthVehicle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::srv::AuthVehicle_Event>()
{
  return acr_interfaces::srv::builder::Init_AuthVehicle_Event_info();
}

}  // namespace acr_interfaces

#endif  // ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__BUILDER_HPP_
