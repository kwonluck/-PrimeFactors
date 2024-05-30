#include "pch.h"
#include "../Project2/prime-factor.cpp"
#include <vector>
using namespace std;

class PrimeFactorFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};


TEST_F(PrimeFactorFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFactorFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFactorFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFactorFixture, Of4) {
	expected = { 2,2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFactorFixture, Of6) {
	expected = { 2,3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFactorFixture, Of9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFactorFixture, Of12) {
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}

TEST_F(PrimeFactorFixture, Of15) {
	expected = { 3,5 };
	EXPECT_EQ(expected, prime_factor.of(15));
}