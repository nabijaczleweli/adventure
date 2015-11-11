cmake_minimum_required (VERSION 3.3.1)

project (adventure)

file (GLOB adventure_source ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/source/*.hpp)
add_executable (adventure ${adventure_source})

add_subdirectory (${CMAKE_CURRENT_SOURCE_DIR}/external/yaml-cpp)
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/external/yaml-cpp/include)
target_link_libraries (adventure yaml-cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/rlutil)
