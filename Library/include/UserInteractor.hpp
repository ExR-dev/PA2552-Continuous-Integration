#pragma once

#include <tuple>
#include <string_view>
#include <string>
#include <cstring>
#include "Calculator.hpp"

namespace IO
{
    class UserInteractor
    {
    public:
        UserInteractor() = default;
        UserInteractor(const UserInteractor&) = default;
        UserInteractor& operator=(const UserInteractor&) = default;
        UserInteractor(UserInteractor&&) noexcept = default;
        UserInteractor& operator=(UserInteractor&&) noexcept = default;

        [[nodiscard]] std::tuple<double, double, Calculator::MathOp> StringToMathOperation(std::string_view pNumOne, std::string_view pNumTwo, std::string_view pOp);
        [[nodiscard]] double MakeCalculation(std::tuple<double, double, Calculator::MathOp> &op);
    };
} // IO