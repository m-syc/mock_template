cmake_minimum_required(VERSION 3.22)

set(MOCK_NAME
    mock_template
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)

add_library(${MOCK_NAME} STATIC mock_template.hpp mock_template.cpp)
include_directories(${GTEST_INCLUDE_DIRS})
target_include_directories(${MOCK_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${MOCK_NAME} PRIVATE ${GTEST_LIBRARIES} gtest_main gmock_main)
