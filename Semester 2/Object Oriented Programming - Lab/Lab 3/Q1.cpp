#include <string>
#include <iostream>
using namespace std;

class bank_account{
	string name;
	int account_number, dep, balance=0, with;
	public:
	void sys() // setter
	{
		cout << "Input your name: ";
		cin >> name;
		cout << "Input your account number: ";
		cin >> account_number;
		cout << "Input your balace: ";
		cin >> balance;
	 }
	 
	 void deposit() // setter
	 {
	 	cout << "Input the amount you want to deposit: ";
		cin >> dep;
		balance+=dep;
	   }  
	void withdraw() //setter
	{
		cout << "Input the amount you want to withdraw: ";
		cin >> with;
		balance-=with;
		cout << "You have successfully withdrawn $" << with <<" from your account." << endl;
	}
	string getname() // getter
	{
		return name;
	}
	
	int getbalance() // getter
	{
		return balance;
	}
};

int main()
{
	bank_account user;
	int ch;
	cout << "Welcome to bank management system\n1) Make new account.\n2) Deposit an amount.\n3) Withdraw an amount.\n4) Display account information." << endl;
	x:
	cin >> ch;
	if(ch==1)
	{
		user.sys();
	}
	else if(ch==2)
	{
		user.deposit();
	}
	else if(ch==3)
	{
		user.withdraw();
	}
	else if(ch==4)
	{
		cout << "Your name: " << user.getname() << endl;
		cout << "Your balance: " << user.getbalance() << endl;
	}
	goto x;
}

