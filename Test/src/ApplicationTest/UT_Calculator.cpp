#include <Calculator.hpp>
#include <gtest/gtest.h>

TEST(AppCalcTest, Add)
{
	ASSERT_DOUBLE_EQ(Calculator::Add(2, 3), 5);
}