#include <iostream>

using namespace std;

class Employee
{
	int empNo;
	char name[20], des[20];
	public:
		void getEmpdetails()
		{
			cout << "Employee number: ";
			cin >> empNo;
			cout << "Employee Name: ";
			cin >> name;
			cout << "Employee description: ";
			cin >> ws >> des;
		}	
		
		void employee_display()
		{
			cout << "Employee Number: " << empNo << endl;
			cout << "Employee Name: " << name << endl;
			cout << "Employee Description: " << des << endl;
		}
};

class Salary:private Employee
{
	float basic_pay, human_resource_allowance, dearness_allowance, prof_fund, net_pay;
	public:
		void getPayDetails()
		{
			cout << "Basic Pay: ";
			cin >> basic_pay;
			cout << "HR resource allowance: ";
			cin >> human_resource_allowance;
			cout << "Dearness Allowance: ";
			cin >> dearness_allowance;
			cout << "Profitability Fund: ";
			cin >> prof_fund;
			Salary::getEmpdetails();
		}
		
		void Calculate_net_Pay()
		{
			net_pay = basic_pay + human_resource_allowance + dearness_allowance - prof_fund;
		}
		
		void Salary_display()
		{
			cout << "Basic Pay: " << basic_pay << endl;
			cout << "HR resource allowance: " << human_resource_allowance << endl;
			cout << "Dearness Allowance: " << dearness_allowance << endl;
			cout << "Profitability Fund: " << prof_fund << endl;
			cout << "Net Pay: " << net_pay << endl;
			Salary::employee_display();
		}
};

class BankCredit:private Salary
{
	int accno;
	char bankname[20], ifsc[20];
	public:
		void getBankdetails()
		{
			cout << "Input account number: ";
			cin >> accno;
			cout << "Bank Name: ";
			cin >> ws >> bankname;
			cout << "IFSC: ";
			cin >> ifsc;
			BankCredit::getPayDetails();
			BankCredit::Calculate_net_Pay();
		}
		
		void Display()
		{
			cout << "Account Number: " << accno << endl;
			cout << "Bank Name: " << bankname << endl;
			cout << "IFSC: " << ifsc << endl;
			BankCredit::Salary_display();
		}		
};

int main()
{
	BankCredit bc;
	bc.getBankdetails();
	bc.Display();
}
