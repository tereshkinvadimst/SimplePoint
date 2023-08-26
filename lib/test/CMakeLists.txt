add_executable(test_point test_point.cpp)


include_directories(../src)
target_link_libraries(test_point point)

add_test(
  NAME
    test_point
  COMMAND
    $<TARGET_FILE:test_point>
  )