#include <iostream>
using namespace std;
double calc(double income, double service, double time_in_mins);
int main()
{
	double income=0, service=0.40, charges=0;
	double time_in_mins=0;
	cout << "Input your income: ";
	cin >> income;
	cout << "Input the consulting time in minutes: ";
	cin >> time_in_mins;
	charges=calc(income, service, time_in_mins);
	cout << "The total charges are $" << charges;
}

double calc(double income, double service, double time_in_mins)
{
	double charges=0;
	if(income<=25000 && time_in_mins<=30)
	{
		cout << "There are no service charges for you." << endl;
	}
	else if(income<=25000 && time_in_mins>30)
	{
		charges=income*service*(time_in_mins/60);
	}
	else if(income>25000 && time_in_mins<=20)
	{
		cout <<"There are no service charges for you." << endl;
	}
	else if(income >25000 && time_in_mins>20)
	{
		charges=income*0.70*(time_in_mins/60);
	}
	return charges;
}
