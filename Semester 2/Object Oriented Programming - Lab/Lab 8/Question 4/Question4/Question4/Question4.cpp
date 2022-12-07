#include <iostream>
using namespace std;

class Vehicle {
protected:
	string typeOfCar, model, color, make;
	int year;
	float milesDriven;
public:
	Vehicle(string typeOfCar, string model, string color, string make, int year, float milesDriven)
	{
		this->typeOfCar = typeOfCar;
		this->model = model;
		this->color = color;
		this->make = make;
		this->year = year;
		this->milesDriven = milesDriven;
	}
};

class GasVehicle:virtual protected Vehicle {
protected:
	int fuelSize;
public:
	GasVehicle(int fuelSize, string typeOfCar, string model, string color, string make, int year, float milesDriven):Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{
		this->fuelSize = fuelSize;
	}
};

class ElectricVehicle:virtual protected Vehicle {
protected:
	int energyStorage;
public:
	ElectricVehicle(int energyStorage, string typeOfCar, string model, string color, string make, int year, float milesDriven):Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{
		this->energyStorage = energyStorage;
	}
};

class HighPerformance:virtual protected GasVehicle {
protected:
	int horsePower;
	float topSpeed;
public:
	HighPerformance(int horsePower, float topSpeed, int fuelSize, string typeOfCar, string model, string color, string make, int year, float milesDriven):GasVehicle(fuelSize, typeOfCar, model, color, make, year, milesDriven), Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{
		this->horsePower = horsePower;
		this->topSpeed = topSpeed;
	}
};

class HeavyVehicle:virtual protected GasVehicle, virtual protected ElectricVehicle {
protected:
	float max_weight, length;
	int noOfWheels;
public:
	HeavyVehicle(float max_weight, float length, int noOfWheels, int fuelSize, int energyStorage):GasVehicle(fuelSize, typeOfCar, model, color, make, year, milesDriven), ElectricVehicle(energyStorage, typeOfCar, model, color, make, year, milesDriven), Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{
		this->max_weight = max_weight;
		this->length = length;
		this->noOfWheels = noOfWheels;
	}
};

class SportsCar:protected HighPerformance {
	string gearType, drive;
public:
	SportsCar(int horsePower, float topSpeed, int fuelSize, string typeOfCar, string model, string color, string make, int year, float milesDriven) :HighPerformance(horsePower, topSpeed, fuelSize, typeOfCar, model, color, make, year, milesDriven), GasVehicle(fuelSize, typeOfCar, model, color, make, year, milesDriven), Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{

	}
	void gearbox(string gearType)
	{
		this->gearType = gearType;
	}
	void driveSystem(string drive)
	{
		this->drive = drive;
	}
};

class ConstructionTruck:protected HeavyVehicle {
	string cargo1;
public:
	ConstructionTruck(float max_weight, float length, int noOfWheels, int fuelSize, int energyStorage, string typeOfCar, string model, string color, string make, int year, float milesDriven):HeavyVehicle(max_weight, length, noOfWheels, fuelSize, energyStorage), GasVehicle(fuelSize, typeOfCar, model, color, make, year, milesDriven), Vehicle(typeOfCar, model, color, make, year, milesDriven), ElectricVehicle(energyStorage, typeOfCar, model, color, make, year, milesDriven)
	{

	}
	void cargo(string cargo1)
	{
		this->cargo1 = cargo1;

	}
};

class Bus:protected HeavyVehicle {
	int numberOfSeats;
public:
	Bus(int numberOfSeats, float max_weight, float length, int noOfWheels, int fuelSize, int energyStorage, string typeOfCar, string model, string color, string make, int year, float milesDriven):HeavyVehicle(max_weight, length, noOfWheels, fuelSize, energyStorage), GasVehicle(fuelSize, typeOfCar, model, color, make, year, milesDriven), ElectricVehicle(energyStorage, typeOfCar, model, color, make, year, milesDriven), Vehicle(typeOfCar, model, color, make, year, milesDriven)
	{
		this->numberOfSeats = numberOfSeats;
	}
	void displayBus()
	{
		cout << "Type of Vehicle: " << typeOfCar << endl;
		cout << "Number of Seats: " << numberOfSeats << endl;
		cout << "Max Weight: " << max_weight << endl;
		cout << "Length: " << length << endl;
		cout << "Number of Wheels: " << endl;
		cout << "Fuel Size: " << fuelSize << endl;
		cout << "Energy Storage: " << energyStorage << endl;
		cout << "Model: " << model << endl;
		cout << "Make: " << make << endl;
		cout << "Color: " << color << endl;
		cout << "Year: " << year << endl;
		cout << "Miles Driven: " << milesDriven << endl;
	}
};

int main()
{
	Bus bus1(6, 5500.60f, 45.00f, 8, 100, 0, "Bus", "Buzz", "Blue", "Volkswagen", 2021, 0);
	bus1.displayBus();
	ConstructionTruck truck1(6505.70f, 46.5f, 12, 150, 0, "Cargo Truck", "JW Forland", "White", "Forland", 2022, 0);
	truck1.cargo("Cement");
	SportsCar Audi(700, 225.5, 50, "Drift", "Supra MK4", "Grey", "Toyota", 1993, 0);
	Audi.driveSystem("Rear Wheel");
	Audi.gearbox("Manual");
}