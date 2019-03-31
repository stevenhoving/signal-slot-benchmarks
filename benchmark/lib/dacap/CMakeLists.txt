add_library(dacap
    obs/dacap_connection.cpp
    obs/dacap_connection.h
    obs/dacap_signal.h
    obs/observable.h
    obs/observers.h
    obs/safe_list.h
    obs/slot.h
)

add_library(dacap::obs ALIAS dacap)

target_include_directories(dacap
 PUBLIC
   .
)
