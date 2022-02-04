cmake_minimum_required(VERSION 3.22.2)
project(calculator VERSION 1.0.0)

add_subdirectory(my_math)
add_subdirectory(my_print)

add_executable(calc main.cpp)
target_link_libraries(calc my_math my_print)

#left as a reference
# set(A 000)
# set(A 123 CACHE STRING "Try and set it in persistent cache")
# # CACHE: is for storing it in the global scope
# # STRING: is the variable type
# # "Try and set it in persistent cache": is the description
# 
# message(${A}) # Variable looked for in the LOCAL scope
# message($CACHE{A}) # Variable looked for in the GLOBAL scope. 
# #Similar with environment variables using ENV

#left as a reference
# set(Name Maria CACHE STRING "Variable for name")
# #set(Name Bob CACHE STRING "Variable for modified name" FORCE) 
# # work but not good
# # better is to compile with: `cmake -DName=newName ..`
# message($CACHE{Name})

#Some cache variables
message("CMAKE_VERSION = ${CMAKE_VERSION}")
message("CMAKE_MAJOR_VERSION = ${CMAKE_MAJOR_VERSION}")
message("CMAKE_MINOR_VERSION = ${CMAKE_MINOR_VERSION}")
message("CMAKE_PATCH_VERSION = ${CMAKE_PATCH_VERSION}")
message("From root: CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}")
message("From root: PROJECT_NAME = ${PROJECT_NAME}")
message("CMAKE_GENERATOR = ${CMAKE_GENERATOR}")
message("CMAKE_INSTALL_PREFIX = ${CMAKE_INSTALL_PREFIX}")