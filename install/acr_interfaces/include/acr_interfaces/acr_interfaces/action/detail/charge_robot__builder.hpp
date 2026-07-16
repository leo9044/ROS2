// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from acr_interfaces:action/ChargeRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/action/charge_robot.hpp"


#ifndef ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_
#define ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "acr_interfaces/action/detail/charge_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Goal_target_angle
{
public:
  Init_ChargeRobot_Goal_target_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::action::ChargeRobot_Goal target_angle(::acr_interfaces::action::ChargeRobot_Goal::_target_angle_type arg)
  {
    msg_.target_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_Goal>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_Goal_target_angle();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Result_success
{
public:
  Init_ChargeRobot_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::action::ChargeRobot_Result success(::acr_interfaces::action::ChargeRobot_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_Result>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_Result_success();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Feedback_current_percent
{
public:
  Init_ChargeRobot_Feedback_current_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::action::ChargeRobot_Feedback current_percent(::acr_interfaces::action::ChargeRobot_Feedback::_current_percent_type arg)
  {
    msg_.current_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_Feedback>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_Feedback_current_percent();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_SendGoal_Request_goal
{
public:
  explicit Init_ChargeRobot_SendGoal_Request_goal(::acr_interfaces::action::ChargeRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_SendGoal_Request goal(::acr_interfaces::action::ChargeRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Request msg_;
};

class Init_ChargeRobot_SendGoal_Request_goal_id
{
public:
  Init_ChargeRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_SendGoal_Request_goal goal_id(::acr_interfaces::action::ChargeRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_SendGoal_Request>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_SendGoal_Request_goal_id();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_SendGoal_Response_stamp
{
public:
  explicit Init_ChargeRobot_SendGoal_Response_stamp(::acr_interfaces::action::ChargeRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_SendGoal_Response stamp(::acr_interfaces::action::ChargeRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Response msg_;
};

class Init_ChargeRobot_SendGoal_Response_accepted
{
public:
  Init_ChargeRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_SendGoal_Response_stamp accepted(::acr_interfaces::action::ChargeRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ChargeRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_SendGoal_Response>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_SendGoal_Response_accepted();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_SendGoal_Event_response
{
public:
  explicit Init_ChargeRobot_SendGoal_Event_response(::acr_interfaces::action::ChargeRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_SendGoal_Event response(::acr_interfaces::action::ChargeRobot_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Event msg_;
};

class Init_ChargeRobot_SendGoal_Event_request
{
public:
  explicit Init_ChargeRobot_SendGoal_Event_request(::acr_interfaces::action::ChargeRobot_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ChargeRobot_SendGoal_Event_response request(::acr_interfaces::action::ChargeRobot_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChargeRobot_SendGoal_Event_response(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Event msg_;
};

class Init_ChargeRobot_SendGoal_Event_info
{
public:
  Init_ChargeRobot_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_SendGoal_Event_request info(::acr_interfaces::action::ChargeRobot_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChargeRobot_SendGoal_Event_request(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_SendGoal_Event>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_SendGoal_Event_info();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_GetResult_Request_goal_id
{
public:
  Init_ChargeRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::acr_interfaces::action::ChargeRobot_GetResult_Request goal_id(::acr_interfaces::action::ChargeRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_GetResult_Request>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_GetResult_Request_goal_id();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_GetResult_Response_result
{
public:
  explicit Init_ChargeRobot_GetResult_Response_result(::acr_interfaces::action::ChargeRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_GetResult_Response result(::acr_interfaces::action::ChargeRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Response msg_;
};

class Init_ChargeRobot_GetResult_Response_status
{
public:
  Init_ChargeRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_GetResult_Response_result status(::acr_interfaces::action::ChargeRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargeRobot_GetResult_Response_result(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_GetResult_Response>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_GetResult_Response_status();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_GetResult_Event_response
{
public:
  explicit Init_ChargeRobot_GetResult_Event_response(::acr_interfaces::action::ChargeRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_GetResult_Event response(::acr_interfaces::action::ChargeRobot_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Event msg_;
};

class Init_ChargeRobot_GetResult_Event_request
{
public:
  explicit Init_ChargeRobot_GetResult_Event_request(::acr_interfaces::action::ChargeRobot_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ChargeRobot_GetResult_Event_response request(::acr_interfaces::action::ChargeRobot_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ChargeRobot_GetResult_Event_response(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Event msg_;
};

class Init_ChargeRobot_GetResult_Event_info
{
public:
  Init_ChargeRobot_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_GetResult_Event_request info(::acr_interfaces::action::ChargeRobot_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ChargeRobot_GetResult_Event_request(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_GetResult_Event>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_GetResult_Event_info();
}

}  // namespace acr_interfaces


namespace acr_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_FeedbackMessage_feedback
{
public:
  explicit Init_ChargeRobot_FeedbackMessage_feedback(::acr_interfaces::action::ChargeRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::acr_interfaces::action::ChargeRobot_FeedbackMessage feedback(::acr_interfaces::action::ChargeRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_FeedbackMessage msg_;
};

class Init_ChargeRobot_FeedbackMessage_goal_id
{
public:
  Init_ChargeRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_FeedbackMessage_feedback goal_id(::acr_interfaces::action::ChargeRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::acr_interfaces::action::ChargeRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::acr_interfaces::action::ChargeRobot_FeedbackMessage>()
{
  return acr_interfaces::action::builder::Init_ChargeRobot_FeedbackMessage_goal_id();
}

}  // namespace acr_interfaces

#endif  // ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_
