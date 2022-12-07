#include <iostream>
using namespace std;
class Sales{
	int saleID, quantity;
	string itemName;
	public:
		
		Sales()
		{
			saleID = 5674;
			quantity = 4;
			itemName = "Peanut Butter";	
		}	
		//Constructor Overload
		Sales(int x)
		{
			cout << "Sale ID: ";
			cin >> saleID;
			cout << "Item Name: ";
			cin >> itemName;
			cout << "Quantity: ";
			cin >> quantity;
			
			cout << "Sale ID: " << saleID << endl;
			cout << "Item Name: " << itemName << endl;
			cout << "Quantity: " << quantity << endl;
		}
		
		Sales(int s, string name, int q)
		{
			saleID = s;
			itemName = name;
			quantity = q;
			cout << "Sale ID: " << saleID << endl;
			cout << "Item Name: " << itemName << endl;
			cout << "Quantity: " << quantity << endl;
		}
		
		Sales(const Sales &s3)
		{
			saleID = s3.saleID;
			itemName = s3.itemName;
			quantity = s3.quantity;
			cout << "Sale ID: " << saleID << endl;
			cout << "Item Name: " << itemName << endl;
			cout << "Quantity: " << quantity << endl;
		}
		
		void disp_sales()
		{
			cout << "Sale ID: " << saleID << endl;
			cout << "Item Name: " << itemName << endl;
			cout << "Quantity: " << quantity << endl;
		}
};

int main()
{
	Sales s1;
	Sales s2(5);
	Sales s3(5678, "Butter", 3);
	Sales s4=s3;
	s4.disp_sales();
	
	
}
