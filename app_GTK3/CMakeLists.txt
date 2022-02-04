cmake_minimum_required(VERSION 3.22.2)
project(app_GTK3 VERSION 1.0.0)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

add_executable(app_GTK3 main.cpp)

target_include_directories(app_GTK3 PRIVATE ${GTK3_INCLUDE_DIRS} )
target_link_libraries(app_GTK3 PRIVATE ${GTK3_LIBRARIES})