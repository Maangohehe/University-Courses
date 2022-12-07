#include <iostream>

using namespace std;

class Card{
	string language;
	public:
		Card operator== (string lang)
		{
				bool result;
	if(lang=="english")
		result=true;
	else
	result=false;
	return result;
		}
};


int main()
{
	Card c1;
}
