# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(OptiMLCpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_library(OptiMLCpp SHARED
    src/algorithms/linear_regression.cpp
    src/utils/math_utils.cpp
    # Add other source files here
)

# Add executable for testing if needed
# add_executable(main src/main.cpp)
# target_link_libraries(main OptiMLCpp)
