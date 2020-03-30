project(SimpleHello)

cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(wxWidgets COMPONENTS core base REQUIRED)

include(${wxWidgets_USE_FILE})

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/gui/gui.h
    src/gui/gui.cpp
    src/gui/wxform_generated.h
    src/gui/wxform_generated.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC ${wxWidgets_LIBRARIES}
)