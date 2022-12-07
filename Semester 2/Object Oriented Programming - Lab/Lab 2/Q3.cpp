// The following program will calculate the volume of a cylinder.

#include <iostream>
#include <cmath>
using namespace std;
double volumCal(double h, double r);
double get_data(double h, double r);
int main()
{
	double volume=0, h=0, r=0;
	double pie=3.142;
	volume=get_data(h, r)*pie;
	cout << "The volume of the cylinder is: " << volume << endl;
}

double get_data(double h, double r)
{
	double volume=0;
	cout << "Input height:";
	cin >> h;
	cout << "Input the radius: ";
	cin >> r;
	volume=volumCal(h, r);
	return volume;
}

double volumCal(double h, double r)
{
	double volume=0;
	volume=pow(r, 2)*h;
	return volume;
}
