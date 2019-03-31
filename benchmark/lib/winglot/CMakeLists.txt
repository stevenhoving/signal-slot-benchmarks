add_library(winglot
    Signals/include/winglot/W_Connection.h
    Signals/include/winglot/W_ConnectionBase.h
    Signals/include/winglot/W_Mutex.h
    Signals/include/winglot/W_Signal.h
    Signals/include/winglot/W_SignalBase.h
    Signals/include/winglot/W_Slot.h
    Signals/W_slot.cpp
)

add_library(winglot::signals ALIAS winglot)

target_include_directories(winglot
 PUBLIC
   Signals/include
 PRIVATE
   Signals/include/winglot
)
