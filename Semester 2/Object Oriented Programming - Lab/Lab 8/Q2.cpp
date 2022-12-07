#include <iostream>
using namespace std;

class Minimum{
	public:
		int min(int x, int y)
		{
			if(x < y)
			{
				return x;
			}
			else if(y < x)
			{
				return y;
			}
			else{
				cout << "Both values are equal." << endl;
			}
		}
		
		int min(int x, int y, int z)
		{
			if(x < y )
			{
				if(x < z)
				{
					return x;
				}
			}
			else if(y < x)
			{
				if(y < z)
				{
					return y;
				}
			}
			else if(z < x)
			{
				if(z < y)
				{
					return z;
				}
			}
		}
};

int main()
{
	Minimum m1;
	cout << "The smallest of 3 parameters is: " << m1.min(10, 6, 20) << endl;
	cout << "The smallest of 2 parameters is: " << m1.min(8,5) << endl;
}
