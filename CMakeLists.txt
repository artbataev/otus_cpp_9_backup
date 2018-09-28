cmake_minimum_required(VERSION 3.2)

if($ENV{TRAVIS_BUILD_NUMBER})
    project(Concepts VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER} LANGUAGES CXX)
else()
    project(Concepts VERSION 0.0.1 LANGUAGES CXX)
endif()

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Motivation Motivation.cpp)
add_executable(BCCL_usage BCCL_usage.cpp)
add_executable(Concept_creation Concept_creation.cpp)
