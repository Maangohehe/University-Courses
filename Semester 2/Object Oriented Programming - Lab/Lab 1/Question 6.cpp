#include <iostream>
#include <string>
using namespace std;
struct student{
	int roll[10];
	int age[10];
	string name[10];
	string address[10];
};

int main()
{
	student student_data;
	int choice=0;
	cout << "Input the roll numbers of the students: " << endl;
	for(int i=0; i<10; i++)
	{
		cin >> student_data.roll[i];
	}
	cout << "Input the names of the students: " << endl;
	for(int i=0; i<10; i++)
	{
		cin >> student_data.name[i];
	}
	c:
	cout << "Input the age of the students (between 11 and 14): ";
	for(int i=0; i<10; i++)
	{
		cin >> student_data.age[i];
		if(student_data.age[i] < 11 || student_data.age[i] > 14)
		{
			cout << "Student age should be between 11 and 14." << endl;
			goto c;
		}
	}
	cout << "Input the address of the students: ";
	for(int i=0; i<10; i++)
	{
		cin >> student_data.address[i];
	}
	x:
	cout << "Input number 1-4: " <<endl << "1. Name of student of 14 yrs old.\n2. Name of students of even roll number.\n3. Details of all the students."<<endl;
	cout << "Input: ";
	cin >> choice;
	if(choice == 1)
	{
		for(int i=0; i<10; i++)
		{
			if(student_data.age[i]==14)
			{
			cout << "Name: " << student_data.name[i] << endl;
				
			}
		}
		goto x;
	}
	if(choice == 2)
	{
		for(int i=0; i<10; i++)
		{
			if(student_data.roll[i]%2==0)
			{
				cout << "Names: " << student_data.name[i] << endl;
			}
		}
			goto x;
	}
	if(choice == 3)
	{
		for(int i=0; i<10; i++)
		{
			cout << "Name: " << student_data.name[i] << endl;
			cout << "Age: " << student_data.age[i] << endl;
			cout << "Address: " << student_data.address[i] << endl;
		}
		goto x;
	}
	
}

