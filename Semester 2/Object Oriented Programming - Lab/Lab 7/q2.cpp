#include <iostream>
using namespace std;
class Mammals{
	public:
		void disp_m()
		{
			cout << "I am mammal" << endl;
		}
};

class MarineAnimals{
	public:
		void disp_ma()
		{
			cout << "I am a marine animal" << endl;
		}
};

class BlueWhale:public Mammals, public MarineAnimals{
	public:
		void disp_nl()
		{
			cout << "I belong to both categories: Mammals as well as Marine animals" << endl;
		}
};

int main()
{
	Mammals m; 
	MarineAnimals ma; 
	BlueWhale bl;
	m.disp_m();
	ma.disp_ma();
	bl.disp_nl();
	bl.disp_m();
	bl.disp_ma();	
}

