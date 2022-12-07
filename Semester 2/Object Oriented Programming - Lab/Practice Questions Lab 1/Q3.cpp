#include <iostream>
#include <string>
using namespace std;
class employee{
	string name[3]; 
	string address[3];
	int year[3];
	public:
		//setter
		void set_value()
		{
			name[0]="Robert";
			name[1]="Sam";
			name[2]="John";
			year[0]=1994; year[1]= 2000; year[2]=1999;
			address[0]="64C- WallsStreat"; address[1]="68D- WallsStreat"; 
			address[2]="26B- WallsStreat";
		}
		
		//getter
		void print_info()
		{
			cout << "Name\tYear of joining\t\tAddress\n";
			for(int i=0; i<3; i++)
			{
				cout << name[i] << "\t" <<year[i] <<"\t\t\t" <<address[i] << endl;
			}
		}
};

int main()
{
	employee e1;
	e1.set_value();
	e1.print_info();
}
