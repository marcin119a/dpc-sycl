set(APP_NAME "${PROJECT_NAME}-app")

set(APP_MODULE_DIRECTORY "${PROJECT_SOURCE_DIR}/app")
set(APP_SOURCE_DIRECTORY "${APP_MODULE_DIRECTORY}")

set(APP_SOURCES "${APP_SOURCE_DIRECTORY}/main.cpp")

add_executable(${APP_NAME} ${APP_SOURCES})


target_link_libraries(${APP_NAME} "${LIBRARY_NAME}")
