#include <iostream>
using namespace std;

int main()
{
	int *item = new int[4];
	for(int i = 0; i<4; i++)
	{
		cin >> item[i];
	}
	
	for(int i = 0; i<4; i++)
	{
		cout << item[i] << endl;
	}
	
	item = new int;
	
	for(int i = 0; i<5; i++)
	{
		cin >> item[i];
	}
	for(int i = 0; i<5; i++)
	{
		cout << item[i] << endl;
	}
	
	item = new int[5-2];
	
	for(int i = 0; i<5; i++)
	{
		cout << item[i] << endl;
	}
	
}
