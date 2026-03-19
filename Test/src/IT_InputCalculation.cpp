#include <UserInteractor.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(InputCalculationTest, CalcParsedAdd)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("1", "1", "add");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 2.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedSub1)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("5", "3", "sub");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 2.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedSub2)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("0.0", "0", "Sub");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 0.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedMul)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("5", "3", "mul");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 15.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedDiv)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("5", "2", "div");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 2.5, 1e-6);
}

TEST(InputCalculationTest, CalcParsedPow)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("2", "3", "exp");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 8.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedSqrt)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("9", "0", "sqrt");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 3.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedSkaboop1)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("9", "0", "skaboop");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 0.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedSkaboop2)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("69", "0", "skaboop");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 1.0, 1e-6);
}

TEST(InputCalculationTest, CalcParsedDist)
{
	IO::UserInteractor ui = IO::UserInteractor();
	auto parsedOp = ui.StringToMathOperation("6,7", "1,3", "Distance");
	double result = ui.MakeCalculation(parsedOp);
	ASSERT_NEAR(result, 5.4, 1e-6);
}