cmake_minimum_required(VERSION 3.9)

project("IsingSolver" CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake.modules/")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup()


set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_CXX_FLAGS "-fsycl")


add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)


enable_testing()