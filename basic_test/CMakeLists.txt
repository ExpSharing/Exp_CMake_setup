cmake_minimum_required(VERSION 3.22.2)
project(test_my_math VERSION 1.0.0)

find_package(my_math)
if( my_math_FOUND )
    add_executable(main main.cpp)
    target_link_libraries(main PRIVATE my_math)
else()
    message(FATAL_ERROR "my_math library not found")
endif()