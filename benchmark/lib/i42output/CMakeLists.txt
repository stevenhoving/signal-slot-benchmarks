add_library(i42output
    src/async_task.cpp
    src/async_thread.cpp
    src/event.cpp
    src/thread.cpp
    src/timer.cpp
    src/waitable_event.cpp
    src/win32_message_queue.cpp
)

add_library(i42output::neolib ALIAS i42output)

target_include_directories(i42output
 PUBLIC
   include
)

target_link_libraries(i42output
  PUBLIC
    Boost::boost
)
