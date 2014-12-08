#include "gtest/gtest.h"

TEST(StockQuote, Total) {
    // TODO: Write a test here
    EXPECT_EQ(1234, 42);
}


int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);
    
	return RUN_ALL_TESTS();
}