#include <iostream>

using namespace std;

class a{
	public:
	void show()
		{
			cout << "Im class virt1";
		}
};

class b:public a{
	public:
		void show()
		{
			cout << "Im class b";
		}
};



class c:public a
{

	public:
	 void show()
	{
		cout << "Im class c";
	}
};

class d:public b,public c
{
	public:
		void show()
		{
			cout << "D";
		}
};

int main()
{
	a *a1;
}
