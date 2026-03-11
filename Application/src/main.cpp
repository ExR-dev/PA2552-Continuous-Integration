#include <iostream>
#include <lib.hpp>
#include <Calculator.hpp>

int main()
{
    //std::cout << "Hello world!\n" << "The meaning of life is " << DummyLibNamespace::libFunc() << "\n";

    std::string userInput;
    std::cin >> userInput;

    std::cout << userInput << "\n";

	//std::cout << "2 + 3 = " << Calculator::Add(2, 3) << "\n";

    return 0;
}