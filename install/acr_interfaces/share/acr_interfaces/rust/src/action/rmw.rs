
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Goal() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_Goal__init(msg: *mut ChargeRobot_Goal) -> bool;
    fn acr_interfaces__action__ChargeRobot_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Goal>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Goal>);
    fn acr_interfaces__action__ChargeRobot_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Goal>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_angle: f64,

}



impl Default for ChargeRobot_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_Goal__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Goal() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Result() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_Result__init(msg: *mut ChargeRobot_Result) -> bool;
    fn acr_interfaces__action__ChargeRobot_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Result>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Result>);
    fn acr_interfaces__action__ChargeRobot_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Result>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ChargeRobot_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_Result__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_Result where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Result() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_Feedback__init(msg: *mut ChargeRobot_Feedback) -> bool;
    fn acr_interfaces__action__ChargeRobot_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Feedback>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Feedback>);
    fn acr_interfaces__action__ChargeRobot_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_Feedback>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_percent: f64,

}



impl Default for ChargeRobot_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_Feedback__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_Feedback() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_FeedbackMessage__init(msg: *mut ChargeRobot_FeedbackMessage) -> bool;
    fn acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_FeedbackMessage>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_FeedbackMessage>);
    fn acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_FeedbackMessage>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ChargeRobot_Feedback,

}



impl Default for ChargeRobot_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_FeedbackMessage() }
  }
}




#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_SendGoal_Request__init(msg: *mut ChargeRobot_SendGoal_Request) -> bool;
    fn acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Request>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Request>);
    fn acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Request>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ChargeRobot_Goal,

}



impl Default for ChargeRobot_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal_Request() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_SendGoal_Response__init(msg: *mut ChargeRobot_SendGoal_Response) -> bool;
    fn acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Response>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Response>);
    fn acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_SendGoal_Response>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ChargeRobot_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal_Response() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_GetResult_Request__init(msg: *mut ChargeRobot_GetResult_Request) -> bool;
    fn acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Request>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Request>);
    fn acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Request>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ChargeRobot_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult_Request() }
  }
}


#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "acr_interfaces__rosidl_generator_c")]
extern "C" {
    fn acr_interfaces__action__ChargeRobot_GetResult_Response__init(msg: *mut ChargeRobot_GetResult_Response) -> bool;
    fn acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Response>, size: usize) -> bool;
    fn acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Response>);
    fn acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargeRobot_GetResult_Response>) -> bool;
}

// Corresponds to acr_interfaces__action__ChargeRobot_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargeRobot_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ChargeRobot_Result,

}



impl Default for ChargeRobot_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !acr_interfaces__action__ChargeRobot_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to acr_interfaces__action__ChargeRobot_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargeRobot_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { acr_interfaces__action__ChargeRobot_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargeRobot_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargeRobot_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "acr_interfaces/action/ChargeRobot_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult_Response() }
  }
}






#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to acr_interfaces__action__ChargeRobot_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ChargeRobot_SendGoal;

impl rosidl_runtime_rs::Service for ChargeRobot_SendGoal {
    type Request = ChargeRobot_SendGoal_Request;
    type Response = ChargeRobot_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__action__ChargeRobot_SendGoal() }
    }
}




#[link(name = "acr_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to acr_interfaces__action__ChargeRobot_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ChargeRobot_GetResult;

impl rosidl_runtime_rs::Service for ChargeRobot_GetResult {
    type Request = ChargeRobot_GetResult_Request;
    type Response = ChargeRobot_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__acr_interfaces__action__ChargeRobot_GetResult() }
    }
}


