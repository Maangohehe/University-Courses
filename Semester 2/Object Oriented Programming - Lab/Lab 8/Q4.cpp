#include <iostream>
using namespace std;

class Vehicle{
	protected:
	string typeOfCar, model, color, make;
	int year;
	float milesDriven;
};

class GasVehicle:virtual protected Vehicle{
	protected:
		int fuelSize;
};

class ElectricVehicle:virtual protected Vehicle{
	protected:
		int energyStorage;
};

class HighPerformance:virtual protected GasVehicle{
	protected:
		int horsePower;
		float topSpeed;
};

class HeavyVehicle:virtual protected GasVehicle, protected ElectricVehicle{
	
};

class SportsCar:protected HighPerformance{
	
};

class ConstructionTruck:protected HeavyVehicle{
	
};

class Bus:protected HeavyVehicle{
	
};

int main()
{
	Bus b1;
}
