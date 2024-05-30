#include <iostream>
using namespace std;

class Account {
public :
	Account(int money) :balance(money) {

	}

	int getBalance() {
		return balance;
	}

	int getExpectedTotalAccount(int year) {
		if (isSetInterest() == false)
			return 0;

		int expected_Account = balance;
		for (int i = 0; i < year; i++) {
			expected_Account = applyInterestForMoney(expected_Account);
		}
		return expected_Account;
	}

	int applyInterest() {
		if (isSetInterest() == false)
			return 0;
		
		return applyInterestForMoney(balance);
	}

	void deposit(int money) {
		balance += money;
	}

	void withdraw(int money) {
		balance -= money;
	}

	Account& setInterest(double rate) {
		interestRate = rate/100;
		return *this;
	}

private :
	int balance = 0;
	double interestRate = 0;

	bool isSetInterest() {
		if (interestRate == 0) {
			cout << "금리 설정이 안되었습니다" << endl;
			return false;
		}
		return true;
	}

	int applyInterestForMoney(int money) {
		return money += money * interestRate;
	}
};

