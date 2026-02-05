add_executable(unit_tests test_math.cpp)
target_link_libraries(unit_tests PRIVATE GTest::gtest_main mylib)
target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME unit_tests COMMAND unit_tests)
