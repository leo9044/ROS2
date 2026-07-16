// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acr_interfaces:action/ChargeRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/action/charge_robot.h"


#ifndef ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_
#define ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_Goal
{
  double target_angle;
} acr_interfaces__action__ChargeRobot_Goal;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_Goal.
typedef struct acr_interfaces__action__ChargeRobot_Goal__Sequence
{
  acr_interfaces__action__ChargeRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_Result
{
  bool success;
} acr_interfaces__action__ChargeRobot_Result;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_Result.
typedef struct acr_interfaces__action__ChargeRobot_Result__Sequence
{
  acr_interfaces__action__ChargeRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_Feedback
{
  double current_percent;
} acr_interfaces__action__ChargeRobot_Feedback;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_Feedback.
typedef struct acr_interfaces__action__ChargeRobot_Feedback__Sequence
{
  acr_interfaces__action__ChargeRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "acr_interfaces/action/detail/charge_robot__struct.h"

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  acr_interfaces__action__ChargeRobot_Goal goal;
} acr_interfaces__action__ChargeRobot_SendGoal_Request;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_SendGoal_Request.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence
{
  acr_interfaces__action__ChargeRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} acr_interfaces__action__ChargeRobot_SendGoal_Response;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_SendGoal_Response.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence
{
  acr_interfaces__action__ChargeRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  acr_interfaces__action__ChargeRobot_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  acr_interfaces__action__ChargeRobot_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence request;
  acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence response;
} acr_interfaces__action__ChargeRobot_SendGoal_Event;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_SendGoal_Event.
typedef struct acr_interfaces__action__ChargeRobot_SendGoal_Event__Sequence
{
  acr_interfaces__action__ChargeRobot_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} acr_interfaces__action__ChargeRobot_GetResult_Request;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_GetResult_Request.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence
{
  acr_interfaces__action__ChargeRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "acr_interfaces/action/detail/charge_robot__struct.h"

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Response
{
  int8_t status;
  acr_interfaces__action__ChargeRobot_Result result;
} acr_interfaces__action__ChargeRobot_GetResult_Response;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_GetResult_Response.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence
{
  acr_interfaces__action__ChargeRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  acr_interfaces__action__ChargeRobot_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  acr_interfaces__action__ChargeRobot_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence request;
  acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence response;
} acr_interfaces__action__ChargeRobot_GetResult_Event;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_GetResult_Event.
typedef struct acr_interfaces__action__ChargeRobot_GetResult_Event__Sequence
{
  acr_interfaces__action__ChargeRobot_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "acr_interfaces/action/detail/charge_robot__struct.h"

/// Struct defined in action/ChargeRobot in the package acr_interfaces.
typedef struct acr_interfaces__action__ChargeRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  acr_interfaces__action__ChargeRobot_Feedback feedback;
} acr_interfaces__action__ChargeRobot_FeedbackMessage;

// Struct for a sequence of acr_interfaces__action__ChargeRobot_FeedbackMessage.
typedef struct acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence
{
  acr_interfaces__action__ChargeRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACR_INTERFACES__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_
