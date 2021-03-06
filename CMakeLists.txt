cmake_minimum_required(VERSION 3.6)
project(signal-slot-benchmarks VERSION 0.0.1 LANGUAGES CXX)

# compiler support
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

# dependencies
find_package(Boost COMPONENTS signals system thread REQUIRED)
find_package(Threads)

# project definition
add_executable(bench
    benchmark.cpp
    benchmark/cpp/benchmark_aco.cpp
    benchmark/cpp/benchmark_asg.cpp
    benchmark/cpp/benchmark_bs1.cpp
    benchmark/cpp/benchmark_bs2.cpp
    benchmark/cpp/benchmark_cls.cpp
    benchmark/cpp/benchmark_cps.cpp
    benchmark/cpp/benchmark_cps_st.cpp
    benchmark/cpp/benchmark_dob.cpp
    benchmark/cpp/benchmark_evl.cpp
    benchmark/cpp/benchmark_jls.cpp
    benchmark/cpp/benchmark_jos.cpp
    benchmark/cpp/benchmark_ksc.cpp
    benchmark/cpp/benchmark_lss.cpp
    benchmark/cpp/benchmark_mws.cpp
    benchmark/cpp/benchmark_nls.cpp
    benchmark/cpp/benchmark_nls_st.cpp
    benchmark/cpp/benchmark_nod.cpp
    benchmark/cpp/benchmark_nod_st.cpp
    benchmark/cpp/benchmark_nss.cpp
    benchmark/cpp/benchmark_nss_v2.cpp
    benchmark/cpp/benchmark_nss_v2_st.cpp
    benchmark/cpp/benchmark_psg.cpp
    benchmark/cpp/benchmark_pss.cpp
    benchmark/cpp/benchmark_pss_st.cpp
    benchmark/cpp/benchmark_spp.cpp
    benchmark/cpp/benchmark_sss.cpp
    benchmark/cpp/benchmark_wnk.cpp
    benchmark/cpp/benchmark_wsg.cpp
    benchmark/cpp/benchmark_yas.cpp
    benchmark/lib/supergrover/sigslot/src/signal.cpp
    benchmark/lib/winglot/Signals/W_Slot.cpp
    benchmark/lib/jeffomatic/jl_signal/src/SignalBase.cpp
    benchmark/lib/jeffomatic/jl_signal/src/ObjectPool.cpp
    benchmark/lib/mwthinker/Signal/src/mw/signals/connection.cpp
    benchmark/lib/dacap/obs/dacap_connection.cpp
    benchmark/lib/i42output/src/async_task.cpp
    benchmark/lib/i42output/src/async_thread.cpp
    benchmark/lib/i42output/src/event.cpp
    benchmark/lib/i42output/src/thread.cpp
    benchmark/lib/i42output/src/timer.cpp
    benchmark/lib/i42output/src/waitable_event.cpp
)

set_target_properties(bench PROPERTIES CXX_EXTENSIONS NO)
target_include_directories(bench PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(bench PRIVATE  "-fdiagnostics-color=always")
target_link_libraries(bench Boost::system Boost::signals Threads::Threads)

