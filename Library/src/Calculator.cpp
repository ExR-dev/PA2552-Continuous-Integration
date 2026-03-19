#include "Calculator.hpp"
#include "Utils.hpp"
#include <cmath>

double Calculator::Add(double a, double b) noexcept
{
	return a + b;
}

double Calculator::Sub(double a, double b) noexcept
{
	return a - b;
}

double Calculator::Mul(double a, double b) noexcept
{
	return a * b;
}

double Calculator::Div(double a, double b) noexcept
{
	return a / b;
}

double Calculator::Pow(double base, double exp) noexcept
{
	return std::pow(base, exp);
}

double Calculator::Sqrt(double a) noexcept
{
	return std::sqrt(a);
}

double Calculator::Skaboop(double a) noexcept
{
	return (Utils::EqualEst(a, 69.0, 1e-6)) ? 1.0 : 0.0;
}

double Calculator::Dist(double a, double b) noexcept
{
	return std::abs(b - a);
}
