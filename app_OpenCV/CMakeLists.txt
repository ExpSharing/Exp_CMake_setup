cmake_minimum_required(VERSION 3.22.2)
project(OpenCV_app VERSION 1.0.0)

find_package(OpenCV REQUIRED)

add_executable(disp main.cpp)
target_include_directories(disp PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(disp PRIVATE ${OpenCV_LIBS})

message("OpenCV Include Dirs: ${OpenCV_INCLUDE_DIRS}")
message("OpenCV Libraries: ${OpenCV_LIBS}")