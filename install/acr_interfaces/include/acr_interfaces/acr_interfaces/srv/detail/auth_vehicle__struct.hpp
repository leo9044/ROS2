// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/srv/auth_vehicle.hpp"


#ifndef ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_HPP_
#define ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Request __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Request __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AuthVehicle_Request_
{
  using Type = AuthVehicle_Request_<ContainerAllocator>;

  explicit AuthVehicle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin_number = "";
    }
  }

  explicit AuthVehicle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vin_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vin_number = "";
    }
  }

  // field types and members
  using _vin_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vin_number_type vin_number;

  // setters for named parameter idiom
  Type & set__vin_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vin_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Request
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Request
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthVehicle_Request_ & other) const
  {
    if (this->vin_number != other.vin_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuthVehicle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthVehicle_Request_

// alias to use template instance with default allocator
using AuthVehicle_Request =
  acr_interfaces::srv::AuthVehicle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace acr_interfaces


#ifndef _WIN32
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Response __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Response __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AuthVehicle_Response_
{
  using Type = AuthVehicle_Response_<ContainerAllocator>;

  explicit AuthVehicle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_approved = false;
    }
  }

  explicit AuthVehicle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_approved = false;
    }
  }

  // field types and members
  using _is_approved_type =
    bool;
  _is_approved_type is_approved;

  // setters for named parameter idiom
  Type & set__is_approved(
    const bool & _arg)
  {
    this->is_approved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Response
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Response
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthVehicle_Response_ & other) const
  {
    if (this->is_approved != other.is_approved) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuthVehicle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthVehicle_Response_

// alias to use template instance with default allocator
using AuthVehicle_Response =
  acr_interfaces::srv::AuthVehicle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace acr_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Event __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__srv__AuthVehicle_Event __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AuthVehicle_Event_
{
  using Type = AuthVehicle_Event_<ContainerAllocator>;

  explicit AuthVehicle_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AuthVehicle_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::srv::AuthVehicle_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::srv::AuthVehicle_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Event
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__srv__AuthVehicle_Event
    std::shared_ptr<acr_interfaces::srv::AuthVehicle_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthVehicle_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuthVehicle_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthVehicle_Event_

// alias to use template instance with default allocator
using AuthVehicle_Event =
  acr_interfaces::srv::AuthVehicle_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace acr_interfaces

namespace acr_interfaces
{

namespace srv
{

struct AuthVehicle
{
  using Request = acr_interfaces::srv::AuthVehicle_Request;
  using Response = acr_interfaces::srv::AuthVehicle_Response;
  using Event = acr_interfaces::srv::AuthVehicle_Event;
};

}  // namespace srv

}  // namespace acr_interfaces

#endif  // ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_HPP_
