// Go to main function to understand how the code works.
#include <iostream>
#include <string>

using namespace std;

class Employees
{
	char emp_office_code[4];
	float emp_salary;
	string fname, lname, address;
public:
	// The employee will input the name of the employee and assign them with a code.
	Employees()
	{
		cout << "\t\t\t Employee recruitment section " << endl;
		cout << "Welcome to Stein Gate Limited" << endl;
		cout << "First Name: ";
		cin >> fname;
		cout << "Last Name: ";
		cin >> lname;
		cout << "Address: ";
		getline(cin >> ws, address);
		cout << "Input the office code: ";
		cin >> emp_office_code;
		employee_office:
			if (emp_office_code[0] == 'm')
			{
				goto employee_office;
			}

		cout << "Employee Salary: ";
			employee_sal_reset:
				cin >> emp_salary;
				if (emp_salary > 100000)
				{
					goto employee_sal_reset;
				}
	}

	void disp_employee_info()
	{
		cout << "\t\t\t\tStein Gate Limited Employee Information" << endl;
		cout << "Employee First Name: " << fname << endl;
		cout << "Employee Last Name: " << lname << endl;
		cout << "Office Code: " << emp_office_code << endl;
		cout << "Employee Salary: " << emp_salary << endl;
	}


};

class Manager 
{
	// After every office has a manager, the manager manages the company financially and also is responsible
	// in hiring new employees and training them.
	string manager_fname, manager_lname;
	float manager_salary;
	char manager_office_code[4];
	Employees *e1;
	Employees *e2;
public:
	Manager()
	{
		cout << "Welcome to Stein Gates Limited!";
		cout << endl << "You have been selected as a manager for our company: " << endl;
		cout << "First name: ";
		cin >> manager_fname;
		cout << "Last Name: ";
		cin >> manager_lname;

	}

	void settingSalary(float y)
	{
		manager_salary = y;
	}

	void settingOfficeCode()
	{
		manager_code:
			cout << "Assign the manager with an office code(Must start with 'm'): ";
			cin >> manager_office_code;
			if (manager_office_code[0] != 'm')
			{

				goto manager_code;
			}
	}
	// This function calls employee constructor.

	void set_emp_info_office1()
	{
		e1 = new Employees();
		e2 = new Employees();
	}

	void set_emp_info_office2()
	{
		e1 = new Employees();
		e2 = new Employees();
	}

	void disp_emp_info()
	{
		e1->disp_employee_info();
		e2->disp_employee_info();
	}

	/*Manager()
	{

	}*/


	
};

class Office
{
	/// <summary>
	/// Now, every office needs employees and every office is managed by a manager.
	/// </summary>
	Manager *m1;
	Manager *m2;
	int x;
public:
	// The office will assign salary to the manager.
	Office()
	{
		m1 = new Manager();
	b:
		cout << "How much salary would you like to assign to the manager: ";
		cin >> x;
		if (x > 100000)
		{
			goto b;
		}
		else
		{

			m1->settingSalary(x);

		}
		m1->settingOfficeCode();
	}

	Office(int bb)
	{
		m2 = new Manager();
		d:
		cout << "How much salary would you like to assign to the manager: ";
		cin >> x;
		if (x > 100000)
		{
			goto d;
		}
		else
		{

			m2->settingSalary(x);

		}
		m2->settingOfficeCode();
	}

	//The office will be the one assigning the manager an office code.
	void call_emp_info()
	{
		m1->set_emp_info_office1();

	}
	
	void disp_emp_information()
	{
		m1->disp_emp_info();
	}


};

class Company
{
	// The company created 2 offices to function and manage their business. Their shared pool of amount is 50 million.
	float amount;
	Office *o1;
	Office *o2;
public:
	// The company pulls all the strings so every action the office performs is called from the company board members.
	Company()
	{
		amount = 50000000;
	}
	// Calls the Office Constructor
	void set_office()
	{
		o1 = new Office(); // Office one is creted.
		o2 = new Office(2); // Office 2 is created.
		o1->call_emp_info(); // Office 1's manager will initialize their employees with attributes.
		//o2->call_emp_info();
	}

	void call_class_employee()
	{
		o1->disp_emp_information();
	}

};

int main()
{
	// Stein Gate Limited is established (goto class Company)
	Company c1;
	int ch;
	c1.set_office(); // company establishes an office.
	cout << "Press 1 or 0 to display Employee information or close the program.\n"; 
	cin >> ch;
	if (ch == 1)
	{
		c1.call_class_employee();
	}

}