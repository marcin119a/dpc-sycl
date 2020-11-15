set(TEST_APP_NAME "main-test")

include(ParseAndAddCatchTests)

set(TEST_MODULE_PATH "${PROJECT_SOURCE_DIR}/tests")
set (TEST_SOURCE_FILES "${TEST_SOURCE_PATH}/main.cpp"
                       "${TEST_SOURCE_PATH}/sat_test.cpp"
)

add_executable(${TEST_APP_NAME} ${TEST_SOURCE_FILES})
target_include_directories(${TEST_APP_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")

enable_testing()
ParseAndAddCatchTests(${TEST_APP_NAME}) 