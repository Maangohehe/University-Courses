#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        cout << "Please provide additional arguments, like your name" << endl;
        return 1;
    }
    cout << "Hello! My name is " << argv[1] << endl;
}