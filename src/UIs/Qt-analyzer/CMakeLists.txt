cmake_minimum_required(VERSION 3.10)
project(Qt-analyzer)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../../cmake/Modules/")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FindPkgConfig)
pkg_check_modules(DEPS REQUIRED sigc++-2.0)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

add_definitions(-DQT_NO_KEYWORDS)

set(Qt-analyzer_SRCS
    main.cpp
    mainwindow.cpp
    associationselectdlg.cpp
    analyzerdlg.cpp
    controldatadlg.cpp
    energydlg.cpp
    multipleselectiondlg.cpp
    mapperdlg.cpp
    mapselectdlg.cpp
    graphdlg.cpp
    graphselectdlg.cpp
    dataselectdlg.cpp
    pixelizerdlg.cpp
    healpixdlg.cpp
    transformerdlg.cpp
    rshtdlg.cpp
    spectrumdlg.cpp
    qledlabel.cpp)

set(Qt-analyzer_MOC_HDRS
    mainwindow.h
    associationselectdlg.h
    analyzerdlg.h
    controldatadlg.h
    energydlg.h
    multipleselectiondlg.h
    mapperdlg.h
    mapselectdlg.h
    graphdlg.h
    graphselectdlg.h
    dataselectdlg.h
    pixelizerdlg.h
    healpixdlg.h
    transformerdlg.h
    rshtdlg.h
    spectrumdlg.h
    qledlabel.h)

set(Qt-analyzer_UIS
    mainwindow.ui
    associationselectdlg.ui
    analyzerdlg.ui
    controldatadlg.ui
    energydlg.ui
    multipleselectiondlg.ui
    mapperdlg.ui
    mapselectdlg.ui
    graphdlg.ui
    graphselectdlg.ui
    dataselectdlg.ui
    pixelizerdlg.ui
    healpixdlg.ui
    transformerdlg.ui
    rshtdlg.ui
    spectrumdlg.ui)

set(Qt-analyzer_RCS
    mainwindow.qrc)
     
qt_add_resources(Qt-analyzer_RC_SRCS ${Qt-analyzer_RCS})
qt_wrap_ui(Qt-analyzer_UI_HDRS ${Qt-analyzer_UIS})
qt_wrap_cpp(Qt-analyzer_MOC_SRCS ${Qt-analyzer_MOC_HDRS})

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_SOURCE_DIR}/.. ${CMAKE_SOURCE_DIR} ${DEPS_INCLUDE_DIRS})
link_directories(${CMAKE_CURRENT_BINARY_DIR}/../../libanalyzer/ ${CMAKE_CURRENT_BINARY_DIR}/../../libgraphics/)

add_executable(Qt-analyzer ${Qt-analyzer_SRCS} ${Qt-analyzer_MOC_SRCS} ${Qt-analyzer_UI_HDRS} ${Qt-analyzer_RC_SRCS})

target_sources(Qt-analyzer PUBLIC
				../GUIManager.cpp
				../analyzerdlgpar.cpp
				../associationselectdlgpar.cpp
				../controldatadlgpar.cpp
				../dataselectdlgpar.cpp
				../energydlgpar.cpp
				../healpixdlgpar.cpp
				../multipleselectiondlgpar.cpp
				../pixelizerdlgpar.cpp
				../rshtdlgpar.cpp
				../spectrumdlgpar.cpp
				../transformerdlgpar.cpp)

target_link_libraries(Qt-analyzer graphics analyzer Qt::Core Qt::Gui Qt::Widgets ${DEPS_LIBRARIES})

# install(TARGETS q5analyzer RUNTIME DESTINATION bin)
