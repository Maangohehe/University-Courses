#include <iostream>
using namespace std;
template<typename T1, typename T2>
T1 *SortArr(T1 *array, T2 n)
{
	T1 temp; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	return array;

}

int main()
{
	int n;
	cout << "Input the size of the array: ";
	cin >> n;
	int* toSort = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Input the element " << i + 1 << ": ";
		cin >> toSort[i];
	}
	int* SortedArray = SortArr(toSort, n);
	for (int i = 0; i < n; i++)
	{
		cout << "Sorted Array " << i + 1 << ": " << SortedArray[i] << endl;
	}
	//For float
	cout << "Input size of array: ";
	cin >> n;
	float* toSortFloat = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Input the element " << i + 1 << ": ";
		cin >> toSortFloat[i];
	}
	float* SortedFloat = SortArr(toSortFloat, n);
	for (int i = 0; i < n; i++)
	{
		cout << "Sorted Array " << i + 1 << ": " << SortedFloat[i] << endl;
	}
}