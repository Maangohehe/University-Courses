#include <iostream>
using namespace std;
class RectangleArea{
	int length, width, area;
	float lengthf, widthf, areaf;
	public:
		void get_data(int length, int width)
		{
			area = length * width;
		}
		void get_data(float lengthf, float widthf)
		{
			areaf = lengthf * widthf;
		}
		void display()
		{
			cout << "The area of rectangle is: " << area << endl;
		}
		void display(int x)
		{
			cout << "The area of rectangle is: " << areaf << endl;
		} 
		
};

int main()
{
	char ch;
	int x, y;
	float z, w;
	RectangleArea r1;
	cout << "Would you like integer values of realnumber?(i/r): ";
	cin >> ch;
	switch(ch)
	{
		case 'i':
			cout << "Input the lendth and width of rectangle(Integer): ";
			cin >> x >> y;
			r1.get_data(x, y);
			r1.display();
			break;
		case 'r':
			cout << "Input the length and width of rectanle (Real number): ";
			cin >> z >> w;
			r1.get_data(z , w);
			r1.display(5);
			break;
	}
	
}
