add_library(Ansoulom INTERFACE)
add_library(Ansoulom::cpp-observe ALIAS Ansoulom)

target_include_directories(Ansoulom
 INTERFACE
   cpp-observe
)