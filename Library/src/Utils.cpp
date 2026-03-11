#include "Utils.hpp"
#include <cmath>

bool Utils::EqualEst(double a, double b, double epsilon) noexcept
{
	return std::abs(a - b) < epsilon;
}
