#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	fstream mainFile;
	mainFile.open("file1.txt", ios::out);
	string var1;//first var
	if (!mainFile)
	{
		cout << "File creation failed" << endl;
		exit;
	}
	cout << "Input the text to be copied: ";
	getline(cin >> ws, var1);
	mainFile << var1;
	mainFile.close();
	fstream copyFile;
	copyFile.open("file2.txt", ios::out);
	mainFile.open("file1.txt", ios::in);
	string copy_var;//copy content of file1 in string variable;
	while (!mainFile.eof())
	{
		getline(mainFile, copy_var);
	}
	mainFile.close();
	copyFile << copy_var;
	
}