# - Find HDF5
# Find the native HDF5 includes and library
#
#  HDF5_INCLUDES    - where to find H5*.h, etc.
#  HDF5_LIBRARIES   - List of libraries when using HDF5.
#  HDF5_FOUND       - True if HDF5 found.


if (HDF5_INCLUDES)
  # Already in cache, be silent
  set (HDF5_FIND_QUIETLY TRUE)
endif (HDF5_INCLUDES)

set (FIND_LIBRARY_USE_LIB64_PATH TRUE)

find_path (HDF5_INCLUDES H5Cpp.h)

find_library (HDF5_LIB NAMES hdf5_hl_cpp hdf5_hl hdf5_cpp hdf5)

set (HDF5_LIBRARIES "${HDF5_LIB}")

# handle the QUIETLY and REQUIRED arguments and set HDF5_FOUND to TRUE if
# all listed variables are TRUE
include (FindPackageHandleStandardArgs)
find_package_handle_standard_args (HDF5 DEFAULT_MSG HDF5_LIBRARIES HDF5_INCLUDES)

mark_as_advanced (HDF5_LIB HDF5_INCLUDES)
