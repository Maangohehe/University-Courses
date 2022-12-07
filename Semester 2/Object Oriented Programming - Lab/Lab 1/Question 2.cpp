#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float salary, net_salary, id, hrs;
	
	cout << "Input the ID of your emplpoyee: "; 
	cin >> id;
	cout << "Input the salary per hour: ";
	cin >> salary;
	cout << "Input the hours worked by employee: ";
	cin >> hrs;
	net_salary=hrs*salary;
	cout << "The ID of the employee is " << id <<"\nThe total salary is " << fixed << setprecision(2) << net_salary;
	
}
