cmake_minimum_required(VERSION 3.26)
project(opengl_linking)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only")
set(GLFW_INSTALL OFF CACHE BOOL "GLFW lib only")

add_subdirectory(glfw)

set(opengl_linking
        main.cpp
)

add_subdirectory(glad)
add_executable(opengl_linking main.cpp)
target_link_libraries(opengl_linking ${OPENGL_LIBRARIES} glfw glad)
