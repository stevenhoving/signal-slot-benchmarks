add_library(palacaze INTERFACE)
add_library(palacaze::palacaze ALIAS palacaze)

target_include_directories(palacaze
 INTERFACE
   sigslot
)