#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
template<typename T1, typename T2>
class TemplateTest {
	T1 x1;
	T2 x2;
public:
	TemplateTest(T1 x, T2 y)
	{
		
		x1 = x;
		x2 = y;
		cout << "The sum is: " << x1+x2 << endl;
	}
	
};

int main(int argc, char* argv[])
{
	TemplateTest<int, double>temp1(10, 0.23);
	string a = "Now"; 
	string b = "Then";
	TemplateTest<string, string>temp2(a,b);
}