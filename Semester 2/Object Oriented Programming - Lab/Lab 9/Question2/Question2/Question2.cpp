#include <iostream>
using namespace std;
class Quad
{
protected:
	float side1, side2, area;
public:
	virtual float Area() = 0;
	virtual void setter() = 0;
};

class Rectangle : public Quad
{
public:
	float Area()
	{
		area = side1 * side2;
		return area;
	}
	void setter()
	{
		cout << "Input Length: ";
		cin >> side1;
		cout << "Input breadth: ";
		cin >> side2;
	}
};

int main()
{
	Rectangle r1;
	r1.setter();
	cout << "The area of triangle is: " << r1.Area();
}