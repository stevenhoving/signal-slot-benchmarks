#pragma once

#include "../lib/palacaze/sigslot/signal.hpp"

#include "../../benchmark.hpp"

class Pss
{
    sigslot::scoped_connection conn;

    NOINLINE(void handler(Rng& rng))
    {
        volatile std::size_t a = rng(); (void)a;
    }

    public:

    using Signal = sigslot::signal<Rng&>;

    template <typename Subject, typename Foo>
    static void connect_method(Subject& subject, Foo& foo)
    {
        foo.conn = subject.connect_scoped(&Foo::handler, &foo);
    }
    template <typename Subject>
    static void emit_method(Subject& subject, Rng& rng)
    {
        subject(rng);
    }

    // Used for switching policies at runtime
    static void initialize();

    static void validate_assert(std::size_t);
    static double construction(std::size_t);
    static double destruction(std::size_t);
    static double connection(std::size_t);
    static double emission(std::size_t);
    static double combined(std::size_t);
    static double threaded(std::size_t);

    static constexpr const char* C_LIB_NAME = "* Pal Sigslot";
    static constexpr const char* C_LIB_SOURCE_URL = "https://github.com/palacaze/sigslot";
    static constexpr const char* C_LIB_FILE = "benchmark_pss";
    static constexpr const char* C_LIB_IS_HEADER_ONLY = "X";
    static constexpr const char* C_LIB_DATA_STRUCTURE = "singly linked list";
    static constexpr const char* C_LIB_IS_THREAD_SAFE = "X";
};
