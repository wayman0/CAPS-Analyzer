# - Find ftxui
# Find the native ftxui includes and library
#
#  FTXUI_INCLUDES    - where to find ftxui.hpp, etc.
#  FTXUI_LIBRARIES   - List of libraries when using ftxui
#  FTXUI_FOUND       - True if ftxui found.

find_path(ftxui_INCLUDE_DIR
	NAMES
		ftxui/ftxui.hpp
		ftxui/component/component.hpp
		ftxui/dom/elements.hpp
		ftxui/screen/screen.hpp
	PATHS /usr/include/
	)

find_library(ftxui_component_LIBRARY NAMES ftxui-component DOC "FTXUI component library")

find_library(ftxui_dom_LIBRARY NAMES ftxui-dom DOC "FTXUI dom library")

find_library(ftxui_screen_LIBRARY NAMES ftxui-screen DOC "FTXUI screen library")

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(ftxui
    DEFAULT_MSG
    ftxui_INCLUDE_DIR
    ftxui_screen_LIBRARY
    ftxui_dom_LIBRARY
    ftxui_component_LIBRARY
)

if(ftxui_FOUND)
    # Define legacy variables for older CMake paradigms (optional but good practice)
    set(ftxui_INCLUDE_DIRS ${ftxui_INCLUDE_DIR})
    set(ftxui_LIBRARIES ${ftxui_screen_LIBRARY} ${ftxui_dom_LIBRARY} ${ftxui_component_LIBRARY})

    # Base Screen Target
    add_library(ftxui::screen UNKNOWN IMPORTED)
    set_target_properties(ftxui::screen PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${ftxui_INCLUDE_DIR}"
        IMPORTED_LOCATION "${ftxui_screen_LIBRARY}"
    )

    # DOM Target (Depends on Screen)
    add_library(ftxui::dom UNKNOWN IMPORTED)
    set_target_properties(ftxui::dom PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${ftxui_INCLUDE_DIR}"
        IMPORTED_LOCATION "${ftxui_dom_LIBRARY}"
    )

    # Component Target (Depends on DOM and Threads)
    add_library(ftxui::component UNKNOWN IMPORTED)
    set_target_properties(ftxui::component PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${ftxui_INCLUDE_DIR}"
        IMPORTED_LOCATION "${ftxui_component_LIBRARY}"
    )
endif()

mark_as_advanced(
    ftxui_INCLUDE_DIR
    ftxui_screen_LIBRARY
    ftxui_dom_LIBRARY
    ftxui_component_LIBRARY
)




#find_path(FTXUI_INCLUDE_DIR ftxui.hpp
#    PATHS
#    /usr/include/ftxui
#)
#
#set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
#set(FTXUI_NAMES ftxui-component ftxui-dom ftxui-screen)
#
#foreach (lib ${FTXUI_NAMES})
#	find_library(FTXUI_LIBRARY_${lib} NAMES ${lib} PATHS /usr/lib64)
#    list(APPEND FTXUI_LIBRARIES ${FTXUI_LIBRARY_${lib}})
#endforeach (lib ${FTXUI_NAMES})

# handle the QUIETLY and REQUIRED arguments and set HEALPIX_FOUND to TRUE if.
# all listed variables are TRUE
#include(FindPackageHandleCompat)
#FIND_PACKAGE_HANDLE_STANDARD_ARGS(ftxui DEFAULT_MSG
#    FTXUI_LIBRARIES FTXUI_INCLUDE_DIR)
#
#if (NOT FTXUI_FOUND)
#    set(FTXUI_LIBRARIES)
#endif (NOT FTXUI_FOUND)
#
#mark_as_advanced(FTXUI_LIBRARIES FTXUI_INCLUDE_DIR)
