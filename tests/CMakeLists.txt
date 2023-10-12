# Configuration for exercise binary_gap
set(EXERCISE_NAME "binary_gap")
add_executable(test_${EXERCISE_NAME} test_${EXERCISE_NAME}.cpp ${CMAKE_SOURCE_DIR}/tests/main.cpp)
add_test(NAME ${EXERCISE_NAME} COMMAND ${EXERCISE_NAME})
target_include_directories(test_${EXERCISE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercises/${EXERCISE_NAME}/include)
target_link_libraries(test_${EXERCISE_NAME} PUBLIC ${EXERCISE_NAME}_lib gtest)

# Configuration for exercise count_conforming_bitmasks
set(EXERCISE_NAME "count_conforming_bitmasks")
add_executable(test_${EXERCISE_NAME} test_${EXERCISE_NAME}.cpp ${CMAKE_SOURCE_DIR}/tests/main.cpp)
add_test(NAME ${EXERCISE_NAME} COMMAND ${EXERCISE_NAME})
target_include_directories(test_${EXERCISE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercises/${EXERCISE_NAME}/include)
target_link_libraries(test_${EXERCISE_NAME} PUBLIC ${EXERCISE_NAME}_lib gtest)

# Configuration for exercise sparse_binary_decomposition
set(EXERCISE_NAME "sparse_binary_decomposition")
add_executable(test_${EXERCISE_NAME} test_${EXERCISE_NAME}.cpp ${CMAKE_SOURCE_DIR}/tests/main.cpp)
add_test(NAME ${EXERCISE_NAME} COMMAND ${EXERCISE_NAME})
target_include_directories(test_${EXERCISE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/exercises/${EXERCISE_NAME}/include)
target_link_libraries(test_${EXERCISE_NAME} PUBLIC ${EXERCISE_NAME}_lib gtest)