add_library(supergrover
    sigslot/src/signal.cpp
    sigslot/include/sigslot/signal.h
)

add_library(supergrover::sigslot ALIAS supergrover)

target_include_directories(supergrover
 PUBLIC
   sigslot/include
)
