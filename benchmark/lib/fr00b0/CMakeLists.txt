add_library(fr00b0 INTERFACE)
add_library(fr00b0::nod ALIAS fr00b0)

target_include_directories(fr00b0
 INTERFACE
   nod/include
)