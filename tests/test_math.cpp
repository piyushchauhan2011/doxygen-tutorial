#include <gtest/gtest.h>
#include "math/math.h"

TEST(MathTest, Add)
{
    EXPECT_EQ(math::add(2, 3), 5);
    EXPECT_EQ(math::add(-1, 1), 0);
}
