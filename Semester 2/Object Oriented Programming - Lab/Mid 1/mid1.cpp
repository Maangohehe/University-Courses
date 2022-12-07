#include <iostream>
#include <string>
using namespace std;
class Hotel{
	public:
		string food_name;
		int price;
		int temp;
			Hotel(string name, int price)
			{
				food_name=name;
				this->price=price;
			}
};

class HotelService{
	public:
		string service;
		int service_price, room_no;
		
			HotelService(string service, int service_price, int room_no)
			{
				service_price=0;
				this->service=service;
				this->service_price=service_price;
				this->room_no=room_no;
			}
};

class RestaurantRoomService:public Hotel, public HotelService{
	int total;
	public:
		RestaurantRoomService(string name, int price, string service, int service_price, int room_no):Hotel(name, price), HotelService(service, service_price, room_no)
		{
			total=0;
			total+=service_price+price;
		}
		void disp()
		{
			cout << "Food Name: " << food_name << endl;
			cout << "Food Price: " << price << endl;
			cout << "Service: " << service << endl;
			cout << "Service Price: " << service_price << endl;
			cout << "Room Number: " << room_no << endl;
			cout << "Total: " << total;
		}
};

int main()
{
	RestaurantRoomService r1("Steak", 2000, "Room Service", 400, 1201);
	r1.disp();
}
