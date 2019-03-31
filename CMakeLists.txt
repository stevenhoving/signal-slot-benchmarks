cmake_minimum_required(VERSION 3.6)
project(signal-slot-benchmarks VERSION 0.0.1 LANGUAGES CXX)

add_definitions(-D_WIN32_WINNT=0x0501 -D_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS -D_CRT_SECURE_NO_WARNINGS)


# compiler support
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)

# dependencies
find_package(Boost
  COMPONENTS
    system
    thread
    date_time
    regex
    chrono
    REQUIRED
)
find_package(Threads)

set(LIBFASTSIGNALS_ENABLE_TEST OFF) # move to benchmark directory
add_subdirectory(benchmark)

# project definition
add_executable(bench
    benchmark.cpp
    benchmark/cpp/benchmark_aco.cpp
    benchmark/cpp/benchmark_asg.cpp
    benchmark/cpp/benchmark_bs1.cpp         # boost::signals (currently using boost::signals2)
    benchmark/cpp/benchmark_bs2.cpp         # boost::signals2
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
    benchmark/cpp/benchmark_lfs.cpp         # libfastsignals
    benchmark/cpp/benchmark_nod.cpp
    benchmark/cpp/benchmark_nod_st.cpp
    benchmark/cpp/benchmark_nss.cpp
    benchmark/cpp/benchmark_nss_v2.cpp
    benchmark/cpp/benchmark_nss_v2_st.cpp
    benchmark/cpp/benchmark_psg.cpp
    benchmark/cpp/benchmark_pss.cpp
    benchmark/cpp/benchmark_pss_st.cpp
    benchmark/cpp/benchmark_sss.cpp
    benchmark/cpp/benchmark_vdk.cpp
    benchmark/cpp/benchmark_wnk.cpp
    benchmark/cpp/benchmark_wsg.cpp
    benchmark/cpp/benchmark_yas.cpp
)

set_target_properties(bench PROPERTIES CXX_EXTENSIONS NO)
target_include_directories(bench PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

if(NOT DEFINED MSVC)
target_compile_options(bench PRIVATE  "-fdiagnostics-color=always")
endif()

target_link_libraries(bench
    Boost::system
    Boost::date_time
    Boost::regex
    Boost::chrono
    Threads::Threads

    dacap::obs
    i42output::neolib
    jeffomatic::jl_signal
    libfastsignals
    supergrover::sigslot
    winglot::signals
    mwthinker::signal
)
