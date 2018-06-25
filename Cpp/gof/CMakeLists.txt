cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(gof-design-patterns)
option(UNIT_TEST "Build all tests." ON)
option(DOCS "Create HTML based API documentation (requires Doxygen)." OFF)

######################################
# Section : Disable in-source builds #
######################################

if (${PROJECT_SOURCE_DIR} STREQUAL ${PROJECT_BINARY_DIR})
    message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt and CMakeFiles folder.")
endif ()


set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/project1.cpp src/project1.h)

include_directories(${PROJECT_SOURCE_DIR}/src/)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})

find_program(GCOV gcov)
find_program(LCOV lcov)
find_program(GENHTML genhtml)

################################################
# Unit Testing
################################################
#if (UNIT_TEST)
    #add_subdirectory(tests)

    enable_testing()                                # Enables testing for this directory and below
    set(UNIT_TEST_TARGET_NAME gof-unit-tests)       # Define the unit teest target name

    ################################################
    # Google Test Framework
    ################################################
    # GTest/GMock
    add_subdirectory(${PROJECT_SOURCE_DIR}/third_party/googletest/)

    # Include google test framework
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
    include_directories(${PROJECT_SOURCE_DIR}/src/)

    # Get test sources and dependencies
    #file(GLOB_RECURSE UNIT_TEST_SOURCES FOLLOW_SYMLINKS ${CMAKE_SOURCE_DIR}/test/*.cpp)
    #target_sources(${UNIT_TEST_TARGET_NAME} PUBLIC ${UNIT_TEST_SOURCES})
    add_executable(${UNIT_TEST_TARGET_NAME} ${PROJECT_SOURCE_DIR}/test/TestExample.cpp src/project1.cpp src/project1.h)
    # Standard linking to gtest/gmock
    target_link_libraries(${UNIT_TEST_TARGET_NAME} gtest gtest_main gmock gmock_main)

    # Enable 'make test'
    add_test(NAME run-all-tests COMMAND ${UNIT_TEST_TARGET_NAME})


#endif()



