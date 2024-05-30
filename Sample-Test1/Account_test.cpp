#include "pch.h"
#include "../Project1/Account.cpp"
using namespace std;

class AccountFixture : public testing::Test {
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000Won) {
	EXPECT_EQ(account.getBalance(),10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}


TEST_F(AccountFixture, interestMoney) {
	EXPECT_EQ(account.setInterest(5).applyInterest(), 10500);
}

TEST_F(AccountFixture, expectedTotalAccount) {
	EXPECT_EQ(account.setInterest(5).getExpectedTotalAccount(5), 12761);
}

TEST_F(AccountFixture, expectedTotalAccount1) {
	EXPECT_EQ(account.setInterest(10).getExpectedTotalAccount(3), 13310);
}