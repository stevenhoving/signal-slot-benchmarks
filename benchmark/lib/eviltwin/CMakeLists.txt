add_library(eviltwin INTERFACE)
add_library(eviltwin::eviltwin ALIAS eviltwin)

target_include_directories(eviltwin
 INTERFACE
   .
)