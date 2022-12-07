#include <iostream>
#include <string>

using namespace std;

class BankAccount{
	string name, type_of_acc;
	int acc_number, balance;
	public:
		void setdata();
//		void depositamount();
//		void withdraw();
//		void displaydata();
};

void BankAccount::setdata()
{
	cout << "Hello";
}

int main()
{
	BankAccount B1;
	B1.setdata();
}
