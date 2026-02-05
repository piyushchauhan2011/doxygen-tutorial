add_executable(unit_tests test_math.cpp)
target_link_libraries(unit_tests PRIVATE GTest::gtest_main mylib)
target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME unit_tests COMMAND unit_tests)

add_executable(gmock_tests test_gmock.cpp)
target_link_libraries(gmock_tests PRIVATE GTest::gmock_main mylib)
target_include_directories(gmock_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME gmock_tests COMMAND gmock_tests)
