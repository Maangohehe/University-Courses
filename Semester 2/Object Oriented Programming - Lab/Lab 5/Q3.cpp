#include <iostream>

using namespace std;

class BankAccount{
	string name_of_depositor, type_of_account;
	int acc_number;
	float amount, balance_amount, withdraw;
	static float rate_of_interest;
	public:
	BankAccount()
	{
		
		cout << "Input your name: ";
		getline(cin >> ws, name_of_depositor);
		cout << "Input account number: ";
		cin >> acc_number;
		balance_amount = 0;
		deposit_amount();
		withdraw_amount();
		display_rate_of_interest();
	}
	
	BankAccount(string name, int acc): name_of_depositor(name), acc_number(acc)
	{
		balance_amount = 0;
	}
	
	void deposit_amount()
	{
		cout << "Input the amount to deposit: ";
		cin >> amount;
		balance_amount += amount;
	}
	
	void withdraw_amount()
	{
		cout << "Your current balance is: " << balance_amount;
		cout << "Input the amount to withdraw: ";
		cin >> withdraw;
		balance_amount-=withdraw;
	}
	
	void display_rate_of_interest()
	{
		cout << "Rate of interest: " << rate_of_interest << endl;
	}
	
};
float BankAccount::rate_of_interest = 1.5;

int main()
{
	BankAccount acc1;
	string name;
	int acc;
	cout << "Input your name: ";
	getline(cin >> ws, name);
	cout << "Input your account number: ";
	cin >> acc;
}
