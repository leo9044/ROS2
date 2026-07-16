# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target acr_interfaces::acr_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${acr_interfaces_TARGETS}.
if(acr_interfaces_TARGETS AND NOT TARGET acr_interfaces::acr_interfaces)
  add_library(acr_interfaces::acr_interfaces INTERFACE IMPORTED)
  set_target_properties(acr_interfaces::acr_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${acr_interfaces_TARGETS}")
endif()
