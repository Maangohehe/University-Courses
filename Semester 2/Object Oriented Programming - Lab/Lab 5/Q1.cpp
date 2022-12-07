#include <iostream>

using namespace std;

class Hotel{
	
	const float rentPerDay; 
	const int no_of_days;
	const string customer_name;
	float customer_rent, discount;
	public:
		Hotel(string temp_name, int days): rentPerDay(1000.85), no_of_days(days), customer_name(temp_name)
		{
			if(no_of_days < 7)
			{
				RentCalculator();
			}
			else if(no_of_days > 7)
			{
				RentWithBonus();
			}
		}
		void RentWithBonus()
		{
			customer_rent = no_of_days;
			customer_rent-=1;
			customer_rent = rentPerDay * customer_rent;

		}
		
		void RentCalculator()
		{
			customer_rent = rentPerDay * no_of_days;
		}
		
		void DisplayRent()
		{
			cout << "Rent issued: " << customer_rent;

		}
};

int main()
{
	string temp_name;
	int days;
	cout << "Input the name of the customer: ";
	getline(cin >> ws, temp_name);
	cout << "Input the days for living in hotel: ";
	cin >> days;
	Hotel h1(temp_name, days);
	h1.DisplayRent();

	
}
