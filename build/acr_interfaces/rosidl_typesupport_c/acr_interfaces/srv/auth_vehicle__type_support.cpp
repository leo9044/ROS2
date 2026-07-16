// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "acr_interfaces/srv/detail/auth_vehicle__struct.h"
#include "acr_interfaces/srv/detail/auth_vehicle__type_support.h"
#include "acr_interfaces/srv/detail/auth_vehicle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace acr_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuthVehicle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuthVehicle_Request_type_support_ids_t;

static const _AuthVehicle_Request_type_support_ids_t _AuthVehicle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuthVehicle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuthVehicle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuthVehicle_Request_type_support_symbol_names_t _AuthVehicle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, acr_interfaces, srv, AuthVehicle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, acr_interfaces, srv, AuthVehicle_Request)),
  }
};

typedef struct _AuthVehicle_Request_type_support_data_t
{
  void * data[2];
} _AuthVehicle_Request_type_support_data_t;

static _AuthVehicle_Request_type_support_data_t _AuthVehicle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuthVehicle_Request_message_typesupport_map = {
  2,
  "acr_interfaces",
  &_AuthVehicle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AuthVehicle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AuthVehicle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuthVehicle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuthVehicle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &acr_interfaces__srv__AuthVehicle_Request__get_type_hash,
  &acr_interfaces__srv__AuthVehicle_Request__get_type_description,
  &acr_interfaces__srv__AuthVehicle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace acr_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, acr_interfaces, srv, AuthVehicle_Request)() {
  return &::acr_interfaces::srv::rosidl_typesupport_c::AuthVehicle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__struct.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__type_support.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace acr_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuthVehicle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuthVehicle_Response_type_support_ids_t;

static const _AuthVehicle_Response_type_support_ids_t _AuthVehicle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuthVehicle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuthVehicle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuthVehicle_Response_type_support_symbol_names_t _AuthVehicle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, acr_interfaces, srv, AuthVehicle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, acr_interfaces, srv, AuthVehicle_Response)),
  }
};

typedef struct _AuthVehicle_Response_type_support_data_t
{
  void * data[2];
} _AuthVehicle_Response_type_support_data_t;

static _AuthVehicle_Response_type_support_data_t _AuthVehicle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuthVehicle_Response_message_typesupport_map = {
  2,
  "acr_interfaces",
  &_AuthVehicle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AuthVehicle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AuthVehicle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuthVehicle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuthVehicle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &acr_interfaces__srv__AuthVehicle_Response__get_type_hash,
  &acr_interfaces__srv__AuthVehicle_Response__get_type_description,
  &acr_interfaces__srv__AuthVehicle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace acr_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, acr_interfaces, srv, AuthVehicle_Response)() {
  return &::acr_interfaces::srv::rosidl_typesupport_c::AuthVehicle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__struct.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__type_support.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace acr_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AuthVehicle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuthVehicle_Event_type_support_ids_t;

static const _AuthVehicle_Event_type_support_ids_t _AuthVehicle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuthVehicle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuthVehicle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuthVehicle_Event_type_support_symbol_names_t _AuthVehicle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, acr_interfaces, srv, AuthVehicle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, acr_interfaces, srv, AuthVehicle_Event)),
  }
};

typedef struct _AuthVehicle_Event_type_support_data_t
{
  void * data[2];
} _AuthVehicle_Event_type_support_data_t;

static _AuthVehicle_Event_type_support_data_t _AuthVehicle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuthVehicle_Event_message_typesupport_map = {
  2,
  "acr_interfaces",
  &_AuthVehicle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AuthVehicle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AuthVehicle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AuthVehicle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuthVehicle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &acr_interfaces__srv__AuthVehicle_Event__get_type_hash,
  &acr_interfaces__srv__AuthVehicle_Event__get_type_description,
  &acr_interfaces__srv__AuthVehicle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace acr_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, acr_interfaces, srv, AuthVehicle_Event)() {
  return &::acr_interfaces::srv::rosidl_typesupport_c::AuthVehicle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "acr_interfaces/srv/detail/auth_vehicle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace acr_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AuthVehicle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AuthVehicle_type_support_ids_t;

static const _AuthVehicle_type_support_ids_t _AuthVehicle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AuthVehicle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AuthVehicle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AuthVehicle_type_support_symbol_names_t _AuthVehicle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, acr_interfaces, srv, AuthVehicle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, acr_interfaces, srv, AuthVehicle)),
  }
};

typedef struct _AuthVehicle_type_support_data_t
{
  void * data[2];
} _AuthVehicle_type_support_data_t;

static _AuthVehicle_type_support_data_t _AuthVehicle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AuthVehicle_service_typesupport_map = {
  2,
  "acr_interfaces",
  &_AuthVehicle_service_typesupport_ids.typesupport_identifier[0],
  &_AuthVehicle_service_typesupport_symbol_names.symbol_name[0],
  &_AuthVehicle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AuthVehicle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AuthVehicle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AuthVehicle_Request_message_type_support_handle,
  &AuthVehicle_Response_message_type_support_handle,
  &AuthVehicle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    acr_interfaces,
    srv,
    AuthVehicle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    acr_interfaces,
    srv,
    AuthVehicle
  ),
  &acr_interfaces__srv__AuthVehicle__get_type_hash,
  &acr_interfaces__srv__AuthVehicle__get_type_description,
  &acr_interfaces__srv__AuthVehicle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace acr_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, acr_interfaces, srv, AuthVehicle)() {
  return &::acr_interfaces::srv::rosidl_typesupport_c::AuthVehicle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
