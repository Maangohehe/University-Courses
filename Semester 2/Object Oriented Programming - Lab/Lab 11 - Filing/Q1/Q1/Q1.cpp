#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
	fstream readString;
	readString.open("string_file.txt", ios::out);
	string first;
	cout << "Input a string in file: ";
	getline(cin >> ws, first);
	readString << first;
	readString.close();
	readString.open("string_file.txt", ios::in | ios::out);
	string newvar;
	if (readString.is_open())
	{
		while (!readString.eof())
		{
			char mychar = readString.get();
			cout << mychar;
		}
	}

}