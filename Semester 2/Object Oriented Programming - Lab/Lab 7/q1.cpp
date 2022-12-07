#include <iostream>
using namespace std;
class Fruit{
public:
	static int count; static int count_mango; static int count_apple;

	void set()
	{
		count = 0; count_mango = 0; count_apple = 0;
	}
	
	void display()
	{
		cout << "The total fruits in basket are: " << count << endl;
		cout << "The total mangoes in basket are: " << count_mango << endl;
		cout << "The total apples in basket are: " << count_apple << endl;
	}
};

class Apples: public Fruit{
	public:

		void cal_app()
		{
			cout << "Input the number of apples: ";
			cin >> count_apple;
			count+=count_apple;
		}
		
		
};

class Mangoes: public Fruit{
	public:
		void cal_mango()
		{
			cout << "Input the number of mangoes: ";
			cin >> count_mango;
			count+=count_mango;
		}

};

int Fruit::count=0;
int Fruit::count_apple=0;
int Fruit::count_mango=0;

int main(){
	Fruit f;
	f.set();
	Mangoes m;
	m.cal_mango();
	Apples a;
	a.cal_app();
	f.display();
}

