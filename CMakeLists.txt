cmake_minimum_required(VERSION 3.22)
project(ekki)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/GLFW/include)
link_directories(${CMAKE_SOURCE_DIR}/dependencies/GLFW/lib-x86_64)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/GLEW/include)
link_directories(${CMAKE_SOURCE_DIR}/dependencies/GLEW/lib)

include_directories(${CMAKE_SOURCE_DIR}/dependencies/imgui/include)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/imgui/include/imgui)
# Set where the ImGui files are stored
set(IMGUI_PATH  "dependencies/imgui")
# Compile as static library
file(GLOB IMGUI_SOURCES ${IMGUI_PATH}/*.cpp)
add_library("ImGui" STATIC ${IMGUI_SOURCES})
target_include_directories("ImGui" PUBLIC ${IMGUI_PATH})

link_libraries(
        libGLEW.a
        libglfw3.a
        "-framework Cocoa"
        "-framework OpenGL"
        "-framework IOKit"
        "-framework CoreVideo"
        ImGui
)

file(GLOB SOURCES
        dependencies/imgui/imgui.cpp
        dependencies/imgui/
        src/*.cpp
        src/ui/*
        )

add_executable(ekki ${SOURCES})

