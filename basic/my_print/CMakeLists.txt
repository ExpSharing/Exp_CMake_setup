project(print_project VERSION 1.0.0)

add_library(my_print src/print.cpp)

target_include_directories( my_print
                            PUBLIC
                            $<INSTALL_INTERFACE:include>
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

message("From my_print: CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}")
message("From my_print: PROJECT_NAME = ${PROJECT_NAME}")

install(FILES 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/my_print/print.hpp 
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/my_print
)

install(TARGETS
        my_print
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/lib/my_print
)

install(EXPORT
        my_export
        FILE
        my_print-config.cmake
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/lib/my_print
)