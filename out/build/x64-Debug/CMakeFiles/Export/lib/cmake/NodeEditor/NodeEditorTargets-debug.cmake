#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "NodeEditor::nodes" for configuration "Debug"
set_property(TARGET NodeEditor::nodes APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(NodeEditor::nodes PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/nodes.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/nodes.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS NodeEditor::nodes )
list(APPEND _IMPORT_CHECK_FILES_FOR_NodeEditor::nodes "${_IMPORT_PREFIX}/lib/nodes.lib" "${_IMPORT_PREFIX}/bin/nodes.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
