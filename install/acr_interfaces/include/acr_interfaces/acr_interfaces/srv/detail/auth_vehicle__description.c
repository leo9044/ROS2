// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from acr_interfaces:srv/AuthVehicle.idl
// generated code does not contain a copyright notice

#include "acr_interfaces/srv/detail/auth_vehicle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_acr_interfaces
const rosidl_type_hash_t *
acr_interfaces__srv__AuthVehicle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x0c, 0xde, 0xac, 0x5d, 0x92, 0x7c, 0xc0,
      0x19, 0xd8, 0x17, 0xdc, 0xa0, 0xcc, 0x39, 0x9a,
      0x6c, 0x0e, 0x47, 0xfa, 0x6f, 0x0e, 0x61, 0x59,
      0xf5, 0x78, 0x87, 0xa1, 0x9f, 0x69, 0x8f, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_acr_interfaces
const rosidl_type_hash_t *
acr_interfaces__srv__AuthVehicle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x77, 0x1e, 0x88, 0x64, 0x30, 0x4d, 0xe9,
      0xd7, 0x1c, 0x42, 0x64, 0xde, 0x73, 0x3a, 0x3b,
      0x0b, 0x5a, 0xbd, 0x13, 0x3c, 0x0f, 0x09, 0x73,
      0x42, 0x7a, 0x23, 0xda, 0x0d, 0xee, 0x00, 0x6c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_acr_interfaces
const rosidl_type_hash_t *
acr_interfaces__srv__AuthVehicle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x91, 0xe3, 0xa9, 0x44, 0x02, 0x32, 0xf8,
      0xa1, 0x16, 0xd2, 0x3f, 0x2e, 0x3a, 0xce, 0xeb,
      0xa0, 0x26, 0x45, 0xe4, 0xe8, 0xca, 0x18, 0xa6,
      0xcb, 0x23, 0x0c, 0x23, 0x5c, 0xf0, 0x34, 0xf4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_acr_interfaces
const rosidl_type_hash_t *
acr_interfaces__srv__AuthVehicle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0x84, 0xfb, 0x17, 0x86, 0xdd, 0x4b, 0x41,
      0x01, 0x58, 0x03, 0x48, 0x60, 0xdf, 0x4c, 0x26,
      0x78, 0xc4, 0x74, 0x63, 0xca, 0x3f, 0x94, 0xab,
      0x19, 0x14, 0x98, 0x93, 0xeb, 0xbc, 0xaa, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char acr_interfaces__srv__AuthVehicle__TYPE_NAME[] = "acr_interfaces/srv/AuthVehicle";
static char acr_interfaces__srv__AuthVehicle_Event__TYPE_NAME[] = "acr_interfaces/srv/AuthVehicle_Event";
static char acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME[] = "acr_interfaces/srv/AuthVehicle_Request";
static char acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME[] = "acr_interfaces/srv/AuthVehicle_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char acr_interfaces__srv__AuthVehicle__FIELD_NAME__request_message[] = "request_message";
static char acr_interfaces__srv__AuthVehicle__FIELD_NAME__response_message[] = "response_message";
static char acr_interfaces__srv__AuthVehicle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field acr_interfaces__srv__AuthVehicle__FIELDS[] = {
  {
    {acr_interfaces__srv__AuthVehicle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {acr_interfaces__srv__AuthVehicle_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription acr_interfaces__srv__AuthVehicle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {acr_interfaces__srv__AuthVehicle_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
acr_interfaces__srv__AuthVehicle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {acr_interfaces__srv__AuthVehicle__TYPE_NAME, 30, 30},
      {acr_interfaces__srv__AuthVehicle__FIELDS, 3, 3},
    },
    {acr_interfaces__srv__AuthVehicle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = acr_interfaces__srv__AuthVehicle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = acr_interfaces__srv__AuthVehicle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = acr_interfaces__srv__AuthVehicle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char acr_interfaces__srv__AuthVehicle_Request__FIELD_NAME__vin_number[] = "vin_number";

static rosidl_runtime_c__type_description__Field acr_interfaces__srv__AuthVehicle_Request__FIELDS[] = {
  {
    {acr_interfaces__srv__AuthVehicle_Request__FIELD_NAME__vin_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
acr_interfaces__srv__AuthVehicle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
      {acr_interfaces__srv__AuthVehicle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char acr_interfaces__srv__AuthVehicle_Response__FIELD_NAME__is_approved[] = "is_approved";

static rosidl_runtime_c__type_description__Field acr_interfaces__srv__AuthVehicle_Response__FIELDS[] = {
  {
    {acr_interfaces__srv__AuthVehicle_Response__FIELD_NAME__is_approved, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
acr_interfaces__srv__AuthVehicle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
      {acr_interfaces__srv__AuthVehicle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__info[] = "info";
static char acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__request[] = "request";
static char acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field acr_interfaces__srv__AuthVehicle_Event__FIELDS[] = {
  {
    {acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription acr_interfaces__srv__AuthVehicle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
acr_interfaces__srv__AuthVehicle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {acr_interfaces__srv__AuthVehicle_Event__TYPE_NAME, 36, 36},
      {acr_interfaces__srv__AuthVehicle_Event__FIELDS, 3, 3},
    },
    {acr_interfaces__srv__AuthVehicle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = acr_interfaces__srv__AuthVehicle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = acr_interfaces__srv__AuthVehicle_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string vin_number\n"
  "---\n"
  "bool is_approved";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
acr_interfaces__srv__AuthVehicle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {acr_interfaces__srv__AuthVehicle__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
acr_interfaces__srv__AuthVehicle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {acr_interfaces__srv__AuthVehicle_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
acr_interfaces__srv__AuthVehicle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {acr_interfaces__srv__AuthVehicle_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
acr_interfaces__srv__AuthVehicle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {acr_interfaces__srv__AuthVehicle_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
acr_interfaces__srv__AuthVehicle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *acr_interfaces__srv__AuthVehicle__get_individual_type_description_source(NULL),
    sources[1] = *acr_interfaces__srv__AuthVehicle_Event__get_individual_type_description_source(NULL);
    sources[2] = *acr_interfaces__srv__AuthVehicle_Request__get_individual_type_description_source(NULL);
    sources[3] = *acr_interfaces__srv__AuthVehicle_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
acr_interfaces__srv__AuthVehicle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *acr_interfaces__srv__AuthVehicle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
acr_interfaces__srv__AuthVehicle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *acr_interfaces__srv__AuthVehicle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
acr_interfaces__srv__AuthVehicle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *acr_interfaces__srv__AuthVehicle_Event__get_individual_type_description_source(NULL),
    sources[1] = *acr_interfaces__srv__AuthVehicle_Request__get_individual_type_description_source(NULL);
    sources[2] = *acr_interfaces__srv__AuthVehicle_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
