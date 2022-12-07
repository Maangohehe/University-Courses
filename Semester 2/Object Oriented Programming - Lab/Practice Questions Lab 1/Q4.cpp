#include <iostream>
using namespace std;
class Area{
	float length, breadth, area=0;
	public:
		//setter
		void triangleProp()
		{
			cout << "Input the length of Triangle: ";
			cin >> length;
			cout << "Input the breadth: ";
			cin >> breadth;
		}
		
		//getter
		float returnArea()
		{
			area=(length * breadth)/2;
			return area;
		}
};

int main()
{
	Area tri;
	tri.triangleProp();
	cout << "The area of the triangle is: " << tri.returnArea() << endl;
}
