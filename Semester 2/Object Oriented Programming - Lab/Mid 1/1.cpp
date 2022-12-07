#include <iostream>
#include <string>

using namespace std;

class Products
{
	public:
		int barcd;
		string prod_name;
		float weight, unit_price, price_per_kilo;
		Products()
		{
			barcd = 101;
			prod_name = "egg";
		}
		Products(int bcd, string name)
		{
			barcd = bcd;
			prod_name = name;
		}
		
		void get_price()
		{
			
		} 
		
		void set_code()
		{
			cout << "Input the code for the product: ";
			cin >> barcd;
		}
		
		int get_code()
		{
			return barcd;
		}
		void scanner()
		{
			
		}
		
		void printer()
		{
			
		}	
};

class PrePackedFood:public Products
{
	
};

class FreshPackedFood:public Products
{
	
};




