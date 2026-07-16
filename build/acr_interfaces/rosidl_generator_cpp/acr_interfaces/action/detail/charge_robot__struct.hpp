// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from acr_interfaces:action/ChargeRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/action/charge_robot.hpp"


#ifndef ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_HPP_
#define ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Goal __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Goal __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_Goal_
{
  using Type = ChargeRobot_Goal_<ContainerAllocator>;

  explicit ChargeRobot_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_angle = 0.0;
    }
  }

  explicit ChargeRobot_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_angle = 0.0;
    }
  }

  // field types and members
  using _target_angle_type =
    double;
  _target_angle_type target_angle;

  // setters for named parameter idiom
  Type & set__target_angle(
    const double & _arg)
  {
    this->target_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Goal
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Goal
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_Goal_ & other) const
  {
    if (this->target_angle != other.target_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_Goal_

// alias to use template instance with default allocator
using ChargeRobot_Goal =
  acr_interfaces::action::ChargeRobot_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Result __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Result __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_Result_
{
  using Type = ChargeRobot_Result_<ContainerAllocator>;

  explicit ChargeRobot_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ChargeRobot_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Result
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Result
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_Result_

// alias to use template instance with default allocator
using ChargeRobot_Result =
  acr_interfaces::action::ChargeRobot_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_Feedback __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_Feedback_
{
  using Type = ChargeRobot_Feedback_<ContainerAllocator>;

  explicit ChargeRobot_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_percent = 0.0;
    }
  }

  explicit ChargeRobot_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_percent = 0.0;
    }
  }

  // field types and members
  using _current_percent_type =
    double;
  _current_percent_type current_percent;

  // setters for named parameter idiom
  Type & set__current_percent(
    const double & _arg)
  {
    this->current_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Feedback
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_Feedback
    std::shared_ptr<acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_Feedback_ & other) const
  {
    if (this->current_percent != other.current_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_Feedback_

// alias to use template instance with default allocator
using ChargeRobot_Feedback =
  acr_interfaces::action::ChargeRobot_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "acr_interfaces/action/detail/charge_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Request __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_SendGoal_Request_
{
  using Type = ChargeRobot_SendGoal_Request_<ContainerAllocator>;

  explicit ChargeRobot_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ChargeRobot_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const acr_interfaces::action::ChargeRobot_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Request
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Request
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_SendGoal_Request_

// alias to use template instance with default allocator
using ChargeRobot_SendGoal_Request =
  acr_interfaces::action::ChargeRobot_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Response __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_SendGoal_Response_
{
  using Type = ChargeRobot_SendGoal_Response_<ContainerAllocator>;

  explicit ChargeRobot_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ChargeRobot_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Response
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Response
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_SendGoal_Response_

// alias to use template instance with default allocator
using ChargeRobot_SendGoal_Response =
  acr_interfaces::action::ChargeRobot_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Event __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_SendGoal_Event_
{
  using Type = ChargeRobot_SendGoal_Event_<ContainerAllocator>;

  explicit ChargeRobot_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChargeRobot_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Event
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_SendGoal_Event
    std::shared_ptr<acr_interfaces::action::ChargeRobot_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_SendGoal_Event_ & other) const
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
  bool operator!=(const ChargeRobot_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_SendGoal_Event_

// alias to use template instance with default allocator
using ChargeRobot_SendGoal_Event =
  acr_interfaces::action::ChargeRobot_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces

namespace acr_interfaces
{

namespace action
{

struct ChargeRobot_SendGoal
{
  using Request = acr_interfaces::action::ChargeRobot_SendGoal_Request;
  using Response = acr_interfaces::action::ChargeRobot_SendGoal_Response;
  using Event = acr_interfaces::action::ChargeRobot_SendGoal_Event;
};

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Request __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_GetResult_Request_
{
  using Type = ChargeRobot_GetResult_Request_<ContainerAllocator>;

  explicit ChargeRobot_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ChargeRobot_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Request
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Request
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_GetResult_Request_

// alias to use template instance with default allocator
using ChargeRobot_GetResult_Request =
  acr_interfaces::action::ChargeRobot_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "acr_interfaces/action/detail/charge_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Response __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_GetResult_Response_
{
  using Type = ChargeRobot_GetResult_Response_<ContainerAllocator>;

  explicit ChargeRobot_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ChargeRobot_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const acr_interfaces::action::ChargeRobot_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Response
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Response
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_GetResult_Response_

// alias to use template instance with default allocator
using ChargeRobot_GetResult_Response =
  acr_interfaces::action::ChargeRobot_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Event __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_GetResult_Event_
{
  using Type = ChargeRobot_GetResult_Event_<ContainerAllocator>;

  explicit ChargeRobot_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ChargeRobot_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<acr_interfaces::action::ChargeRobot_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Event
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_GetResult_Event
    std::shared_ptr<acr_interfaces::action::ChargeRobot_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_GetResult_Event_ & other) const
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
  bool operator!=(const ChargeRobot_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_GetResult_Event_

// alias to use template instance with default allocator
using ChargeRobot_GetResult_Event =
  acr_interfaces::action::ChargeRobot_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces

namespace acr_interfaces
{

namespace action
{

struct ChargeRobot_GetResult
{
  using Request = acr_interfaces::action::ChargeRobot_GetResult_Request;
  using Response = acr_interfaces::action::ChargeRobot_GetResult_Response;
  using Event = acr_interfaces::action::ChargeRobot_GetResult_Event;
};

}  // namespace action

}  // namespace acr_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "acr_interfaces/action/detail/charge_robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__acr_interfaces__action__ChargeRobot_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__acr_interfaces__action__ChargeRobot_FeedbackMessage __declspec(deprecated)
#endif

namespace acr_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ChargeRobot_FeedbackMessage_
{
  using Type = ChargeRobot_FeedbackMessage_<ContainerAllocator>;

  explicit ChargeRobot_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ChargeRobot_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const acr_interfaces::action::ChargeRobot_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_FeedbackMessage
    std::shared_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__acr_interfaces__action__ChargeRobot_FeedbackMessage
    std::shared_ptr<acr_interfaces::action::ChargeRobot_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeRobot_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeRobot_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeRobot_FeedbackMessage_

// alias to use template instance with default allocator
using ChargeRobot_FeedbackMessage =
  acr_interfaces::action::ChargeRobot_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace acr_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace acr_interfaces
{

namespace action
{

struct ChargeRobot
{
  /// The goal message defined in the action definition.
  using Goal = acr_interfaces::action::ChargeRobot_Goal;
  /// The result message defined in the action definition.
  using Result = acr_interfaces::action::ChargeRobot_Result;
  /// The feedback message defined in the action definition.
  using Feedback = acr_interfaces::action::ChargeRobot_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = acr_interfaces::action::ChargeRobot_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = acr_interfaces::action::ChargeRobot_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = acr_interfaces::action::ChargeRobot_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ChargeRobot ChargeRobot;

}  // namespace action

}  // namespace acr_interfaces

#endif  // ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_HPP_
