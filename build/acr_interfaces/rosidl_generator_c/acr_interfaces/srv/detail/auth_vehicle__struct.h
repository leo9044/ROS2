// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "acr_interfaces/srv/auth_vehicle.h"


#ifndef ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_H_
#define ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vin_number'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AuthVehicle in the package acr_interfaces.
typedef struct acr_interfaces__srv__AuthVehicle_Request
{
  rosidl_runtime_c__String vin_number;
} acr_interfaces__srv__AuthVehicle_Request;

// Struct for a sequence of acr_interfaces__srv__AuthVehicle_Request.
typedef struct acr_interfaces__srv__AuthVehicle_Request__Sequence
{
  acr_interfaces__srv__AuthVehicle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__srv__AuthVehicle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AuthVehicle in the package acr_interfaces.
typedef struct acr_interfaces__srv__AuthVehicle_Response
{
  bool is_approved;
} acr_interfaces__srv__AuthVehicle_Response;

// Struct for a sequence of acr_interfaces__srv__AuthVehicle_Response.
typedef struct acr_interfaces__srv__AuthVehicle_Response__Sequence
{
  acr_interfaces__srv__AuthVehicle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__srv__AuthVehicle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  acr_interfaces__srv__AuthVehicle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  acr_interfaces__srv__AuthVehicle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AuthVehicle in the package acr_interfaces.
typedef struct acr_interfaces__srv__AuthVehicle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  acr_interfaces__srv__AuthVehicle_Request__Sequence request;
  acr_interfaces__srv__AuthVehicle_Response__Sequence response;
} acr_interfaces__srv__AuthVehicle_Event;

// Struct for a sequence of acr_interfaces__srv__AuthVehicle_Event.
typedef struct acr_interfaces__srv__AuthVehicle_Event__Sequence
{
  acr_interfaces__srv__AuthVehicle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} acr_interfaces__srv__AuthVehicle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACR_INTERFACES__SRV__DETAIL__AUTH_VEHICLE__STRUCT_H_
