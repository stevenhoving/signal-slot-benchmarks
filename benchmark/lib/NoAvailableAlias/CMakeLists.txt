add_library(NoAvailableAlias1 INTERFACE)
add_library(NoAvailableAlias1::nano-signal-slot ALIAS NoAvailableAlias1)

target_include_directories(NoAvailableAlias1
 INTERFACE
   nano-signal-slot
)

add_library(NoAvailableAlias2 INTERFACE)
add_library(NoAvailableAlias2::nano-signal-slot ALIAS NoAvailableAlias2)

target_include_directories(NoAvailableAlias2    
 INTERFACE
   nano-signal-slot-v2x
)