cmake_minimum_required(VERSION 3.5)

project(cimnodes_r)

file(GLOB IMGUI_SOURCES
    ../cimgui/cimgui.cpp
    ../cimgui/imgui/imgui.cpp
    ../cimgui/imgui/imgui_draw.cpp
    ../cimgui/imgui/imgui_demo.cpp
    ../cimgui/imgui/imgui_widgets.cpp
    ../cimgui/imgui/imgui_tables.cpp
    cimnodes_r.cpp
    ImNodes/ImNodes.cpp
    ImNodes/ImNodesEz.cpp
)

set(IMGUI_STATIC "no" CACHE STRING "Build as a static library")
set(CMAKE_CXX_STANDARD 11)

if (IMGUI_STATIC)
    add_library(cimnodes_r STATIC ${IMGUI_SOURCES})
else (IMGUI_STATIC)
    add_library(cimnodes_r SHARED ${IMGUI_SOURCES})
endif (IMGUI_STATIC)

add_definitions("-DIMGUI_USER_CONFIG=\"../cimconfig.h\"")
target_compile_definitions(cimnodes_r PUBLIC IMGUI_DISABLE_OBSOLETE_FUNCTIONS=1)

target_include_directories(cimnodes_r PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/ImNodes)
target_include_directories(cimnodes_r PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../cimgui/imgui)
target_include_directories(cimnodes_r PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../cimgui)
set_target_properties(cimnodes_r PROPERTIES PREFIX "")

install(TARGETS cimnodes_r
    RUNTIME DESTINATION  .
    LIBRARY DESTINATION  .
    ARCHIVE DESTINATION  .
)
