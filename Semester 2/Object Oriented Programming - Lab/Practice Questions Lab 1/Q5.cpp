#include <iostream>
using namespace std;
class Employee{
	int salary, numberOfHours;
	public:
		void getinfo()
		{
			cout << "Input your salary: ";
			cin >> salary;
			cout << "Input the hours worked: ";
			cin >> numberOfHours;
		}
		
		void AddSal()
		{
			if(salary < 500)
			{
				salary+=10;
			}
		}
		
		void AddWork()
		{
			if(numberOfHours > 6)
			{
				salary+=5;
			}
		}
		
		int printsalary()
		{
			return salary;
		}
};
int main()
{
	Employee e1;
	e1.getinfo();
	e1.AddSal();
	e1.AddWork();
	cout << "The salary of the current employee is: $" << e1.printsalary() << endl;
}
