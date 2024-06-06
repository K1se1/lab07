#include<gtest/gtest.h>
#include "task3.hpp"


TEST(TestEqualitySolve, infinite_solves)
{
    ASSERT_EQ(solve_equality("5x-5x=3-3+3-3"), "Infinite");
}


TEST(TestEqualitySolve, no_solves)
{
    ASSERT_EQ(solve_equality("5x-5x=100+397-109"), "No");
}


TEST(TestEqualitySolve, without_xval)
{
    ASSERT_EQ(solve_equality("100=100"), "Infinite");
}


TEST(TestEqualitySolve, simple_eqlt1)
{
    ASSERT_EQ(solve_equality("5x=100"), "20");
}


TEST(TestEqualitySolve, simple_eqlt2)
{
    ASSERT_EQ(solve_equality("5x-3+2=100-1"), "20");
}
