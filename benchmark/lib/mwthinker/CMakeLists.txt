add_library(mwthinker
    Signal/src/mw/signals/connection.cpp
    Signal/src/mw/signals/connection.h
    Signal/src/mw/signal.h
)

add_library(mwthinker::signal ALIAS mwthinker)

target_include_directories(mwthinker
 PUBLIC
   Signal/src
)
