//***************************
// 파일명: hw15_3.cpp
// 작성자: 201432014 모설아
// 작성일: 2018.06.06
// 내용: 예외처리 3
//***************************

#include <iostream>

using namespace std;

class AccountException {
public:
	virtual void exceptionMessage() const = 0;
};

class NegativeBalanceException : public AccountException {
private:
	int balance;
public:
	NegativeBalanceException(int money) : balance(money) {}
	virtual void exceptionMessage() const {
		cout << "Your Account has not enough balance, your present balance is " << balance << "$." << endl;
	}
};

class ExceedLimitException : public AccountException {
private:
	int limit;

public:
	ExceedLimitException(int money) : limit(money) {}
	virtual void exceptionMessage() const {
		cout << "Your withdraw order was over withdraw limit, your withdraw limit is " << limit << "$." << endl;
	}
};

class WrongAmmountException : public AccountException {
public:
	virtual void exceptionMessage() const {
		cout << "Your order was wrong, please type positive number." << endl;
	}
};

class BankAccount {
private :
	int balance;
	int limit;

public :
	BankAccount(int limitValue) : balance(0), limit(limitValue) {}

	void deposit(int value) throw(AccountException) {
		if (value < 0) throw WrongAmmountException();
		balance += value;
		cout << "Deposited " << value << "$, your amount balance is " << balance << "$." << endl;
	}

	void withdraw(int value) throw(AccountException) {
		if (value < 0) throw WrongAmmountException();
		if (value > limit) throw ExceedLimitException(limit);
		if (value > balance) throw NegativeBalanceException(balance);

		balance -= value;
		cout << "Withdrawed" << value << "$, your amout balance is " << balance << "$." << endl;
	}

	int getBalance() {
		return balance;
	}
};

int main() {
	cout << "hw15_3 : Seol_Ah Mo" << endl << endl;

	BankAccount acount(100);

	int select = 0;
	int money = 0;
	int amountDeposit = 0;
	int amountWithdraw = 0;

	while (1) {
		cout << "1. deposit // 2. withdraw // 3. check balance // 4. exit program" << endl << "please select number : ";

		cin >> select;

		try {
			switch (select)
			{
			case 1:
				cout << "========Deposit========" << endl << "Please type how much money you want to deposit : ";
				cin >> money;
				acount.deposit(money);
				amountDeposit += money;
				break;

			case 2:
				cout << "=======withdraw========" << endl << "Please type how much money you want to withdraw : ";
				cin >> money;
				acount.withdraw(money);
				amountWithdraw += money;
				break;

			case 3:
				cout << "=====check Balance=====" << endl;
				cout << "Amount balance in your account is " << acount.getBalance() << "$." << endl;
				break;

			case 4:
				cout << "======exit Program=====" << endl << "Amount of Deposit : " << amountDeposit << "$ // Amount of Withdraw : " << amountWithdraw << "$" << endl;
				return 0;
				break;

			default:
				cout << "Your select is wrong, please select again between 1 and 4." << endl;
				break;
			}
		}
		catch (AccountException &excp) {
			excp.exceptionMessage();
		}

	}
	return 0;
}