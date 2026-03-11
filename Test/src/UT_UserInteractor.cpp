#include <UserInteractor.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(UserInteractorTest, ParseAdd)
{
	IO::UserInteractor ui = IO::UserInteractor();

	std::string userInputOp = "add";
	std::string userInputNum1 = "1";
	std::string userInputNum2 = "1";

	auto expected = std::make_tuple(1.0, 1.0, Calculator::MathOp::Add);
	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_DOUBLE_EQ(std::get<0>(actual), std::get<0>(expected));
	ASSERT_DOUBLE_EQ(std::get<1>(actual), std::get<1>(expected));
	ASSERT_EQ(std::get<2>(actual), std::get<2>(expected));
}
