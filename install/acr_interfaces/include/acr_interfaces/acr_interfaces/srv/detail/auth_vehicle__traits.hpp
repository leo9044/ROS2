// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/srv/auth_vehicle.hpp"


#ifndef ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__TRAITS_HPP_
#define ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "acr_interfaces/srv/detail/auth_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace acr_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuthVehicle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vin_number
  {
    out << "vin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.vin_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuthVehicle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vin_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.vin_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuthVehicle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace acr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use acr_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const acr_interfaces::srv::AuthVehicle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  acr_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acr_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const acr_interfaces::srv::AuthVehicle_Request & msg)
{
  return acr_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<acr_interfaces::srv::AuthVehicle_Request>()
{
  return "acr_interfaces::srv::AuthVehicle_Request";
}

template<>
inline const char * name<acr_interfaces::srv::AuthVehicle_Request>()
{
  return "acr_interfaces/srv/AuthVehicle_Request";
}

template<>
struct has_fixed_size<acr_interfaces::srv::AuthVehicle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<acr_interfaces::srv::AuthVehicle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<acr_interfaces::srv::AuthVehicle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace acr_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuthVehicle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_approved
  {
    out << "is_approved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_approved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuthVehicle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_approved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_approved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_approved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuthVehicle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace acr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use acr_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const acr_interfaces::srv::AuthVehicle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  acr_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acr_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const acr_interfaces::srv::AuthVehicle_Response & msg)
{
  return acr_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<acr_interfaces::srv::AuthVehicle_Response>()
{
  return "acr_interfaces::srv::AuthVehicle_Response";
}

template<>
inline const char * name<acr_interfaces::srv::AuthVehicle_Response>()
{
  return "acr_interfaces/srv/AuthVehicle_Response";
}

template<>
struct has_fixed_size<acr_interfaces::srv::AuthVehicle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<acr_interfaces::srv::AuthVehicle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<acr_interfaces::srv::AuthVehicle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace acr_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuthVehicle_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuthVehicle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuthVehicle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace acr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use acr_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const acr_interfaces::srv::AuthVehicle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  acr_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use acr_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const acr_interfaces::srv::AuthVehicle_Event & msg)
{
  return acr_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<acr_interfaces::srv::AuthVehicle_Event>()
{
  return "acr_interfaces::srv::AuthVehicle_Event";
}

template<>
inline const char * name<acr_interfaces::srv::AuthVehicle_Event>()
{
  return "acr_interfaces/srv/AuthVehicle_Event";
}

template<>
struct has_fixed_size<acr_interfaces::srv::AuthVehicle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<acr_interfaces::srv::AuthVehicle_Event>
  : std::integral_constant<bool, has_bounded_size<acr_interfaces::srv::AuthVehicle_Request>::value && has_bounded_size<acr_interfaces::srv::AuthVehicle_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<acr_interfaces::srv::AuthVehicle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<acr_interfaces::srv::AuthVehicle>()
{
  return "acr_interfaces::srv::AuthVehicle";
}

template<>
inline const char * name<acr_interfaces::srv::AuthVehicle>()
{
  return "acr_interfaces/srv/AuthVehicle";
}

template<>
struct has_fixed_size<acr_interfaces::srv::AuthVehicle>
  : std::integral_constant<
    bool,
    has_fixed_size<acr_interfaces::srv::AuthVehicle_Request>::value &&
    has_fixed_size<acr_interfaces::srv::AuthVehicle_Response>::value
  >
{
};

template<>
struct has_bounded_size<acr_interfaces::srv::AuthVehicle>
  : std::integral_constant<
    bool,
    has_bounded_size<acr_interfaces::srv::AuthVehicle_Request>::value &&
    has_bounded_size<acr_interfaces::srv::AuthVehicle_Response>::value
  >
{
};

template<>
struct is_service<acr_interfaces::srv::AuthVehicle>
  : std::true_type
{
};

template<>
struct is_service_request<acr_interfaces::srv::AuthVehicle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<acr_interfaces::srv::AuthVehicle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__TRAITS_HPP_
