#include "UserInteractor.hpp"
#include <algorithm>
#include <limits>

namespace IO
{
    std::tuple<double, double, Calculator::MathOp> UserInteractor::StringToMathOperation(std::string_view pNumOne, std::string_view pNumTwo, std::string_view pOp)
    {
        double numOne = std::stod(std::string(pNumOne));
        double numTwo = std::stod(std::string(pNumTwo));

        Calculator::MathOp ari;
        
        std::string pop(pOp);
        std::transform(pop.begin(), pop.end(), pop.begin(),
               [](unsigned char c){ return std::tolower(c); });

        if(pop == "add")
        {
            ari = Calculator::MathOp::Add;
        }
        else if(pop == "sub" || pop == "subtract")
        {
            ari = Calculator::MathOp::Subtract;
        }
        else if(pop == "mul" || pop == "multiply")
        {
            ari = Calculator::MathOp::Multiply;
        }
        else if(pop == "div" || pop == "divide")
        {
            ari = Calculator::MathOp::Divide;
        }
        else if(pop == "sqrt")
        {
            ari = Calculator::MathOp::SquareRoot;
        }
        else if(pop == "pow" || pop == "exp")
        {
            ari = Calculator::MathOp::Exponentiate;
        }
        else if (pop == "skaboop")
        {
            ari = Calculator::MathOp::Skaboop;
        }
        return std::tuple<double, double, Calculator::MathOp>(numOne, numTwo, ari);
    }

    double UserInteractor::MakeCalculation([[maybe_unused]] std::tuple<double, double, Calculator::MathOp> &op)
    {
		Calculator::MathOp ari = std::get<2>(op);

        switch (ari)
        {
        case Calculator::MathOp::Add:
			return Calculator::Add(std::get<0>(op), std::get<1>(op));

        case Calculator::MathOp::Subtract:
			return Calculator::Sub(std::get<0>(op), std::get<1>(op));

        case Calculator::MathOp::Multiply:
			return Calculator::Mul(std::get<0>(op), std::get<1>(op));

        case Calculator::MathOp::Divide:
			return Calculator::Div(std::get<0>(op), std::get<1>(op));

        case Calculator::MathOp::Exponentiate:
			return Calculator::Pow(std::get<0>(op), std::get<1>(op));

        case Calculator::MathOp::SquareRoot:
			return Calculator::Sqrt(std::get<0>(op));

        case Calculator::MathOp::Skaboop:
            return Calculator::Skaboop(std::get<0>(op));

        default:
			return std::numeric_limits<double>::quiet_NaN();
        }
    }
} // IO