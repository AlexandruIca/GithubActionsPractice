#include "adder.hpp"

auto add::adder(int const a, int const b) noexcept -> int
{
    return a + b;
}

auto add::adder(float const a, float const b) noexcept -> float
{
    return a + b;
}

auto add::adder(double const a, double const b) noexcept -> double
{
    return a + b;
}
