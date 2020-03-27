#ifndef ADDER_HPP
#define ADDER_HPP
#pragma once

namespace add {

[[nodiscard]] auto adder(int const, int const) noexcept -> int;
[[nodiscard]] auto adder(float const, float const) noexcept -> float;
[[nodiscard]] auto adder(double const, double const) noexcept -> double;

} // namespace add

#endif // !ADDER_HPP
