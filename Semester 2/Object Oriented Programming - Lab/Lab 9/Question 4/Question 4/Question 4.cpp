#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
protected:
	int publication; float gpa;
	string name, roll;
	bool standing;
public:
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
	virtual void getName() = 0;
	virtual string putName() = 0;


};

class Student:protected Person
{
public:
	void getName()
	{
		cout << "Input your name: ";
		getline(cin >> ws, name);
	}

	string putName()
	{
		return name;
	}
	void getData()
	{
		cout << "Input the rollnumber: ";
		cin >> roll;
		cout << "Input the GPA: ";
		cin >> gpa;
	}

	bool isOutstanding()
	{
		if (gpa > 3.5)
		{
			return standing = true;
		}
		else
		{
			return standing = false;
		}
	}
};

class Professor :protected Person
{
public:
	void getName()
	{
		cout << "Person name: ";
		getline(cin >> ws, name);
	}
	
	string putName()
	{
		return name;
	}

	void getData()
	{
		cout << "Input number of publication of " << name << ": ";
		cin >> publication;
	}

	bool isOutstanding()
	{
		if (publication > 100)
			return standing = true;
		else
			return standing = false;
	}
};

int main()
{
	
	Student s1;
	Professor p1;
	s1.getName();
	s1.getData();
	cout << "The name of the student is: " << s1.putName() << endl;
	cout << "Is the student outstanding: " << s1.isOutstanding() << endl;
	p1.getName();
	p1.getData();
	cout << "The name of the person is: " << p1.putName() << endl;
	cout << "Is the publisher outstanding: " << s1.isOutstanding() << endl;
}
