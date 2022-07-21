# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\nodes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\nodes_autogen.dir\\ParseCache.txt"
  "examples\\calculator\\CMakeFiles\\calculator_autogen.dir\\AutogenUsed.txt"
  "examples\\calculator\\CMakeFiles\\calculator_autogen.dir\\ParseCache.txt"
  "examples\\calculator\\calculator_autogen"
  "examples\\connection_colors\\CMakeFiles\\connection_colors_autogen.dir\\AutogenUsed.txt"
  "examples\\connection_colors\\CMakeFiles\\connection_colors_autogen.dir\\ParseCache.txt"
  "examples\\connection_colors\\connection_colors_autogen"
  "examples\\example2\\CMakeFiles\\example2_autogen.dir\\AutogenUsed.txt"
  "examples\\example2\\CMakeFiles\\example2_autogen.dir\\ParseCache.txt"
  "examples\\example2\\example2_autogen"
  "examples\\images\\CMakeFiles\\images_autogen.dir\\AutogenUsed.txt"
  "examples\\images\\CMakeFiles\\images_autogen.dir\\ParseCache.txt"
  "examples\\images\\images_autogen"
  "examples\\styles\\CMakeFiles\\styles_autogen.dir\\AutogenUsed.txt"
  "examples\\styles\\CMakeFiles\\styles_autogen.dir\\ParseCache.txt"
  "examples\\styles\\styles_autogen"
  "nodes_autogen"
  "test\\CMakeFiles\\test_nodes_autogen.dir\\AutogenUsed.txt"
  "test\\CMakeFiles\\test_nodes_autogen.dir\\ParseCache.txt"
  "test\\test_nodes_autogen"
  )
endif()
