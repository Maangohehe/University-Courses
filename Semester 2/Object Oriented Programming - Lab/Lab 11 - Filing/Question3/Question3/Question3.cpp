#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person {
	char name[25];
	int age;
public:
	Person(char arr[], int age)
	{
		this->age = age;
		strcpy_s(name, arr);
	}
	void addData()
	{
		fstream file;
		file.open("Person.txt", ios::app | ios::binary);
		char name[25]; int age;
		cout << "Input name: ";
		cin >> name;
		cout << "Input age: ";
		cin >> age;
		Person per(name, age);
		file.write((char*)&per, sizeof(per));
		file.close();
	}
	void readData()
	{
		fstream file;
		file.open("Person.txt", ios::in | ios::binary);
		Person per
	}
};

int main()
{
	char name[] = "";
	Person person1(name, 5);
	person1.addData();
}