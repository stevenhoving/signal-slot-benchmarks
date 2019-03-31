add_library(joanrieu INTERFACE)
add_library(joanrieu::signal11 ALIAS joanrieu)

target_include_directories(joanrieu
 INTERFACE
   .
)