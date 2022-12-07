#include <iostream>
#include <string>
using namespace std;
int main()
{
	char name[20];
	float marks[4]={0}, avg=0, sum=0;
	
	cin >> name;
	for(int i=0; i<4; i++)
	{
		cin >> marks[i];
		sum+=marks[i];
	}
	avg=sum/5;
	cout << "Name: " << name <<endl;
	cout << "Test Scores: ";
	for(int i=0; i<4; i++)
	{
		cout << " " << marks[i];
	}
	cout << "\nAverage test score: " << avg;
	
}
