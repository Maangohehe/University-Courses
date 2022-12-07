#include <iostream>
#include <cmath>
using namespace std;

class ShapeData{
	protected:
		float pi, radius, height, vol;
};

class Sphere:protected ShapeData{
	public:
		void cal_volume(float pi, float radius)
		{
			this->pi=pi;
			this->radius=radius;
			vol = (4*pi*pow(radius,3))/3;
		}
		void display()
		{
			cout << "Volume of sphere is: " << vol << endl;
		}
};

class Cylinder:protected ShapeData{
	public:
		void cal_volume(float pi, float radius, float height)
		{
			vol = pi*pow(radius,2)*height;
		}
		void display(int x)
		{
			cout << "The volume of cylinder is: " << vol << endl;
		}
};

int main()
{
//	ShapeData *sd1;
//	Sphere s1;
//	sd1 = &s1;
//	sd1->cal_volume(3.142, 5);
//	sd1->display();
	Sphere s1;
	s1.cal_volume(3.142, 5);
	s1.display();
	Cylinder c1;
	c1.cal_volume(3.142, 6, 7.3);
	c1.display(5);
}
