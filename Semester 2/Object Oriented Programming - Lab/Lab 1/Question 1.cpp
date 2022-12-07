#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float hrs=0.00; float spd[4]={0.00};
	x:
	cout << "How long did the car travel? (Input a positive integer only. The number should be between 1-5): ";
	cin >> hrs;
	if(hrs< 1 || hrs > 5)
	{
		cout << "The hours are invalid" << endl;
		goto x;
	}
	
	for(int i=1; i<=hrs; i++)
	{
		cout<< "Input the speed in miles: ";
		cin>> spd[i];
	}
	int sum=0;
	for (int i=1; i<=hrs; i++)
	{
		sum+=spd[i];
	}
	float avg=0;
	avg=sum/hrs;
	cout << "The average speed of the car is: " << setprecision(5) << avg;
}
