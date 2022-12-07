#include <iostream>
using namespace std;

class Distance{
	float feet, inches, meters;
	public:
		Distance()
		{
			meters = 0;
			feet = 0;
			inches = 0;
		}
		void input_meters()
		{
			cout << "Input distance in meters: ";
			cin >> meters;
		}
		float disp_in_meters()
		{
			cout << "The distance in meters is: " << meters << endl;
		}
		float disp_in_feet()
		{
			feet = meters * 3.28084;
			cout << "The distance in feet is: " << feet << endl; 
		}
		
		~Distance()
		{
			cout << "Destructor has been called.\nObject Killed." << endl;
		}
};

int main()
{
	Distance d1;
	d1.input_meters();
	d1.disp_in_meters();
	d1.disp_in_feet();
	
}
