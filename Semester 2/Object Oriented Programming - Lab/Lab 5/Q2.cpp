#include <iostream>

using namespace std;

class Employee{
	char* Employee_Name;
	const int Employee_id;
	public:
		Employee(int id): Employee_id(id)
		{
			Employee_Name = new char[10];
			cout << "Input the name of the Employee: ";
			cin >> Employee_Name;
		}
		void DisplayResult()
		{
			cout << "Name: " << Employee_Name << endl;
			cout << "Employee ID: " << Employee_id << endl;
		}
};

int main()
{
	int id;
	cout << "Input the Employee ID: ";
	cin >> id;
	Employee Employee1(id);
	cout << "Input the Employee ID: ";
	cin >> id;
	Employee Employee2(id);
	cout << "Input the Employee ID: ";
	cin >> id;
	Employee Employee3(id);
	Employee1.DisplayResult();
	Employee2.DisplayResult();
	Employee3.DisplayResult();
}
