#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	public:
	float mileage, price;
	
};

class Car:public Vehicle
{
	protected:
	float own_cost, warr;
	int seat_cap; string fuel;
};

class Bike:public Vehicle
{
	protected:
	int no_cyl, gears; float fuel_size;
	string cool_type, wheel_type;
};

class Audi:protected Car
{
	string model;
	public:
	void set_Audi()
	{
		cout << "Input the model type of Audi: ";
		getline(cin >> ws, model);
		cout << "Input the ownership cost: ";
		cin >> own_cost;
		cout << "Input warranty in years: ";
		cin >> warr;
		cout << "Input Seating capacity: ";
		cin >> seat_cap;
		cout << "Fuel Type: ";
		getline(cin >> ws, fuel);
		cout << "Mileage: ";
		cin >> mileage;
		cout << "Price of car: ";
		cin >> price;
	}
};

class Ford:protected Car
{
	string model;
	public:
		void set_ford()
		{
			cout << "Input the model type of Ford: ";
			getline(cin >> ws, model);
			cout << "Input the ownership cost";
			cin >> own_cost;
			cout << "Input warranty in years: ";
			cin >> warr;
			cout << "Input Seating capacity";
			cin >> seat_cap;
			cout << "Fuel Type: ";
			getline(cin >> ws, fuel);
			cout << "Mileage: ";
			cin >> mileage;
			cout << "Price of car: ";
			cin >> price;
		}

};

class Bajaj:protected Bike
{
	string make;
	public:
		void set_bajaj()
		{
			cout << "Input the make type of Bajaj: ";
			getline(cin >> ws, make);
			cout << "Input the number of gears: ";
			cin >> gears;
			cout << "Input number of cylinders: ";
			cin >> no_cyl;
			cout << "Input the wheel type: ";
			cin >> wheel_type;
			cout << "Cooling type: ";
			getline(cin >> ws, cool_type);
			cout << "Mileage: ";
			cin >> mileage;
			cout << "Price of Bike: ";
			cin >> price;
		}	
};

class TVS:protected Bike
{
	string make;
	public:
		void set_tvs()
		{
			cout << "Input the make type of TVS: ";
			getline(cin >> ws, make);
			cout << "Input the number of gears: ";
			cin >> gears;
			cout << "Input number of cylinders: ";
			cin >> no_cyl;
			cout << "Input the wheel type: ";
			cin >> wheel_type;
			cout << "Cooling type: ";
			getline(cin >> ws, cool_type);
			cout << "Mileage: ";
			cin >> mileage;
			cout << "Price of Bike: ";
			cin >> price;
		}	
			
};

int main()
{
	Vehicle v1; Car c1; Bike b1; Audi a1; Ford f1; Bajaj baj1; TVS tvs1;
	a1.set_Audi();
	f1.set_ford();
	baj1.set_bajaj();
	tvs1.set_tvs();
	
	
}
