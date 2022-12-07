#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	float height=0.00, wght=0.00;
	cout << "Input the height in meters: ";
	cin >> height;
	cout << "Input the weight in KG: ";
	cin >> wght;
	float bmi=0.0;
	bmi=wght/(height*height);
	cout << "BMI: " << fixed << setprecision(2) << bmi << endl;
	if(bmi < 18.5)
	{
		cout << "You are underweight";
	}
	else if(bmi >=18.5 || bmi <=24.9)
	{
		cout << "Your BMI is normal";
	}
	else if(bmi >= 25 || bmi <= 29.9)
	{
		cout << "You are overweight";
	}
	else if(bmi > 30)
	{
		cout << "You are obese";
	}
}
