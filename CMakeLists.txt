project(Concepts)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Motivation Motivation.cpp)
add_executable(BCCL_usage BCCL_usage.cpp)
add_executable(Concept_creation Concept_creation.cpp)