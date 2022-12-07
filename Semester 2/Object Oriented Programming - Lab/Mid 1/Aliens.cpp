#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
static int count=0;
class Agression
{
	protected:
		int strength, power;	
};

class Kryptonian:protected Agression
{
	public:
		Kryptonian()
		{
			count++;
			cout << "Power level of Kryptonian: ";
			cin >> power;
		}
};

class Saiyan:protected Agression
{
	int ch;
			void SaiyanBlue()
		{
		for(int i=power; i<90000; i++)
			{
				cout << "POWER LEVEL INCREASING!!!!";
				cout << "IT'S OVER 50000\n";
				cout << "Power level scanner: " << i;
				system("cls");
			}
		}
	public:
		Saiyan()
		{
			count++;
			cout << "Power level: ";
			cin >> power;
		}
			void transform_saiyan()
		{
			count++;
			cout << "Transform to a Saiyan Blue or Saiyan Red (0 or 1): ";
			cin >> ch;
			if(ch==1)
			{
				SaiyanBlue();
			}
		}

		
};



int main()
{
	Saiyan Goku, Vegeta;
	Kryptonian Clark;
	cout << "The battle between the Kryptonian and Saiyans is about to start.\n";
	cout << "The Saiyans are to destroy the planet Krypton, for that they shall transform\n";
	Goku.transform_saiyan();
	
	
	
}
