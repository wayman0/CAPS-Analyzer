cmake_minimum_required(VERSION 3.10)
project(FTXUI-analyzer)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../../cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FindPkgConfig)
pkg_check_modules(DEPS REQUIRED sigc++-2.0)

find_package(ftxui REQUIRED MODULE)

#include(FetchContent)

# Declare FTXUI repository and version
#FetchContent_Declare(
#  ftxui
#  GIT_REPOSITORY "git@github.com:ArthurSonzogni/FTXUI.git"
#  GIT_TAG        v5.0.0 # Replace with the latest stable version
#)

# Make the populated targets available
#FetchContent_MakeAvailable(ftxui)

set(ftxui-analyzer_SOURCES
	main.cpp
	ftxuiwindow.cpp
	#controldatadlg.cpp
	#pixelizerdlg.cpp
	healpixdlg.cpp
	#transformerdlg.cpp
	#rshtdlg.cpp
	#analyzerdlg.cpp
	#spectrumdlg.cpp
	#dataselectdlg.cpp
	#multipleselectiondlg.cpp
	#mapperdlg.cpp
	#mapselectdlg.cpp
	#graphdlg.cpp
	#graphselectdlg.cpp
	#associationselectdlg.cpp
   )


include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_SOURCE_DIR}/.. ${CMAKE_SOURCE_DIR} ${DEPS_INCLUDE_DIRS})
link_directories(${CMAKE_CURRENT_BINARY_DIR}/../../libanalyzer/ ${CMAKE_CURRENT_BINARY_DIR}/../../libgraphics/)

add_executable(FTXUI-analyzer ${ftxui-analyzer_SOURCES})

target_sources(FTXUI-analyzer PUBLIC
				../GUIManager.cpp
				#../analyzerdlgpar.cpp
				#../associationselectdlgpar.cpp
				#../controldatadlgpar.cpp
				#../dataselectdlgpar.cpp
				#../energydlgpar.cpp
				../healpixdlgpar.cpp
				#../multipleselectiondlgpar.cpp
				#../pixelizerdlgpar.cpp
				#../rshtdlgpar.cpp
				#../spectrumdlgpar.cpp
				#../transformerdlgpar.cpp
				#../mapperdlgpar.cpp
				#../mapselectdlgpar.cpp
				#../graphdlgpar.cpp
				#../graphselectdlgpar.cpp
				)

target_link_libraries(FTXUI-analyzer PUBLIC graphics analyzer ${DEPS_LIBRARIES} )
target_link_libraries(FTXUI-analyzer PRIVATE ftxui::component ftxui::dom ftxui::screen )
