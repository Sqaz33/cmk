#include <gtest/gtest.h>

#include "my-alg.hpp"

TEST(AlgTests, FirstMax) {
    EXPECT_TRUE(isFirstMax(2, 1));
}

TEST(AlgTests, SecondMax) {
    EXPECT_FALSE(isFirstMax(1, 2));
}

TEST(AlgTests, Eq) {
    EXPECT_FALSE(isFirstMax(1, 1));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}