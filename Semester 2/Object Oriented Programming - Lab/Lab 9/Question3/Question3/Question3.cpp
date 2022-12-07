#include <iostream>
using namespace std;

class Account 
{
protected:
	float balance;
	string name;
public:
	virtual void deposit() = 0;
	virtual void withdraw() = 0;
	virtual void checkBalance() = 0;
};

class InterestAccount:public Account
{
protected:
	int interest;
public:
	InterestAccount()
	{
		interest = 30;
		cout << "Input your name: ";
		cin >> name;
		cout << "Input balance: ";
		cin >> balance;
	}
	void deposit()
	{
		int temp, temp2;
		cout << "Input the amount you want to deposit: ";
		cin >> temp;
		balance += temp - ((temp / 100)*interest);
	}

	void withdraw()
	{

	}

	void checkBalance()
	{

	}
};

class ChargingAccount:public Account
{
protected:
	float fee;
public:
	void withdraw()
	{

	}
};

class ACI:public InterestAccount, public ChargingAccount
{
public:
	ACI(float amount, Account tempA)
	{

	}

	ACI(float amount, InterestAccount tempI)
	{

	}

	ACI(float amount, ChargingAccount tempC)
	{

	}
};

int main()
{

}