cmake_minimum_required(VERSION 3.10)
project(Shell-analyzer)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../../cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FindPkgConfig)
pkg_check_modules(DEPS REQUIRED sigc++-2.0)

find_library(READLINE_LIBRARY NAMES readline)

if(NOT READLINE_LIBRARY)
    message(FATAL_ERROR "GNU Readline library not found. Please install libreadline-dev.")
endif()

set(shell-analyzer_SOURCES
	main.cpp
	shellwindow.cpp
	controldatadlg.cpp
	pixelizerdlg.cpp
	healpixdlg.cpp
	transformerdlg.cpp
	rshtdlg.cpp
	analyzerdlg.cpp
	spectrumdlg.cpp
	dataselectdlg.cpp
	multipleselectiondlg.cpp
	mapperdlg.cpp
	mapselectdlg.cpp
	graphdlg.cpp
	graphselectdlg.cpp

	associationselectdlg.cpp
   )

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_SOURCE_DIR}/.. ${CMAKE_SOURCE_DIR} ${DEPS_INCLUDE_DIRS})
link_directories(${CMAKE_CURRENT_BINARY_DIR}/../../libanalyzer/ ${CMAKE_CURRENT_BINARY_DIR}/../../libgraphics/ ${READLINE_LIBRARY})

add_executable(Shell-analyzer ${shell-analyzer_SOURCES})

target_sources(Shell-analyzer PUBLIC
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
				../transformerdlgpar.cpp
				../mapperdlgpar.cpp
				../mapselectdlgpar.cpp
				../graphdlgpar.cpp
				../graphselectdlgpar.cpp
				)

target_link_libraries(Shell-analyzer graphics analyzer ${READLINE_LIBRARY} ${DEPS_LIBRARIES})

