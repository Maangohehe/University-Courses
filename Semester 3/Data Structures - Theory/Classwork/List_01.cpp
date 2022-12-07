#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

template<class T1>
class List {
	T1 *var, *temp;
	int size;
	void Reallocate()
	{
		size++;
		temp = (T1*) realloc(var, size * sizeof(T1));
	}
public:
	List()
	{
		size = 1;
		var = new T1;
		temp = new T1;
	}

	void insert(T1 param, const char* position="start")
	{
		if (!strcmp(position, "start"))
		{
			Reallocate();
			for (int i = 1; i < size - 1; i++)
			{
				var[i] = temp[i - 1];
			}
			temp[0] = param;
			for (int i = 1; i < size - 1; i++)
			{
				temp[i] = var[i];
			}
			var = temp;
		}

		else if (!strcmp(position, "end"))
		{
			Reallocate();
			temp[size - 2] = param;
			var = temp;
		}
	}

	void print()
	{
		for (int i = 0; i < size - 1; i++)
		{
			cout << temp[i] << " ";
		}
		cout << endl;
	}

	~List()
	{
		delete[] var;
	}
};

int main(void)
{
	List<int> l1;
	//insert in the value
	l1.insert(5, "end");
	l1.insert(10, "end");
	l1.insert(15, "end");
	l1.insert(20, "end");
	// time passes

	//insert another value
	l1.print();
	return 0;
}