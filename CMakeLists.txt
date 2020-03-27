cmake_minimum_required(VERSION 3.10)

project(
  GHActions
  VERSION 0.1
  LANGUAGES CXX)

include(cmake/StandardProjectSettings.cmake)
include(cmake/CompilerWarnings.cmake)
include(cmake/Sanitizers.cmake)
include(cmake/Coverage.cmake)

option(ENABLE_TESTING "Build the tests." ON)

add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)

add_library(project_warnings INTERFACE)

set_project_warnings(project_warnings)
enable_sanitizers(project_options)

set(ADDER_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/)

if(ENABLE_TESTING)
  enable_testing()
  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/tests/)
endif()
