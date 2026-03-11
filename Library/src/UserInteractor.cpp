#include "UserInteractor.hpp"

namespace IO
{
    std::tuple<double, double, Calculator::MathOp> UserInteractor::StringToMathOperation(std::string_view pNumOne, std::string_view pNumTwo, std::string_view pOp)
    {
        double numOne = std::stod(std::string(pNumOne));
        double numTwo = std::stod(std::string(pNumTwo));

        Calculator::MathOp ari;
        if(pOp == "add")
        {
            ari = Calculator::MathOp::Add;
        }
        else if(pOp == "sub")
        {
            ari = Calculator::MathOp::Subtract;
        }
        else if(pOp == "mul")
        {
            ari = Calculator::MathOp::Multiply;
        }
        else if(pOp == "div")
        {
            ari = Calculator::MathOp::Divide;
        }
        else if(pOp == "sqrt")
        {
            ari = Calculator::MathOp::SquareRoot;
        }
        else if(pOp == "exp")
        {
            ari = Calculator::MathOp::Exponentiate;
        }
        return std::tuple<double, double, Calculator::MathOp>(numOne, numTwo, ari);
    }

    double UserInteractor::MakeCalculation(std::tuple<double, double, Calculator::MathOp> &op)
    {
        return double();
    }
} // IO