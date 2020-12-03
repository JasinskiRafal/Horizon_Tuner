cmake_minimum_required(VERSION 3.14)

project(Horizon_Tuner LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Quick Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick Test REQUIRED)

set(SRC_HT
    src/aero.cpp
    src/alignment.cpp
    src/anti_roll_bars.cpp
    src/brake.cpp
    src/tires.cpp
    src/springs.cpp
    src/gearing.cpp
    src/differential.cpp
    src/component.cpp
)

set(INC_HT
    inc/tune.h
    inc/component.h
    inc/tires.h
    inc/field.h
    inc/gearing.h
    inc/alignment.h
    inc/anti_roll_bars.h
    inc/springs.h
    inc/aero.h
    inc/brake.h
    inc/differential.h
    inc/components
)

set(QML_HT
    qml/qml.qrc
)

set(MAIN_HT
    #src/main.cpp
    src/mymain.cpp
)

add_library(Horizon_Tuner_Lib SHARED
    ${SRC_HT}
    ${INC_HT}
)
target_include_directories(Horizon_Tuner_Lib
    PRIVATE inc)

add_executable(Horizon_Tuner
  ${MAIN_HT}
  ${QML_HT}
)
target_include_directories(Horizon_Tuner
    PRIVATE inc)

add_subdirectory(lib)
add_subdirectory(test)

target_compile_definitions(Horizon_Tuner
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(Horizon_Tuner
  PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick Horizon_Tuner_Lib)


install(TARGETS Horizon_Tuner DESTINATION ${CMAKE_BINARY_DIR}/bin)
