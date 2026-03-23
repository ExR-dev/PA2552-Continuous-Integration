#pragma once

namespace Calculator
{
	enum class MathOp
	{
		Add,
		Subtract,
		Multiply,
		Divide,
		Exponentiate,
		SquareRoot,
		Skaboop,
		Dist
	};

	[[nodiscard]] double Add(double a, double b) noexcept;
	[[nodiscard]] double Sub(double a, double b) noexcept;
	[[nodiscard]] double Mul(double a, double b) noexcept;
	[[nodiscard]] double Div(double a, double b) noexcept;
	[[nodiscard]] double Pow(double base, double exp) noexcept;
	[[nodiscard]] double Sqrt(double a) noexcept;
	[[nodiscard]] double Skaboop(double a) noexcept;
	[[nodiscard]] double Dist(double a, double b) noexcept;
	[[nodiscard]] double Abs(double a) noexcept;
	[[nodiscard]] double Truncate(double a) noexcept;
}