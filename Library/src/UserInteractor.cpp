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
            ari = Calculator::MathOp::OpAdd;
        }
        else if(pOp == "sub")
        {
            ari = Calculator::MathOp::OpSubtract;
        }
        else if(pOp == "mul")
        {
            ari = Calculator::MathOp::OpMultiply;
        }
        else if(pOp == "div")
        {
            ari = Calculator::MathOp::OpDivide;
        }
        else if(pOp == "sqrt")
        {
            ari = Calculator::MathOp::OpSquareRoot;
        }
        else if(pOp == "exp")
        {
            ari = Calculator::MathOp::OpExponentiate;
        }
        return std::tuple<double, double, Calculator::MathOp>(numOne, numTwo, ari);
    }

    double UserInteractor::MakeCalculation()
    {
        return double();
    }
} // IO