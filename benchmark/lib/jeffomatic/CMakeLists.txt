add_library(jeffomatic
    jl_signal/src/DoublyLinkedList.h
    jl_signal/src/FastDelegate.h
    jl_signal/src/ObjectPool.cpp
    jl_signal/src/ObjectPool.h
    jl_signal/src/ObjectPoolScopedAllocator.h
    jl_signal/src/ScopedAllocator.h
    jl_signal/src/Signal.h
    jl_signal/src/SignalBase.cpp
    jl_signal/src/SignalBase.h
    jl_signal/src/SignalDefinitions.h
    jl_signal/src/StaticSignalConnectionAllocators.h
    jl_signal/src/Utils.h
)

# todo tests
#jl_signal/src/DoublyLinkedListTest.cpp
#jl_signal/src/ObjectPoolTest.cpp
#jl_signal/src/SignalTest.cpp

add_library(jeffomatic::jl_signal ALIAS jeffomatic)

target_include_directories(jeffomatic
 PUBLIC
  .
)