#include <libFreeAssange/free_assange.hpp>

#include <fmt/core.h>

namespace lib_B {

int fn_b()
{
    free_assange::doIt();
    fmt::print("The answer is {}.", 42);
    return 42;
}

} // namespace lib_B
