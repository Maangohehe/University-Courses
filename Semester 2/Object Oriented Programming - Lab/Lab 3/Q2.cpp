#include <iostream>
#include <string>
using namespace std;

class employee{
	char* firstName= new char[10];
	string lastName;
	int salary, tmp; // Here index 0 is initialized for the 10% raise in salary
	//setter
	/*
	Initialize the 3 data members here
	*/
	public:
	void setinfo1()
	{
		cout << "Input your first name for employee: ";
		cin >> firstName;
		cout <<"Last Name of employee: ";
		cin >> lastName;
		cout << "Salary of employee: ";
		cin >> salary;

	}
	void setinfo2()
	{
		cout << "Input your first name for employee: ";
		cin >> firstName;
		cout <<"Last Name of employee: ";
		cin >> lastName;
		cout << "Salary of employee: ";
		cin >> salary;

	}
	/* getter */
	void dispinfo1()
	{
		
		cout << "Salary for object 1: "<<salary<<endl;
		cout << "After 10% raise" << endl;
		tmp=salary*0.1;
		salary+=tmp;
		cout << salary;
	}
	
	void dispinfo2()
	{
		
		cout << "Salary for object 1: "<<salary<<endl;
		cout << "After 10% raise" << endl;
		tmp=salary*0.1;
		salary+=tmp;
		cout << salary;
	}

		
};

int main()
{
	cout <<"The class employee consist of 3 private data members."<<endl;
	cout << "Those 3 data members are 1) char*\n2) string\n3) int." << endl;
	cout << "The purpose of this class is to provide information of the employee's abilities."<<endl;
	employee emp1, emp2;
	emp1.setinfo1();
	emp1.dispinfo1();
	emp2.setinfo2();
	emp2.dispinfo2();
	
}
