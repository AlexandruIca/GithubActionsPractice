#include <cmath>
#include <cstdlib>
#include <iostream>

#include "adder.hpp"

#define ASSERT(...)                                                            \
    if(!(__VA_ARGS__))                                                         \
    (std::cout << __LINE__ << std::endl), exit_status = EXIT_FAILURE

[[nodiscard]] auto eq(float const a, float const b) noexcept -> bool
{
    return std::abs(a - b) <= 0.001f;
}

[[nodiscard]] auto eq(double const& a, double const& b) noexcept -> bool
{
    return std::abs(a - b) <= 0.001f;
}

auto main(int, char*[]) noexcept -> int
{
    int exit_status = EXIT_SUCCESS;

    ASSERT(add::adder(2, 3) == 5);
    ASSERT(add::adder(100, 0) == 100);
    ASSERT(add::adder(-50, 70) == 20);
    ASSERT(eq(add::adder(3.4f, 0.6f), 4.0f));
    ASSERT(eq(add::adder(3.4, 0.6), 4.0));
    ASSERT(eq(add::adder(-3.4, -0.6), -4.0));

    return exit_status;
}
