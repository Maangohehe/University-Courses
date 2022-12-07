#include <iostream>
using namespace std;

class Student
{
protected:
	string name;
	float marks, total, avg;
public:
	virtual void get_name()
	{
		cout << "Student Class\n";
		cout << "Name of Student: ";
		cin >> name;
	}
	virtual void get_marks()
	{
		cout << "Student Class\n";
		cout << "Input marks: ";
		cin >> marks;
	}

	virtual void display()
	{
		cout << "Student Class \n";
		cout << "Name: " << name << endl;
		cout << "Marks: " << marks << endl;
		cout << "Average: " << avg << endl;
	}

};

class Academic :public Student
{
public:
	void get_marks()
	{
		cout << "Academic class\n";
		cout << "Input marks: ";
		cin >> marks;
		avg = (marks / 100) * 100;
	}

	void get_name()
	{
		cout << "Academic class\n";
		cout << "Name: ";
		cin >> name;
	}
	/*
	void display()
	{
		cout << "Academics class \n";
		cout << "Name: " << name << endl;
		cout << "Marks: " << marks << endl;
		cout << "Average: " << avg << endl;
	}
	*/	
};

int main()
{
	Student *std1;
	Academic a1;
	std1 = &a1;
	std1->get_name();
	std1->get_marks();
	std1->display();

}