project(math_project VERSION 1.0.0)

add_library(my_math src/add.cpp src/div.cpp)

target_include_directories( my_math
                            PUBLIC
                            $<INSTALL_INTERFACE:include>
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

message("From my_math: CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}")
message("From my_math: PROJECT_NAME = ${PROJECT_NAME}")

install(FILES 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/add.hpp 
        ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/div.hpp
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/include/my_math
)

install(TARGETS
        my_math
        EXPORT
        my_export
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/lib/my_math
)

install(EXPORT
        my_export
        FILE
        my_math-config.cmake
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/lib/my_math
)