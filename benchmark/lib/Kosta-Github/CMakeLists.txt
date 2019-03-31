add_library(Kosta-Github INTERFACE)
add_library(Kosta-Github::signals-cpp ALIAS Kosta-Github)

target_include_directories(Kosta-Github
 INTERFACE
   signals-cpp
)