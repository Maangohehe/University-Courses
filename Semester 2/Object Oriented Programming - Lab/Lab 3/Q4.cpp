#include <iostream>
#include <conio.h>
#include <cstdio>
using namespace std;

class counter{
	int counts=0;
	
	//mutator function
	public:
	void setcount(int x)
	{
		counts=x;
	}
	void increaseCounter()
	{
		counts++;
		cout << "Counter has been incremented by 1." << endl;
	}
	
	void decCounter()
	{
		counts++;
		cout << "Counter has been decremented by 1." << endl;
	}
	
	int returnCount()
	{
		return counts;
	}
	
	void dispCounter()
	{
		cout << "Current count: " << counts << endl;
	}
};

int main()
{
	int x, arg, i=1, ch;
	counter a1;
	cout << "What should be the counter set at: ";
	cin >> x;
	a1.setcount(x);
	while(i!=0)
	{
			
	cout << "Press 1 or 2 to increase/decrease the count respectively, 0 to end: ";
	cin >> arg;
	if(arg == 1)
	{
		a1.increaseCounter();
	}
	else if(arg == 2)
	{
		a1.decCounter();
	}
	else if(arg==0)
	{
		i=0;
	}
}
	
	cout << "Press 1 or 2 to display count or return count: " << endl;
	cin >> ch;
	if(ch==1)
	{
		a1.dispCounter();
	}
	else if(ch==2)
	{
		
	cout << "Return Count: " << a1.returnCount() << endl;
	}
	
	
	
}
