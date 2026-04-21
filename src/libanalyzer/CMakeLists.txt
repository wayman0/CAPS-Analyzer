cmake_minimum_required(VERSION 3.10)
project(libanalyzer)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/../../cmake/Modules/")

include(FindPkgConfig)

pkg_check_modules(DEPS REQUIRED IMPORTED_TARGET sigc++-2.0)

find_package(GSL REQUIRED)
find_package(CCfits REQUIRED)
find_package(HealPIX REQUIRED)
find_package(HDF5 REQUIRED)


set(analyzer_SOURCES
    analyzer.cpp
    association.cpp
    basedata.cpp
    csvmanager.cpp
#    cubedata.cpp
    filemanager.cpp
    fitsmanager.cpp
    hdf5manager.cpp
    healpix.cpp
    inputmatrixdata.cpp
#    matrixdata.cpp
    pixelizer.cpp
    rsht.cpp
    spectrum.cpp
    transformer.cpp
#    vectordata.cpp
   )

include_directories(/mnt/research/software/include /usr/include/freetype ${DEPS_INCLUDE_DIRS})

add_library(analyzer SHARED ${analyzer_SOURCES})

target_link_libraries(analyzer PUBLIC ${DEPS_LIBRARIES} ${HEALPIX_LIBRARIES} ${CCFITS_LIBRARIES} ${CFITSIO_LIBRARIES} ${GSL_LIBRARIES} ${HDF5_LIBRARIES})

# install(TARGETS libanalyzer RUNTIME DESTINATION bin)
