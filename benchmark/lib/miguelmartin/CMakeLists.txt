add_library(miguelmartin INTERFACE)
add_library(miguelmartin::Wink-Signals ALIAS miguelmartin)

target_include_directories(miguelmartin
 INTERFACE
   Wink-Signals
)