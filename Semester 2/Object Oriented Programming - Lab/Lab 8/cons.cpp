#include <iostream>
using namespace std;

class A{
	protected:
	int years;
	string name;
	public:
		A(int years, string name)
		{
		
		}
};

class B:protected A{
	protected:
		int x, y, z;
		public:
		B(int x, int y, int z, int years, string name):A(years, name)
		{
			/*Here, only the first 3 parameters are used by the derived class, the last
			two is sent to the base class*/
		}
};

int main()
{
	B b1(5,6,7,18,"Hussain"); 
}
