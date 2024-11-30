#include <gtest/gtest.h>

#include "TaxCalculator.h"

// Function to be tested
int add(int a, int b) {
    return a + b;
}

// Test case for the add function
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(-10, 5), -5);
}

TEST(AddTest, Zero) {
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(5, 0), 5);
}

TEST(AddTest, MixedSignNumbers) {
    EXPECT_EQ(add(-2, 3), 1);
    EXPECT_EQ(add(10, -5), 5);
}

TEST(TaxCalculator, BasicConversion) {
    EXPECT_EQ(TaxCalculator().tax(100), 20.10);
}

// Main function to run the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
