cmake_minimum_required(VERSION 3.14)

enable_testing(true)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

set(TESTS
    field_test.cpp
    component_test.cpp
)

add_executable(horizon_test
    main.cpp
    ${TESTS}
)
target_include_directories(horizon_test PRIVATE ${CMAKE_SOURCE_DIR}/inc)
target_link_libraries(horizon_test
    PRIVATE Horizon_Tuner_Lib gtest)

add_test(NAME Horizon_Tuner_Test COMMAND horizon_test)
