add_library(Montellese INTERFACE)
add_library(Montellese::cpp-signal   ALIAS Montellese)

target_include_directories(Montellese
 INTERFACE
   .
)