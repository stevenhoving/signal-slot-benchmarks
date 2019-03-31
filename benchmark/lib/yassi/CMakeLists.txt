add_library(yassi INTERFACE)
add_library(yassi::yassi ALIAS yassi)

target_include_directories(yassi
 INTERFACE
   .
)