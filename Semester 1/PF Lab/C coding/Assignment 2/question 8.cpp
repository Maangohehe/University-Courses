#include <stdio.h>

int main()

{
	float distance_travelled, fuel_consumption_per_kilometer, velocity_of_car, travel_time,
	total_consumption, expenses, price_of_petrol, distance_travelled_with_current_speed; 
	printf("How much distance will you travel = ");
	scanf("%f", &distance_travelled);
	printf("What is the fuel consumption of vehicle per kilometer = ");
	scanf("%f", &fuel_consumption_per_kilometer);
	printf("What is the price of petrol per litre = ");
	scanf("%f", &price_of_petrol);
	printf("How fast will the car be travelling = ");
	scanf("%f", &velocity_of_car);
	printf("How long will the car be travelling = ");
	scanf("%f", &travel_time);
	distance_travelled_with_current_speed= travel_time*velocity_of_car;
	total_consumption= distance_travelled_with_current_speed*fuel_consumption_per_kilometer;
	expenses= price_of_petrol*total_consumption;
	printf("The total fuel consumed is = %.2fLitre\n", total_consumption);
	printf("The expenses for the trip = %.2fRs\n", expenses);
	
	if(distance_travelled_with_current_speed>=distance_travelled)
	{
		printf("You will be able to travel to you location under the required time.\n");
	}
	else 
	{
		printf("You will not be able to travel to your location under the required time.");
	}
	
	
	
}
