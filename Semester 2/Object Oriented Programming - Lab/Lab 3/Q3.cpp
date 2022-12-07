#include <iostream>
#include <string>
using namespace std;
class student
{
	string student_name, roll_number; 
	int marks[4]={0};
	double percent=0;
	public:
		//setter
		void setinfo()
		{
			cout << "Input the name of the student: ";
			getline(cin, student_name);
			cout << "Input the roll number: ";
			getline(cin, roll_number);
			for(int i=0; i<4; i++)
			{
				cout << "Input the marks for subject " << i+1 << ":";
				cin >> marks[i];
			}
		}
		//getter
		double getpercentage(double percent)
		{
			int sum=0;
			for(int i=0; i<4; i++)
			{
				sum+=marks[i];
			}
			percent=sum/4;
			return percent;
		}
		
};

int main()
{
	double percent=0;
	student std1;
	std1.setinfo();
	cout << std1.getpercentage(percent) << "%" <<endl;
	
}
