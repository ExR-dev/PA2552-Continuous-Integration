#include "../include/Calculator.hpp"
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
