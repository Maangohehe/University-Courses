#include <iostream>
#include <string>

using namespace std;

class Students{
	string name, roll_number, section;
	int semester;
	public:
		Students(string n, string roll, string sect, int sem)
		{
			// parameterized function
			name = n;
			section = sect;
			semester = sem;
			roll_number = roll;
		}
		
		void disp_data()
		{
			cout << "Name: " << name << endl;
			cout << "Roll Number: " << roll_number << endl;
			cout << "Semester: " << semester << endl;
			cout << "section: " << section << endl;
		}
};

int main()
{
	Students s1("Hussain", "21K-3584", "BCY-2B", 2);
	s1.disp_data();
}
