#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double distance(double x1, double x2, double y1, double y2);
double mid_point1(double x1, double x2);
double mid_point2(double y1, double y2);
int main()
{
	double d=0, x1=0, y1=0, x2=0, y2=0, mx=0, my=0;
	d=distance(x1,x2,y1,y2);
	cout << "The distance between the two points is: " <<fixed<<setprecision(2)<<d << "m" << endl;
	mx=mid_point1(x1, x2);
	my=mid_point2(y1, y2);
	cout << "The midpoint of this line is: (x, y)= (" << fixed << setprecision(2) << mx << ", " << fixed << setprecision(2) << my <<")" << endl;
	if(mx>0 && my>0)
	{
		cout << "Mid-Point: True" << endl;
	}
	else{
		cout << "Mid-Point: False" << endl;
	}
	
}

double distance(double x1, double x2, double y1, double y2)
{
	double d=0;
	cout << "Input the co-ordinate x1: ";
	cin >> x1;
	cout << "Input the co-ordinate x2: ";
	cin >> x2;
	cout << "Input the co-ordinate y1: ";
	cin >> y1;
	cout << "Input the co-ordinate y2: ";
	cin >> y2;
	d=pow((x2-x1), 2)+pow((y2-y1), 2);
	d=sqrt(d);
	return d;
}

double mid_point1(double x1, double x2)
{
	double mx=0;
	cout << "Input the co-ordinate x1: ";
	cin >> x1;
	cout << "Input the co-ordinate x2: ";
	cin >> x2;
	mx=(x1+x2)/2;
	return mx;
}

double mid_point2(double y1, double y2)
{
	double my=0;
	cout << "Input the co-ordinate y1: ";
	cin >> y1;
	cout << "Input the co-ordinate y2: ";
	cin >> y2;
	my=(y1+y2)/2;
	return my;
}
