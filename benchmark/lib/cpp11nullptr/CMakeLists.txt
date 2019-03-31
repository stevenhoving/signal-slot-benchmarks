add_library(cpp11nullptr INTERFACE)
add_library(cpp11nullptr::lsignal ALIAS cpp11nullptr)

target_include_directories(cpp11nullptr
 INTERFACE
   .
)