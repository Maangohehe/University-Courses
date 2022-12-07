#include <iostream>
using namespace std;

class triangle{
	int a, b, c, per=0;
	double area=0.0;
	public:
		//setter
		void set_parameters()
		{
			a=3, b=4, c=5;
		}
		
		//getter
		void PRINTAREA()
		{
			per=a+b+c;
			cout << "The perimeter of the triangle is: " << per << endl;
			area= (a * b)/2.0;
			cout << "The area of the triangle is: " << area << endl;
		}
};

int main()
{
	triangle tri;
	tri.set_parameters();
	tri.PRINTAREA();
	
}
