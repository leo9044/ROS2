#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__srv__AuthVehicle_Request() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__srv__AuthVehicle_Request__init(msg: *mut AuthVehicle_Request) -> bool;
    fn acr_interfaces__srv__AuthVehicle_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Request>, size: usize) -> bool;
    fn acr_interfaces__srv__AuthVehicle_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Request>);
    fn acr_interfaces__srv__AuthVehicle_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AuthVehicle_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Request>) -> bool;
}

// Corresponds to acr_interfaces__srv__AuthVehicle_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthVehicle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vin_number: rosidl_runtime_rs::String,

}



impl Default for AuthVehicle_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__srv__AuthVehicle_Request__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__srv__AuthVehicle_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AuthVehicle_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AuthVehicle_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AuthVehicle_Request where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/srv/AuthVehicle_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__srv__AuthVehicle_Request() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__srv__AuthVehicle_Response() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__srv__AuthVehicle_Response__init(msg: *mut AuthVehicle_Response) -> bool;
    fn acr_interfaces__srv__AuthVehicle_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Response>, size: usize) -> bool;
    fn acr_interfaces__srv__AuthVehicle_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Response>);
    fn acr_interfaces__srv__AuthVehicle_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AuthVehicle_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<AuthVehicle_Response>) -> bool;
}

// Corresponds to acr_interfaces__srv__AuthVehicle_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthVehicle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_approved: bool,

}



impl Default for AuthVehicle_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__srv__AuthVehicle_Response__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__srv__AuthVehicle_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AuthVehicle_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__srv__AuthVehicle_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AuthVehicle_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AuthVehicle_Response where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/srv/AuthVehicle_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__srv__AuthVehicle_Response() }
  }
}






#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__srv__AuthVehicle() -> *const std::ffi::c_void;
}

// Corresponds to acr_interfaces__srv__AuthVehicle
#[allow(missing_docs, non_camel_case_types)]
pub struct AuthVehicle;

impl rosidl_runtime_rs::Service for AuthVehicle {
    type Request = AuthVehicle_Request;
    type Response = AuthVehicle_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__srv__AuthVehicle() }
    }
}


