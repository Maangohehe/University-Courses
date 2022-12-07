#include <iostream>
using namespace std;

class Phone{
	char number[12], area[4], exchange[4], code[3];
	int i, j;
	public:
		Phone()
		{
			cout << "Please enter your phone number: ";
			cin >> number;
		}
		
		void code_finder()
		{
			for(i=0; i<3; i++)
			{
				code[i] = number[i]; 
			}
			cout << "Area Code: " << code << endl;
		}
		
		void exchange_finder()
		{
			j=0;
			for(i=3; i<7; i++)
			{
				exchange[j] = number[i]; 
				j++;
			}
			
			cout << "Exchange code: ";
			
			for(i=0; i<4; i++)
			{
				cout << exchange[i];	
			}
			cout << endl;
		}
		
		void area_finder()
		{
			j=0;
			for(i=7; i<12; i++)
			{
				area[j] = number[i]; 
				j++;
			}
			cout << "Area Code: " << area << endl;
		}
		
};

int main()
{
	Phone p1;
	p1.code_finder();
	p1.exchange_finder();
	p1.area_finder();
}
