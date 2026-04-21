cmake_minimum_required(VERSION 3.10)
project(libgraphics)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake/Modules/")

include(FindPkgConfig)
pkg_check_modules(DEPS REQUIRED sigc++-2.0)

find_package(lunar REQUIRED)
find_package(Freetype REQUIRED)

set(graphics_SOURCES
    datamap.cpp
    dataspectrum.cpp
    font_mroman.cpp
    font_roman.cpp
    grapher.cpp
    mapper.cpp
    mollweide.cpp
    progress.cpp
    raster.cpp
    coordtransformer.cpp
   )

include_directories(/mnt/research/software/include /usr/include/freetype /usr/include/freetype2 ${DEPS_INCLUDE_DIRS})

add_library(graphics SHARED ${graphics_SOURCES})

target_link_libraries(graphics PUBLIC ${DEPS_LIBRARIES} ${FREETYPE_LIBRARIES} ${LUNAR_LIBRARIES})

# install(TARGETS libanalyzer RUNTIME DESTINATION bin)
