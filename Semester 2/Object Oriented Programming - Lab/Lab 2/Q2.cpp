#include <iostream>
using namespace std;
int trainee(double marks, double exp);
int assistant(double marks, double exp);
int associate(double marks, double exp);
int main()
{
	double marks=0, exp=0;
	cout << "Input your marks: ";
	cin >> marks;
	cout << "Input your experience in years: ";
	cin >> exp;
	trainee(marks, exp);
	assistant(marks, exp);
	associate(marks, exp);
}

int trainee(double marks, double exp)
{
	if(marks>=50 && marks<60)
	{
		if(exp<=1 || exp >=1)
		{
			cout << "You have been selected as a Trainee Engineer." << endl;
		}
	}
	return 0;
}

int assistant(double marks, double exp)
{
	if(marks>=60 && marks<70)
	{
		if(exp>=1 && exp <=2)
		{
			cout << "You have been selected as an Assistant Director." << endl;
		}
	}
	return 0;
}

int associate(double marks, double exp)
{
	if(marks>=70)
	{
		if(exp>=2)
		{
			cout << "You have been selected as an Associate Developer." << endl;
		}
	}
	return 0;
}
