#include "gmock/gmock.h"
#include "prime_factors.cpp"

class PrimeFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, OF1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, OF2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}