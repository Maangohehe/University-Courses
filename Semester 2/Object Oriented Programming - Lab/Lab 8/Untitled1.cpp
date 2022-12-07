#include <iostream>
using namespace std;
class Mango{
	public:
	int price;
	public:
		Mango()
		{
			price=0;
		}
		
	friend	Mango operator-- (Mango m);

		void show()
		{
			cout << "Price: " << price;
		}

};

Mango operator-- (Mango m)
{
	Mango temp;
	--price;
	temp.price=price;
	return temp;
}

int main()
{
	Mango m1;
	--m1;
	m1.show();

}
