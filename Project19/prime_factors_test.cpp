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

TEST_F(PrimeFixture, OF3) {
	expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, OF4) {
	expected = {2, 2};
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, OF6) {
	expected = {2, 3};
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, OF9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, OF12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}