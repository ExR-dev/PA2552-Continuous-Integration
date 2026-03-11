#include "UserInteractor.hpp"

namespace IO
{
    std::tuple<double, double, Calculator::MathOp> UserInteractor::StringToMathOperation(std::string_view pNumOne, std::string_view pNumTwo, std::string_view pOp)
    {
        return std::tuple<double, double, Calculator::MathOp>();
    }

    double UserInteractor::MakeCalculation()
    {
        return double();
    }
} // IO