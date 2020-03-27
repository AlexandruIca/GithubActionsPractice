function(build_test TEST_NAME)
  set(TEST_FILE ${CMAKE_CURRENT_SOURCE_DIR}/${TEST_NAME}.cpp)
  add_executable(${TEST_NAME} ${TEST_FILE})
  target_link_libraries(${TEST_NAME} PRIVATE project_warnings project_options
                                             add::adder-shared)
  add_test(${TEST_NAME} ${TEST_NAME})
endfunction()

build_test(basic_test)
