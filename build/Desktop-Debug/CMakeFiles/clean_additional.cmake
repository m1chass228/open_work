# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/open_work_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/open_work_autogen.dir/ParseCache.txt"
  "open_work_autogen"
  )
endif()
