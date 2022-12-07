#include <iostream>
using namespace std;

class Person
{
protected:
	string name;
	int age, bonusPay, salary;
public:
	virtual void getdata() = 0;
	virtual void displaydata() = 0;
	virtual void bonus() = 0;

};

class Admin:public Person
{
public:
	void getdata()
	{
		cout << "Input name: ";
		cin >> name;
		cout << "Input age: ";
		cin >> age;
		cout << "Input Salary: ";
		cin >> salary;
	}

	void displaydata()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Salary: " << salary << endl;
		cout << "Bonus Pay: " << bonusPay << endl;
	}

	void bonus()
	{
		cout << "Input Bonus: ";
		cin >> bonusPay;
		salary += bonusPay;
	}
};

class Account:public Person
{
protected:
	string account;
	int limit;
public:
	void getdata()
	{
		cout << "Account Type: ";
		cin >> account;
		cout << "Account limit: ";
		cin >> limit;
	}

	void displaydata()
	{
		cout << "Account Type: " << account << endl;
		cout << "Account limit: " << limit << endl;
	}

	void bonus()
	{
		
	}
};

class Master: public Admin, public Account
{
public:
	void getdata()
	{
		cout << "Account Type: ";
		cin >> account;
		cout << "Account limit: ";
		cin >> limit;
	}

	void displaydata()
	{
		cout << "Account Type: " << account << endl;
		cout << "Account limit: " << limit << endl;
	}

	void bonus()
	{

	}
};

int main()
{
	Admin a1;
	a1.getdata();
	a1.bonus();
	a1.displaydata();
	Account acc1;
	acc1.getdata();
	acc1.displaydata();
	Master master1;
	master1.getdata();
	master1.displaydata();
}