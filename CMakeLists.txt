cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Find GoogleTest
find_package(GTest REQUIRED)

# Include the directories
include_directories(${GTEST_INCLUDE_DIRS})

# Add your test file
add_executable(MyTest test.cpp TaxCalculator.cpp)

# Link GoogleTest and pthread
target_link_libraries(MyTest ${GTEST_LIBRARIES} pthread)