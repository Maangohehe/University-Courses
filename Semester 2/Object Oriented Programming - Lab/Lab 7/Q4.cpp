#include <iostream>
#include <string>

using namespace std;

class Person
{
	int age;
	protected:
		string name;

};

class Employee
{
	int empid;
	protected:
	float salary;

};

class Manager:public Person, public Employee
{
	private:
	string type;
	public:
		void set_sal(float salary)
		{
			this->salary=salary;
		}
		void set_name(string name)
		{
			this->name=name;
		}
};

class ITManager:public Manager
{
	int noOfPersons;
	public:
		void set_no_person(int per)
		{
			noOfPersons=per;
		}
	void Display()
	{
		cout << "Number of IT Managers: " <<  noOfPersons << endl;
		cout << "Salary: " << salary << endl;
		cout << "Name: " << name << endl;
	}	
};

int main()
{
	ITManager it1;
	it1.set_no_person(4);
	it1.set_sal(20000.00);
	it1.set_name("Hussain");
	it1.Display();
}
