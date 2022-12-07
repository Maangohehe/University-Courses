#include <iostream>
using namespace std;
template<typename T1, typename T2>
void SumArray(T1 intArr[], T2 doubleArr[], int n1, int n2)
{
	int sumInt = 0; double sumDouble = 0;
	for (int i = 0; i < n1; i++)
	{
		sumInt += intArr[i];
	}
	for (int i = 0; i < n2; i++)
	{
		sumDouble += doubleArr[i];
	}
	cout << "Sum of int array: " << sumInt << endl;
	cout << "Sum of double array: " << sumDouble << endl;
}

int main(int argc, char** argv)
{
	int n1, n2;
	cout << "Input the size of int array: ";
	cin >> n1;
	int* arrayOfInt = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		cout << "Input element" << i + 1 << ": ";
		cin >> arrayOfInt[i];
	}
	cout << "Input the size of double array: ";
	cin >> n2;
	double* arrayOfDouble = new double[n2];
	for (int i = 0; i < n2; i++)
	{
		cout << "Input elements " << i + 1 << ": ";
		cin >> arrayOfDouble[i];
	}
	SumArray(arrayOfInt, arrayOfDouble, n1, n2);
	
}