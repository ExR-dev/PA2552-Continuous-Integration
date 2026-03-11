#pragma once

#include <tuple>
#include "Calculator.hpp"

namespace IO
{
    class UserInteractor
    {
        UserInteractor() = default;
        UserInteractor(const UserInteractor&) = default;
        UserInteractor& operator=(const UserInteractor&) = default;
        UserInteractor(UserInteractor&&) noexcept = default;
        UserInteractor& operator=(UserInteractor&&) noexcept = default;

        [[nodiscard]] std::tuple<double, double, Calculator::MathOp> StringToMathOperation();
        [[nodiscard]] double MakeCalculation();
    };
} // IO