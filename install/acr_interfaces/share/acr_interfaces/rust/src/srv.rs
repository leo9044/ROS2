#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to acr_interfaces__srv__AuthVehicle_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthVehicle_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vin_number: std::string::String,

}



impl Default for AuthVehicle_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AuthVehicle_Request::default())
  }
}

impl rosidl_runtime_rs::Message for AuthVehicle_Request {
  type RmwMsg = super::srv::rmw::AuthVehicle_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vin_number: msg.vin_number.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vin_number: msg.vin_number.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vin_number: msg.vin_number.to_string(),
    }
  }
}


// Corresponds to acr_interfaces__srv__AuthVehicle_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AuthVehicle_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_approved: bool,

}



impl Default for AuthVehicle_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::AuthVehicle_Response::default())
  }
}

impl rosidl_runtime_rs::Message for AuthVehicle_Response {
  type RmwMsg = super::srv::rmw::AuthVehicle_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_approved: msg.is_approved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_approved: msg.is_approved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_approved: msg.is_approved,
    }
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


