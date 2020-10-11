cmake_minimum_required(VERSION 3.9)

project("IsingSolver" CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_CXX_FLAGS "-fsycl")


add_subdirectory(src)
add_subdirectory(app)

enable_testing()