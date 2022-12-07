// The following program assumes u have to buy 10 items from the store.
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class ShoppingList{
	int code_no[100], price[100], qty[100], total, i, j, count;
	public:
		ShoppingList()
		{
			count = 3;
			total = 0;
			code_no[100] = {0};
			qty[100] = {0};
			price[100] = {0};
		}
		
		void get_items()
		{
			for(i = 0; i < count; i++)
			{
				cout << "Code: ";
				cin >> code_no[i];
				cout << "Price: ";
				cin >> price[i];
				cout << "Quantity: ";
				cin >> qty[i];
			}
		}
		
		void get_total()
		{
			for(i=0; i< 4; i++)
			{
				total += price[i] * qty[i];
			}
			cout << total << " Rs" << endl;
		}
		
		void add_new()
		{
			count+=1;
			cout << "Code: ";
			cin >> code_no[4];
			cout << "Price: ";
			cin >> price[4];
			cout << "Quantity: ";
			cin >> qty[4];
		}
};

int main()
{
	ShoppingList list1;
	int ch;
	list1.get_items();
	list1.add_new();
	list1.get_total();
	
}

