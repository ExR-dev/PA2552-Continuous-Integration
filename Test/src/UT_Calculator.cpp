#include <Calculator.hpp>
#include <gtest/gtest.h>

TEST(CalculatorTest, Add)
{
	ASSERT_DOUBLE_EQ(Calculator::Add(1, 1), 2);
	ASSERT_DOUBLE_EQ(Calculator::Add(2, 3), 5);
	ASSERT_DOUBLE_EQ(Calculator::Add(-1, 1), 0);
}

TEST(CalculatorTest, Sub)
{
	ASSERT_DOUBLE_EQ(Calculator::Sub(1, 1), 0);
	ASSERT_DOUBLE_EQ(Calculator::Sub(5, 3), 2);
	ASSERT_DOUBLE_EQ(Calculator::Sub(1, -1), 2);
}

TEST(CalculatorTest, Mul)
{
	ASSERT_DOUBLE_EQ(Calculator::Mul(1, 2), 2);
	ASSERT_DOUBLE_EQ(Calculator::Mul(0, 8), 0);
	ASSERT_DOUBLE_EQ(Calculator::Mul(3, -2), -6);
}

TEST(CalculatorTest, Div)
{
	ASSERT_DOUBLE_EQ(Calculator::Div(1, 1), 1);
	ASSERT_DOUBLE_EQ(Calculator::Div(6, 3), 2);
	ASSERT_DOUBLE_EQ(Calculator::Div(1, 2), 0.5);
}

TEST(CalculatorTest, Pow)
{
	ASSERT_DOUBLE_EQ(Calculator::Pow(2, 3), 8);
	ASSERT_DOUBLE_EQ(Calculator::Pow(5, 0), 1);
	ASSERT_DOUBLE_EQ(Calculator::Pow(3, 2), 9);
	ASSERT_DOUBLE_EQ(Calculator::Pow(2, -1), 0.5);
}

TEST(CalculatorTest, Sqrt)
{
	ASSERT_DOUBLE_EQ(Calculator::Sqrt(4), 2);
	ASSERT_DOUBLE_EQ(Calculator::Sqrt(0), 0);
	ASSERT_DOUBLE_EQ(Calculator::Sqrt(9), 3);
}

TEST(CalculatorTest, Skaboop)
{
	ASSERT_DOUBLE_EQ(Calculator::Skaboop(4), 0.0);
	ASSERT_DOUBLE_EQ(Calculator::Skaboop(69), 1.0);
}

TEST(CalculatorTest, Dist)
{
	ASSERT_DOUBLE_EQ(Calculator::Dist(0, 1), 1.0);
	ASSERT_DOUBLE_EQ(Calculator::Dist(2, 0), 2.0);
	ASSERT_DOUBLE_EQ(Calculator::Dist(3, 1), 2.0);
	ASSERT_DOUBLE_EQ(Calculator::Dist(5.5, 6.1), 0.6);
}
TEST(CalculatorTest, Abs)
{
	ASSERT_DOUBLE_EQ(Calculator::Abs(1), 1);
	ASSERT_DOUBLE_EQ(Calculator::Abs(-1), 1);
	ASSERT_DOUBLE_EQ(Calculator::Abs(0), 0);
}

TEST(CalculatorTest, Truncate)
{
	ASSERT_DOUBLE_EQ(Calculator::Truncate(12.34), 12);
	ASSERT_DOUBLE_EQ(Calculator::Truncate(1.100), 1);
	ASSERT_DOUBLE_EQ(Calculator::Truncate(-2.11), -2);
}
