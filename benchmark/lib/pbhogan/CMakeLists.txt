add_library(pbhogan INTERFACE)
add_library(pbhogan::pbhogan ALIAS pbhogan)

target_include_directories(pbhogan
 INTERFACE
   Signals
)