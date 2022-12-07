#include <iostream>
#include <string>
using namespace std;

class student{
	string name;
	int roll_num;
	public:
		//setter
		void setvalue()
		{
			name="John";
			roll_num=2;
		}
		//getter
		int getrollnum()
		{
			return roll_num;
		}
		
		string getName()
		{
			return name;
		}
};

int main()
{
	student id1;
	
	id1.setvalue();
	cout << "Student Name: " << id1.getName() << endl;
	cout << "Student Roll Number: " << id1.getrollnum() << endl;
}
