#include <UserInteractor.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(UserInteractorTest, ParseAddVariant1)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "add";
	const std::string userInputNum1 = "1";
	const std::string userInputNum2 = "1";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 1.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 1.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Add);
}

TEST(UserInteractorTest, ParseAddVariant2)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "ADD";
	const std::string userInputNum1 = "-1";
	const std::string userInputNum2 = "6.9";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), -1.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 6.9, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Add);
}

TEST(UserInteractorTest, ParseSubVariant1)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "sub";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "3";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Subtract);
}

TEST(UserInteractorTest, ParseSubVariant2)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "Subtract";
	const std::string userInputNum1 = "0.2";
	const std::string userInputNum2 = "3";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 0.2, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Subtract);
}

TEST(UserInteractorTest, ParseMulVariant1)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "mul";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "3";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Multiply);
}

TEST(UserInteractorTest, ParseMulVariant2)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "MULTIPLY";
	const std::string userInputNum1 = "0.2";
	const std::string userInputNum2 = "3";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 0.2, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Multiply);
}

TEST(UserInteractorTest, ParseDivVariant1)
{
	IO::UserInteractor ui = IO::UserInteractor();
	
	const std::string userInputOp = "div";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "3";
	
	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Divide);
}

TEST(UserInteractorTest, ParseDivVariant2)
{
	IO::UserInteractor ui = IO::UserInteractor();
	
	const std::string userInputOp = "DIVIDE";
	const std::string userInputNum1 = "0.2";
	const std::string userInputNum2 = "3";
	
	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);
	
	ASSERT_NEAR(std::get<0>(actual), 0.2, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Divide);
}

TEST(UserInteractorTest, ParsePowVariant1)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "pow";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "3";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Exponentiate);
}

TEST(UserInteractorTest, ParsePowVariant2)
{
	IO::UserInteractor ui = IO::UserInteractor();
	
	const std::string userInputOp = "exp";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "3";
	
	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Exponentiate);
}

TEST(UserInteractorTest, ParseSqrt)
{
	IO::UserInteractor ui = IO::UserInteractor();
	
	const std::string userInputOp = "sqrt";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "0";
	
	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 0.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::SquareRoot);
}

TEST(UserInteractorTest, ParseSkaboop)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "Skaboop";
	const std::string userInputNum1 = "5";
	const std::string userInputNum2 = "0";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), 5.0, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Skaboop);
}

TEST(UserInteractorTest, ParseDist)
{
	IO::UserInteractor ui = IO::UserInteractor();

	const std::string userInputOp = "dist";
	const std::string userInputNum1 = "-0.1";
	const std::string userInputNum2 = "3.2";

	auto actual = ui.StringToMathOperation(userInputNum1, userInputNum2, userInputOp);

	ASSERT_NEAR(std::get<0>(actual), -0.1, 1e-6);
	ASSERT_NEAR(std::get<1>(actual), 3.2, 1e-6);
	ASSERT_EQ(std::get<2>(actual), Calculator::MathOp::Dist);
}