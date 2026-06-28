cmake_minimum_required(VERSION 3.10)
project(Shell-analyzer)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../../cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FindPkgConfig)
pkg_check_modules(DEPS REQUIRED sigc++-2.0)

set(shell-analyzer_SOURCES
	main.cpp
	shellwindow.cpp
	controldatadlg.cpp
	healpixdlg.cpp
	rshtdlg.cpp
	spectrumdlg.cpp
	dataselectdlg.cpp
   )

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_SOURCE_DIR}/.. ${CMAKE_SOURCE_DIR} ${DEPS_INCLUDE_DIRS})
link_directories(${CMAKE_CURRENT_BINARY_DIR}/../../libanalyzer/ ${CMAKE_CURRENT_BINARY_DIR}/../../libgraphics/)

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
				../transformerdlgpar.cpp)

target_link_libraries(Shell-analyzer graphics analyzer ${DEPS_LIBRARIES})

