cmake_minimum_required(VERSION 3.13)
project(FRGLM)

set(CMAKE_CXX_STANDARD 17)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(..)

set(header
        ${FRGLM_PATH}/vector2.h
        ${FRGLM_PATH}/vector3.h
        ${FRGLM_PATH}/vector4.h
        ${FRGLM_PATH}/matrix4x4.h
        )