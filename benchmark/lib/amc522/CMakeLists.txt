add_library(amc522 INTERFACE)
add_library(amc522::signal11 ALIAS amc522)

target_include_directories(amc522
 INTERFACE
   .
)