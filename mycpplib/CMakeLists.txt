cmake_minimum_required(VERSION 3.16)
project(mycpp
  DESCRIPTION "a example to learn cpp"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(${PROJECT_INCLUDE_DIR})

set(SINEWAVE_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/sinewave.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/include/sinewave.hpp
)

set(MAIN_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

add_library(sinewave)
target_sources(sinewave
  PRIVATE
  ${SINEWAVE_SOURCES}
)
target_include_directories(sinewave
  PRIVATE
  include
)

add_executable(sinewave_print)
target_sources(sinewave_print
  PRIVATE
  ${MAIN_SOURCES}
)
target_include_directories(sinewave_print
  PRIVATE
  include
)
target_link_libraries(sinewave_print
  sinewave
)
