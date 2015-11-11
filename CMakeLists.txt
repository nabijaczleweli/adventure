cmake_minimum_required (VERSION 3.3.1)

project (adventure CXX)

file (GLOB adventure_source ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/source/*.hpp)
add_executable (adventure ${adventure_source})

set_property (TARGET adventure PROPERTY CXX_STANDARD 14)
set_property (TARGET adventure PROPERTY CXX_STANDARD_REQUIRED ON)

set (YAML_CPP_BUILD_TOOLS OFF CACHE BOOL "")
set (YAML_CPP_BUILD_CONTRIB OFF CACHE BOOL "")
add_subdirectory (${CMAKE_CURRENT_SOURCE_DIR}/external/yaml-cpp)

include_directories (${CMAKE_CURRENT_SOURCE_DIR}/external/yaml-cpp/include)
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/external/rlutil)

target_link_libraries (adventure yaml-cpp)
