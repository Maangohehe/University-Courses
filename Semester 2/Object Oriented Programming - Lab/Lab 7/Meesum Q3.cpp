#include <iostream>
#include <cstring>

using namespace std;


class Vehicle{
public:
	float mileage;
	float price;

	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}


	float getMileage(){
		return mileage;
	}
	float getPrice(){
		return price;
	}


     void display(){
		cout<<"Mileage: "<<mileage<<endl;
		cout<<"Price: "<<price<<endl;
	}
};



class Car:public Vehicle{
protected:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:


	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}
protected:

	float getOwnershipCost(){
		return ownershipCost;
	}
	int getWarranty(){
		return warranty;
	}
	int getSeatingCapacity(){
		return seatingCapacity;
	}
	string getFuelType(){
		return fuelType;
	}
	void display(){
		cout<<"Car"<<endl;
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<endl;
		cout<<"Warranty: "<<warranty<<endl;
		cout<<"Seating capacity: "<<seatingCapacity<<endl;
		cout<<"Fuel type: "<<fuelType<<endl;
	}
};

class Bike:public Vehicle{
protected:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}

protected:
	int getNumberCylinders(){
		return numberCylinders;
	}
	int getNumberGears(){
		return numberGears;
	}
	string getCoolingType(){
		return coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};
class Audi : protected Car{
	
	string modelType;
	public:

		Audi(string modeltype,float mileage,float ownershipCost){
		this->modelType=modelType;
		this->mileage=mileage;
		this->ownershipCost=ownershipCost;
		}
		string getmodelType(){
			return modelType;
		}
		void display(){
		cout<<"Car"<<endl;
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<endl;
		cout<<"Warranty: "<<warranty<<endl;
		cout<<"Seating capacity: "<<seatingCapacity<<endl;
		cout<<"Fuel type: "<<fuelType<<endl;
		cout<<"Model Type: "<<modelType<<endl;
	}
	
};

class Ford : protected Car{
	
	string modelType;
	public:
		Ford(string modelType,float mileage, float price) :Car( mileage, price, ownershipCost, warranty, seatingCapacity, fuelType){
		this->modelType=modelType;
		}
		string getmodelType(){
		return modelType;
		}
		
		void display(){
		cout<<"Car"<<endl;
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<endl;
		cout<<"Warranty: "<<warranty<<endl;
		cout<<"Seating capacity: "<<seatingCapacity<<endl;
		cout<<"Fuel type: "<<fuelType<<endl;
		cout<<"Model Type: "<<modelType<<endl;
	}
};


int main()
{
	Car car(10000,36000,29000,10,3,"diesel");
    Bike bike(56000,52000,6,6,"liquid");
    Audi audi("R8", 56, 30000);
    Ford ford(56500,26000,"MustangGT",7,5,"liquid");
	car.display();
	cout<<endl;
	bike.display();
	cout<<endl;
	audi.display();
	cout<<endl;
	ford.display();
    return 0;
