# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_location_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED location_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(location_FOUND FALSE)
  elseif(NOT location_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(location_FOUND FALSE)
  endif()
  return()
endif()
set(_location_CONFIG_INCLUDED TRUE)

# output package information
if(NOT location_FIND_QUIETLY)
  message(STATUS "Found location: 0.0.0 (${location_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'location' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${location_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(location_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${location_DIR}/${_extra}")
endforeach()
