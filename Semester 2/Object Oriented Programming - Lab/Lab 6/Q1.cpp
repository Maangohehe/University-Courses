#include <iostream>

using namespace std;

class Items
{
	public:
		string name;
		float price, temp;
		int item_no;
		
		Items()
		{
			cout << "Set name, price, item_no: ";
			cin >> name >> price >> item_no;
		}	
		
};

class DiscountedItems:public Items
{
	int disc;	
	public:
		DiscountedItems()
		{
			disc = 15;
		}
		
		void give_discount()
		{
			temp = (price/100)*disc;
			price -=temp;
			cout << "You have been given a 15% discount." << endl;
			cout << "Name: " << name << endl << "Price: " << price << endl;
		}
};

int main()
{
	DiscountedItems discitem[2];
	for(int i = 0; i < 2; i++)
	{
		discitem[i].give_discount();
	}
}
