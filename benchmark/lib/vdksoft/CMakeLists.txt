add_library(vdksoft INTERFACE)
add_library(vdksoft::signals ALIAS vdksoft)

target_include_directories(vdksoft
 INTERFACE
   signals/include
)